/*!
 *  \file mbs_app_storage.c
 *
 *  \brief
 *  Storage implementation for Modbus server register and coil data.
 *
 *  \author
 *  Texas Instruments Incorporated
 *
 *  \copyright
 *  Copyright (C) 2025 Texas Instruments Incorporated
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <stdint.h>
#include <mbs_tcpclient.h>
#include <mbs_tcpserver.h>
#include <mbs_devicechannel.h>
#include "mbs_app.h"
#include "lwip/err.h"

// extern void sync_mb_di(void);
// extern void sync_mb_coil(void);
/* ========================================================================== */
/*                            Global Variables                                */
/* ========================================================================== */
MbsStorage mbs_app_storage;
MbsDeviceChannelConfig mbs_app_deviceChannelConfig;

/* ========================================================================== */
/*                          Function Declarations                             */
/* ========================================================================== */

/* ========================================================================== */
/*                          Function Definitions                              */
/* ========================================================================== */


nmbs_error MbsApp_read_coils(uint16_t address, uint16_t quantity, nmbs_bitfield coils_out, uint8_t unit_id, void* arg)
{
    nmbs_error result = NMBS_ERROR_NONE;
#if (MBS_MODBUS_OPERATION_DEBUG == 1)
    printf("read_coils [%d] %d - %d\r\n", unit_id, address, quantity);
#endif
#if MBS_MAX_COILS > 0
    if(address < MBS_COILS_OFFSET)
    {
        result = NMBS_EXCEPTION_ILLEGAL_DATA_ADDRESS;
    }
    else
    {
        address =  address - MBS_COILS_OFFSET;
        if((address + quantity) <= MBS_MAX_COILS)
        {
            for(int i = 0; i < quantity; i++)
            {
                bool value = nmbs_bitfield_read(mbs_app_storage.Coils, address);
                nmbs_bitfield_write(coils_out, i, value);
                address++;
            }
        }
        else
        {
            result = NMBS_EXCEPTION_ILLEGAL_DATA_ADDRESS;
        }
    }

#else
    result = NMBS_EXCEPTION_ILLEGAL_FUNCTION;
#endif
    return result;
}

nmbs_error MbsApp_write_multiple_coils(uint16_t address, uint16_t quantity, const nmbs_bitfield coils, uint8_t unit_id, void* arg)
{
    nmbs_error result = NMBS_ERROR_NONE;
    uint16_t value = 0x0;
#if (MBS_MODBUS_OPERATION_DEBUG == 1)
    printf("    multiple_coils [%d] %d - %d\r\n", unit_id, address - MBS_COILS_OFFSET, quantity);
#endif
#if MBS_MAX_COILS > 0
    if(address < MBS_COILS_OFFSET)
    {
        result = NMBS_EXCEPTION_ILLEGAL_DATA_ADDRESS;
    }
    else
    {
        address =  address - MBS_COILS_OFFSET;
        if((address + quantity) <= MBS_MAX_COILS)
        {
            for(int i = 0; i < quantity; i++)
            {
                nmbs_bitfield_write(mbs_app_storage.Coils, address, nmbs_bitfield_read(coils, i));
                address++;
                
                uint8_t bit = nmbs_bitfield_read(coils, i);
                value |= (bit << i);
            }
        }
        else
        {
            result = NMBS_EXCEPTION_ILLEGAL_DATA_ADDRESS;
        }
    }

#else
    result = NMBS_EXCEPTION_ILLEGAL_FUNCTION;
#endif
#if (MBS_MODBUS_OPERATION_DEBUG == 1)
    printf("    value = 0x%x\r\n", value);
#endif
    // if (result == NMBS_ERROR_NONE)
    // {
    //     sync_mb_coil();
    // }
    
    return result;
}

nmbs_error MbsApp_read_discrete_input(uint16_t address, uint16_t quantity, nmbs_bitfield InputsOut, uint8_t unit_id, void* arg)
{
    nmbs_error result = NMBS_ERROR_NONE;
#if (MBS_MODBUS_OPERATION_DEBUG == 1)
    printf("read_discrete_input [%d] %d - %d\r\n", unit_id, address, quantity);
#endif
#if MBS_MAX_DISCRETE_COILS > 0
    if(address < MBS_DISCRETE_COILS_OFFSET)
    {
        result = NMBS_EXCEPTION_ILLEGAL_DATA_ADDRESS;
    }
    else
    {
        address =  address - MBS_DISCRETE_COILS_OFFSET;
        if((address + quantity) <= MBS_MAX_DISCRETE_COILS)
        {
            for(int i = 0; i < quantity; i++)
            {
                bool value = nmbs_bitfield_read(mbs_app_storage.DiscreteCoils, address);
                nmbs_bitfield_write(InputsOut, i, value);
                address++;
            }
        }
        else
        {
            result = NMBS_EXCEPTION_ILLEGAL_DATA_ADDRESS;
        }
    }

#else
    result = NMBS_EXCEPTION_ILLEGAL_FUNCTION;
#endif
    // if (result == NMBS_ERROR_NONE)
    // {
    //     sync_mb_di();
    // }
    
    return result;
}

