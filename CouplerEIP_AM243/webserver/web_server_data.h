/*!
 *  \file web_server_data.h
 *
 *  \brief
 *  Application Web Server File Data
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

#ifndef WEB_SERVER_DATA_H
#define WEB_SERVER_DATA_H

#ifdef __cplusplus
extern "C" {
#endif

    static const char response_200_content_html[] = "HTTP/1.1 200 OK\r\nContent-type: text/html\r\n\r\n";

    static const char response_200_content_js[] = "HTTP/1.1 200 OK\r\nContent-type: text/javascript\r\n\r\n";

    static const char response_200_content_image[] = "HTTP/1.1 200 OK\r\nContent-type: image/x-icon\r\n\r\n";

    static const char response_404[] = "HTTP/1.1 404 Not Found\r\nContent-type: text/html\r\n\r\n"
    "<html>"
        "<head>"
            "<style>"
                "h1 {"
                    "text-align: center;"
                    "font-family: Arial,sans-serif;"
                "}"
                "h2 {"
                    "text-align: center;"
                    "font-family: Arial,sans-serif;"
                "}"
            "</style>"
            "<meta charset=\"utf-8\"/>"
            "<title>Gespant IO Coupler - Dashboard</title>"
        "</head>"
        "<body>"
            "<h1>Gespant IO Coupler - Dashboard</h1>"
            "<h2>404 : Not Found </h2>"
        "</body>"
    "</html>";

    static const char response_501[] = "HTTP/1.1 501 Not Implemented\r\nContent-type: text/html\r\n\r\n"
    "<html>"
        "<head>"
            "<style>"
                "h1 {"
                    "text-align: center;"
                    "font-family: Arial,sans-serif;"
                "}"
                "h2 {"
                    "text-align: center;"
                    "font-family: Arial,sans-serif;"
                "}"
            "</style>"
            "<meta charset=\"utf-8\"/>"
            "<title>Gespant IO Coupler - Dashboard</title>"
        "</head>"
        "<body>"
            "<h1>Gespant IO Coupler - Dashboard</h1>"
            "<h2>501 : Not Implemented </h2>"
        "</body>"
    "</html>";

    static const char main_html[] =
    "<!DOCTYPE HTML>"
    "<html>"
        "<head>"
            "<style>"
                "body {"
                "    margin: 0;"
                "    background-color: #f4f6f8;"
                "    font-family: Roboto, Arial, sans-serif;"
                "}"

                /* Header */
                "#titlearea {"
                "    background: #1B3F21;"
                "    color: white;"
                "    padding: 10px 20px;"
                "}"

                "#projectname {"
                "    font-size: 20px;"
                "    font-weight: bold;"
                "}"

                /* Layout */
                "#content {"
                "    max-width: 1000px;"
                "    margin: 20px auto;"
                "}"

                /* Card style */
                ".card {"
                "    background: white;"
                "    border-radius: 8px;"
                "    padding: 15px;"
                "    margin-bottom: 20px;"
                "    box-shadow: 0 2px 6px rgba(0,0,0,0.1);"
                "}"

                /* Table */
                "table {"
                "    width: 100%;"
                "    border-collapse: collapse;"
                "    font-size: 13px;"
                "}"

                "caption {"
                "    text-align: left;"
                "    font-weight: bold;"
                "    margin-bottom: 10px;"
                "}"

                "th {"
                "    background-color: #2f4f6f;"
                "    color: white;"
                "    padding: 8px;"
                "    text-align: left;"
                "}"

                "td {"
                "    padding: 6px 8px;"
                "}"

                "tr:nth-child(even) {"
                "    background-color: #f2f2f2;"
                "}"

                /* Status colors */
                ".ok { color: green; font-weight: bold; }"
                ".warn { color: orange; font-weight: bold; }"
                ".err { color: red; font-weight: bold; }"
            "</style>"
            "<meta charset=\"utf-8\"/>"
            "<title>Gespant IO Coupler - Dashboard</title>"
            "<script src=\"main.js\"></script>"
            "<script src=\"wsio.js\"></script>"
        "</head>"
        "<body onload=\"getCpuLoad();get_IOdata()\">"
            "<div id=\"titlearea\">"
                "<table cellspacing=\"0\" cellpadding=\"0\">"
                    "<tbody>"
                        "<tr style=\"height: 40px;\">"
                            "<td id=\"projectlogo\">"
                                "<svg width=\"186px\" height=\"36px\" viewBox=\"0 0 500 100\" xmlns=\"http://www.w3.org/2000/svg\">"
                                    /* The Icon/Symbol */
                                    "<g fill=\"none\" stroke-width=\"8\">"
                                        "<path d=\"M20,20 h30 v30 h-30 z\" stroke=\"#800000\"/>"
                                        "<path d=\"M60,20 h30 v30 h-30 z\" stroke=\"#1B3F21\"/>"
                                        "<path d=\"M20,60 h30 v30 h-30 z\" stroke=\"#1B3F21\"/>"
                                        "<path d=\"M60,60 h30 v30 h-30 z\" stroke=\"#1B3F21\"/>"
                                        "<line x1=\"110\" y1=\"20\" x2=\"110\" y2=\"80\" stroke=\"#800000\" stroke-width=\"4\"/>"
                                    "</g>"
                                    /* Main Text: gespant */
                                    "<text x=\"130\" y=\"70\" font-family=\"Arial, sans-serif\" font-weight=\"bold\" font-size=\"75\" fill=\"#1B3F21\">gespant</text>"
                                    /* Subtext: technology */
                                    "<text x=\"280\" y=\"95\" font-family=\"Arial, sans-serif\" font-size=\"25\" letter-spacing=\"8\" fill=\"#800000\">technology</text>"
                                "</svg>"
                            "</td>"
                            "<td id=\"projectalign\">"
                                "<div id=\"projectname\">Gespant IO Coupler EtherNet/IP</div>"
                            "</td>"
                        "</tr>"
                    "</tbody>"
                "</table>"
            "</div>"
            "<div id=\"nav\"></div>"
            "<div id=\"content\">"
                "<table id=\"threadinfo\" width=\"50%\" >"
                    "<colgroup>"
                        "<col id=\"colgroupTaskName\">"
                    "</colgroup>"
                    "<colgroup>"
                        "<col id=\"colgroupCpuLoad\">"
                    "</colgroup>"
                    "<caption>CPU Load Summary</caption>"
                    "<tbody>"
                        "<tr>"
                            "<th>Task Name</th>"
                            "<th>CPU Load</th>"
                        "</tr>"
                        "<tr>"
                            "<th id = \"r0c0\"></th>"
                            "<td id = \"r0c1\">0 %</td>"
                        "</tr>"
                        "<tr>"
                            "<th id = \"r1c0\"></th>"
                            "<td id = \"r1c1\">0 %</td>"
                        "</tr>"
                        "<tr>"
                            "<th id = \"r2c0\"></th>"
                            "<td id = \"r2c1\">0 %</td>"
                        "</tr>"
                        "<tr>"
                            "<th id = \"r3c0\"></th>"
                            "<td id = \"r3c1\">0 %</td>"
                        "</tr>"
                        "<tr>"
                            "<th id = \"r4c0\"></th>"
                            "<td id = \"r4c1\">0 %</td>"
                        "</tr>"
                        "<tr>"
                            "<th id = \"r5c0\"></th>"
                            "<td id = \"r5c1\">0 %</td>"
                        "</tr>"
                        "<tr>"
                            "<th id = \"r6c0\"></th>"
                            "<td id = \"r6c1\">0 %</td>"
                        "</tr>"
                        "<tr>"
                            "<th id = \"r7c0\"></th>"
                            "<td id = \"r7c1\">0 %</td>"
                        "</tr>"
                        "<tr>"
                            "<th id = \"r8c0\"></th>"
                            "<td id = \"r8c1\">0 %</td>"
                        "</tr>"
                        "<tr>"
                            "<th id = \"r9c0\"></th>"
                            "<td id = \"r9c1\">0 %</td>"
                        "</tr>"
                        "<tr>"
                            "<th id = \"r10c0\"></th>"
                            "<td id = \"r10c1\">0 %</td>"
                        "</tr>"
                        "<tr>"
                            "<th id = \"r11c0\"></th>"
                            "<td id = \"r11c1\">0 %</td>"
                        "</tr>"
                        "<tr>"
                            "<th id = \"r12c0\"></th>"
                            "<td id = \"r12c1\">0 %</td>"
                        "</tr>"
                        "<tr>"
                            "<th id = \"r13c0\"></th>"
                            "<td id = \"r13c1\">0 %</td>"
                        "</tr>"
                        "<tr>"
                            "<th id = \"r14c0\"></th>"
                            "<td id = \"r14c1\">0 %</td>"
                        "</tr>"
                        "<tr>"
                            "<th id = \"r15c0\"></th>"
                            "<td id = \"r15c1\">0 %</td>"
                        "</tr>"
                        "<tr>"
                            "<th id = \"r16c0\"></th>"
                            "<td id = \"r16c1\">0 %</td>"
                        "</tr>"
                        "<tr>"
                            "<th id = \"r17c0\"></th>"
                            "<td id = \"r17c1\">0 %</td>"
                        "</tr>"
                        "<tr>"
                            "<th id = \"r18c0\"></th>"
                            "<td id = \"r18c1\">0 %</td>"
                        "</tr>"
                        "<tr>"
                            "<th id = \"r19c0\"></th>"
                            "<td id = \"r19c1\">0 %</td>"
                        "</tr>"
                        "<tr>"
                            "<th id = \"r20c0\"></th>"
                            "<td id = \"r20c1\">0 %</td>"
                        "</tr>"
                        "<tr>"
                            "<th id = \"r21c0\"></th>"
                            "<td id = \"r21c1\">0 %</td>"
                        "</tr>"
                        "<tr>"
                            "<th id = \"r22c0\"></th>"
                            "<td id = \"r22c1\">0 %</td>"
                        "</tr>"
                        "<tr>"
                            "<th id = \"r23c0\"></th>"
                            "<td id = \"r23c1\">0 %</td>"
                        "</tr>"
                        "<tr>"
                            "<th id = \"r24c0\"></th>"
                            "<td id = \"r24c1\">0 %</td>"
                        "</tr>"
                        "<tr>"
                            "<th id = \"r25c0\"></th>"
                            "<td id = \"r25c1\">0 %</td>"
                        "</tr>"
                        "<tr>"
                            "<th id = \"r26c0\"></th>"
                            "<td id = \"r26c1\">0 %</td>"
                        "</tr>"
                        "<tr>"
                            "<th id = \"r27c0\"></th>"
                            "<td id = \"r27c1\">0 %</td>"
                        "</tr>"
                        "<tr>"
                            "<th id = \"r28c0\"></th>"
                            "<td id = \"r28c1\">0 %</td>"
                        "</tr>"
                        "<tr>"
                            "<th id = \"r29c0\"></th>"
                            "<td id = \"r29c1\">0 %</td>"
                        "</tr>"
                        "<tr>"
                            "<th id = \"r30c0\"></th>"
                            "<td id = \"r30c1\">0 %</td>"
                        "</tr>"
                        "<tr>"
                            "<th id = \"r31c0\"></th>"
                            "<td id = \"r31c1\">0 %</td>"
                        "</tr>"
                        "<tr>"
                            "<th id = \"r32c0\"></th>"
                            "<td id = \"r32c1\">0 %</td>"
                        "</tr>"
                    "</tbody>"
                "</table>"

                "<br>"
                "<div id=\"iotable_container\">"
                "    <table id=\"iotable\" width=\"50%\">"
                "        <caption>IO Data</caption>"
                "        <tbody>"
                "            <tr>"
                "                <th>ID</th>"
                "                <th>IO Type</th>"
                "                <th>Data Value</th>"
                "                <th>State</th>"
                "                <th>Last Error Type</th>"
                "                <th>Last Error Code</th>"
                "            </tr>"
                "            <tr><td colspan=\"6\">Loading...</td></tr>"
                "        </tbody>"
                "    </table>"
                "</div>"
            "</div>"
        "</body>"
    "</html>";

    static const char main_js[] =
    "function getCpuLoad()"
    "{"
        "var cpuLoad = 0;"
        "function getCpuLoadComplete()"
        "{"
            "if(cpuLoad.readyState == 4)"
            "{"
                "if(cpuLoad.status == 200)"
                "{"
                    "if(cpuLoad.responseText != null)"
                    "{"
                        "var rowsNum = 20;"
                        "var id = \"\";"
                        "var row = 0;"
                        "var data = cpuLoad.responseText;"
                        "const dataArray = data.split(\",\");"
                        "for (let i = 0; i < dataArray.length; i = i + 2)"
                        "{"
                            "row = i/2;"
                            "if (rowsNum > i/2)"
                            "{"
                                "id = \"r\" + row + \"c0\";"
                                "document.getElementById(id).innerHTML = dataArray[i];"
                                "id = \"r\" + row + \"c1\";"
                                "document.getElementById(id).innerHTML = dataArray[i + 1];"
                            "}"
                        "}"
                    "}"
                "}"
            "}"
        "}"
        "cpuLoad = new XMLHttpRequest();"
        "if(cpuLoad)"
        "{"
            "cpuLoad.open(\"GET\", \"/cpuLoad?id=\" + Math.random(), true);"
            "cpuLoad.responseType = \"text\";"
            "cpuLoad.onreadystatechange = getCpuLoadComplete;"
            "cpuLoad.send(null);"
        "}"
        "setTimeout('getCpuLoad()', 1000);"
    "}";

    static const char wsio_js[] =
    "function get_IOdata()"
    "{"
    "    var ioReq = new XMLHttpRequest();"

    "    ioReq.onreadystatechange = function()"
    "    {"
    "        if(ioReq.readyState == 4)"
    "        {"
    "            if(ioReq.status == 200)"
    "            {"
    "                if(ioReq.responseText != null)"
    "                {"
    "                    var container = document.getElementById('iotable_container');"
    "                    if(container)"
    "                    {"
    "                        container.innerHTML = ioReq.responseText;"
    "                    }"
    "                }"
    "            }"
    "        }"
    "    };"

    "    ioReq.open('GET', '/io-data?id=' + Math.random(), true);"
    "    ioReq.send(null);"

    "    setTimeout(get_IOdata, 5000);"
    "}";

#ifdef  __cplusplus
}
#endif

#endif // WEB_SERVER_DATA_H