nmbs_error MbsApp_write_single_coils(uint16_t address, bool value, uint8_t unit_id, void* arg)
{
    nmbs_error result = NMBS_ERROR_NONE;
#if (MBS_MODBUS_OPERATION_DEBUG == 1)
    printf("write_single_coils [%d] %d\r\n", unit_id, address);
#endif
#if MBS_MAX_COILS > 0
    if(address < MBS_COILS_OFFSET)
    {
        result = NMBS_EXCEPTION_ILLEGAL_DATA_ADDRESS;
    }
    else
    {
        address =  address - MBS_COILS_OFFSET;
        if (address < MBS_MAX_COILS)
        {
            nmbs_bitfield_write(mbs_app_storage.Coils, address, value);
        }
        else
        {
            result = NMBS_EXCEPTION_ILLEGAL_DATA_ADDRESS;
        }
    }
#else
    result = NMBS_EXCEPTION_ILLEGAL_FUNCTION;
#endif
    // if (result == NMBS_ERROR_NONE)
    // {
    //     sync_mb_coil();
    // }

    return result;
}

nmbs_error MbsApp_read_holding_registers(uint16_t address, uint16_t quantity, uint16_t* registers_out, uint8_t unit_id, void* arg)
{
    nmbs_error result = NMBS_ERROR_NONE;
#if (MBS_MODBUS_OPERATION_DEBUG == 1)
    printf("read_holding_registers [%d] %d - %d\r\n", unit_id, address, quantity);
#endif
#if MBS_MAX_HOLDING_REGISTERS > 0
    if(address < MBS_HOLDING_REGISTER_OFFSET)
    {
        result = NMBS_EXCEPTION_ILLEGAL_DATA_ADDRESS;
    }
    else
    {
        address =  address - MBS_HOLDING_REGISTER_OFFSET;
        if((address + quantity ) <= MBS_MAX_HOLDING_REGISTERS)
        {
            for(int i = 0; i < quantity; i++)
            {
                registers_out[i] = mbs_app_storage.HoldingRegisters[address++];
            }
        }
        else
        {
            result = NMBS_EXCEPTION_ILLEGAL_DATA_ADDRESS;
        }
    }

#else
    result = NMBS_EXCEPTION_ILLEGAL_FUNCTION;
#endif
    return result;
}

nmbs_error MbsApp_read_input_registers(uint16_t address, uint16_t quantity, uint16_t* registers_out, uint8_t unit_id, void* arg)
{
    nmbs_error result = NMBS_ERROR_NONE;
#if (MBS_MODBUS_OPERATION_DEBUG == 1)
    printf("read_input_registers [%d] %d - %d\r\n", unit_id, address, quantity);
#endif
#if MBS_MAX_INPUT_REGISTERS > 0
    if(address < MBS_INPUT_REGISTER_OFFSET)
    {
        result = NMBS_EXCEPTION_ILLEGAL_DATA_ADDRESS;
    }
    else
    {
        address =  address - MBS_INPUT_REGISTER_OFFSET;

        if((address + quantity) <= MBS_MAX_INPUT_REGISTERS)
        {
            for(int i = 0; i < quantity; i++)
            {
                registers_out[i] = mbs_app_storage.InputRegisters[address++];
            }
        }
        else
        {
            result = NMBS_EXCEPTION_ILLEGAL_DATA_ADDRESS;
        }
    }
#else
    result = NMBS_EXCEPTION_ILLEGAL_FUNCTION;
#endif
    return result;
}

nmbs_error MbsApp_write_multiple_registers(uint16_t address, uint16_t quantity, const uint16_t* registers, uint8_t unit_id, void* arg)
{
    nmbs_error result = NMBS_ERROR_NONE;
#if (MBS_MODBUS_OPERATION_DEBUG == 1)
    printf("write_multiple_registers [%d] %d - %d\r\n", unit_id, address, quantity);
#endif
#if MBS_MAX_HOLDING_REGISTERS > 0
    if(address < MBS_HOLDING_REGISTER_OFFSET)
    {
        result = NMBS_EXCEPTION_ILLEGAL_DATA_ADDRESS;
    }
    else
    {
        address =  address - MBS_HOLDING_REGISTER_OFFSET;
        if((address + quantity) <= MBS_MAX_HOLDING_REGISTERS)
        {
            for(int i = 0; i < quantity; i++)
            {
                mbs_app_storage.HoldingRegisters[address++] = registers[i];
            }
        }
        else
        {
            result = NMBS_EXCEPTION_ILLEGAL_DATA_ADDRESS;
        }
    }

#else
    result = NMBS_EXCEPTION_ILLEGAL_FUNCTION;
#endif
    return result;
}

nmbs_error MbsApp_write_single_registers(uint16_t address, uint16_t value, uint8_t unit_id, void* arg)
{
    nmbs_error result = NMBS_ERROR_NONE;
#if (MBS_MODBUS_OPERATION_DEBUG == 1)
    printf("write_single_registers [%d] %d - %d\r\n", unit_id, address, value);
#endif
#if MBS_MAX_HOLDING_REGISTERS > 0
    if(address < MBS_HOLDING_REGISTER_OFFSET)
    {
        result = NMBS_EXCEPTION_ILLEGAL_DATA_ADDRESS;
    }
    else
    {
        address =  address - MBS_HOLDING_REGISTER_OFFSET;

        if(address  < MBS_MAX_HOLDING_REGISTERS)
        {
            mbs_app_storage.HoldingRegisters[address] = value;
        }
        else
        {
            result = NMBS_EXCEPTION_ILLEGAL_DATA_ADDRESS;
        }
    }

#else
    result = NMBS_EXCEPTION_ILLEGAL_FUNCTION;
#endif
    return result;
}
