#ifndef GSP_WS_HTML_H
#define GSP_WS_HTML_H

#ifdef __cplusplus
extern "C" {
#endif

static const char response_200_content_html[] = "HTTP/1.1 200 OK\r\nContent-type: text/html\r\n\r\n";

static const char response_200_content_css[] = "HTTP/1.1 200 OK\r\nContent-type: text/css\r\n\r\n";

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
    
static const char style_css[] =
":root{"
"--primary-orange:#fd6005;"
"--sidebar-grey:#e9ecef;"
"--sidebar-hover:#dee2e6;"
"--bg-body:#f8f9fa;"
"--white:#fff;"
"--border:#dee2e6;"
"--text-dark:#495057;"
"--success:#4caf50;"
"--danger:#f44336;"
"--transition:all .3s ease;"
"}"

/* --- SIDEBAR --- */
/* --- ORIGINAL GREY SIDEBAR STYLE --- */
".sidebar-container {"
"   width: 240px;"
"   background: #cacaca;"          /* Original Light-Grey Background */
"   border-right: 1px solid #dee2e6;"
"   color: #333;"
"   position: fixed;"
"   height: 100vh;"
"   display: flex;"
"   flex-direction: column;"
"}"

"header {"
"   padding: 20px;"
"   background: #f8f9fa;"         /* Slightly different grey for logo area */
"   border-bottom: 1px solid #dee2e6;"
"   text-align: center;"
"}"

"header img {" 
"   max-width: 100%;" 
"   height: auto;" 
    /* Remove the 'invert' filter if your logo is already dark/colored */
"}"

".sidebar-nav { flex-grow: 1; margin-top: 10px; }"
".sidebar-nav ul { list-style: none; }"

".sidebar-nav ul li a {"
"   padding: 12px 20px;"
"   display: flex;"
"   align-items: center;"
"   color: #495057;"             /* Original Text Color */
"   text-decoration: none;"
"   gap: 12px;"
"   font-weight: 500;"
"   transition: all 0.2s;"
"}"

/* Hover Effect: Original Lighter Grey */
".sidebar-nav ul li a:hover {"
"   background: #dee2e6;"
"   color: #000;"
"}"

/* Active State: Original Orange Accent */
".sidebar-nav ul li.active a {"
"   background: #fff;"
"   color: #fd6005;"             /* Your brand orange */
"   border-left: 4px solid #fd6005;"
"}"

".sidebar-footer {"
"   padding: 15px;"
"   font-size: 12px;"
"   color: #6c757d;"
"   background: #f8f9fa;"
"   border-top: 1px solid #dee2e6;"
"   text-align: center;"
"}"

"*{margin:0;padding:0;box-sizing:border-box;font-family:Arial,sans-serif;}"
"body{background:var(--bg-body);display:flex;min-height:100vh;}"

"main,#content{margin-left:240px;padding:20px;width:calc(100%-240px);}"

".sidebar{width:240px;background:var(--sidebar-grey);position:fixed;height:100%;padding:10px;}"
".sidebar img{display:block;margin:auto;margin-bottom:10px;}"
".sidebar a{display:block;padding:10px;color:#333;text-decoration:none;}"
".sidebar a:hover{background:var(--sidebar-hover);}"
".active{background:#fff;color:var(--primary-orange);font-weight:bold;}"

".section-title{font-size:1.2rem;font-weight:600;margin-bottom:15px;border-bottom:2px solid var(--border);padding-bottom:5px;}"

".grid,.config-grid{display:grid;grid-template-columns:repeat(auto-fit,minmax(400px,1fr));gap:15px;}"

".card,.themed-card{background:#fff;border:1px solid var(--border);border-radius:10px;padding:15px;box-shadow:0 2px 6px rgba(0,0,0,.05);}"

".btn{padding:10px;border:none;border-radius:6px;cursor:pointer;font-weight:600;}"
".btn-primary{background:var(--primary-orange);color:#fff;}"
".btn:hover{opacity:.9;}"

"table,.status-table{width:100%;border-collapse:collapse;font-size:13px;}"
"th{background:#2f4f6f;color:#fff;padding:6px;}"
"td{padding:6px;border:1px solid var(--border);}"
"tr:nth-child(even){background:#f2f2f2;}"

".register-grid{display:grid;grid-template-columns:repeat(auto-fit,72px);}"
".register-block{width:72px;height:610px;position:relative;box-shadow:0 4px 6px rgba(0,0,0,.3);}"

".bit{width:8px;height:8px;background:#444;}"
".bit.active{background:#44D62C;box-shadow:0 0 5px #44D62C;}"

".modal-overlay{position:fixed;top:0;left:0;width:100%;height:100%;background:rgba(0,0,0,.6);display:none;align-items:center;justify-content:center;z-index:1000;}"
".modal-content{background:#fff;padding:20px;border-radius:10px;width:400px;}"

".led{position:absolute;width:10px;height:10px;background:#fff;}"
".led.on{background:lime;box-shadow:0 0 6px lime;}"

"@media(max-width:768px){"
"main,#content{margin-left:0;width:100%;}"
".sidebar{display:none;}"
"}";

static const char header_html[] =
"HTTP/1.1 200 OK\r\n"
"Content-Type: text/html\r\n"
"Connection: close\r\n\r\n";

static const char html_top[] =
"<!DOCTYPE html><html>"
"<head>"
"   <meta charset=\"utf-8\">"
"   <title>Gespant IO Coupler</title>"
"   <link rel=\"stylesheet\" href=\"/style.css\">"
"   <script src=\"main.js\"></script>"
"   <script src=\"wsio.js\"></script>"
"</head>"
"<body onload=\"%s\">"

"   <div id=\"title\">Gespant IO Coupler EtherNet/IP</div>"

"   <div class=\"sidebar-container\">"
"       <header>"
"           <svg width=\"186px\" height=\"36px\" viewBox=\"0 0 500 100\" xmlns=\"http://www.w3.org/2000/svg\">"
"               <path d=\"M0 0 C9.57 0 19.14 0 29 0 C29 5.61 29 11.22 29 17 C23.06 17 17.12 17 11 17 C11 15.02 11 13.04 11 11 C14.63 11 18.26 11 22 11 C22 9.35 22 7.7 22 6 C17.05 6 12.1 6 7 6 C7 10.95 7 15.9 7 21 C9.25650391 20.98259766 9.25650391 20.98259766 11.55859375 20.96484375 C13.51822793 20.95546751 15.47786345 20.94636713 17.4375 20.9375 C18.92733398 20.92493164 18.92733398 20.92493164 20.44726562 20.91210938 C21.39150391 20.90888672 22.33574219 20.90566406 23.30859375 20.90234375 C24.62041626 20.89448853 24.62041626 20.89448853 25.95874023 20.88647461 C28 21 28 21 29 22 C29 23.98 29 25.96 29 28 C19.43 28 9.86 28 0 28 C0 18.76 0 9.52 0 0 Z \" fill=\"#16391E\" transform=\"translate(9,65)\"/>"
"               <path d=\"M0 0 C1.16781006 0.00523682 2.33562012 0.01047363 3.53881836 0.01586914 C4.79887695 0.0190918 6.05893555 0.02231445 7.35717773 0.02563477 C8.6976732 0.03399136 10.03816799 0.04245632 11.37866211 0.05102539 C12.72306153 0.05603879 14.06746271 0.06060197 15.41186523 0.06469727 C18.71334151 0.07653051 22.01473014 0.09301568 25.31616211 0.11352539 C25.31616211 2.09352539 25.31616211 4.07352539 25.31616211 6.11352539 C18.05616211 6.11352539 10.79616211 6.11352539 3.31616211 6.11352539 C3.31616211 11.39352539 3.31616211 16.67352539 3.31616211 22.11352539 C8.26616211 22.11352539 13.21616211 22.11352539 18.31616211 22.11352539 C18.31616211 20.46352539 18.31616211 18.81352539 18.31616211 17.11352539 C14.68616211 17.11352539 11.05616211 17.11352539 7.31616211 17.11352539 C7.31616211 15.13352539 7.31616211 13.15352539 7.31616211 11.11352539 C13.25616211 11.11352539 19.19616211 11.11352539 25.31616211 11.11352539 C25.31616211 16.72352539 25.31616211 22.33352539 25.31616211 28.11352539 C15.74616211 28.11352539 6.17616211 28.11352539 -3.68383789 28.11352539 C-3.70446289 23.67915039 -3.72508789 19.24477539 -3.74633789 14.67602539 C-3.75544189 13.27553955 -3.7645459 11.87505371 -3.77392578 10.43212891 C-3.77642334 9.33827881 -3.7789209 8.24442871 -3.78149414 7.11743164 C-3.78673096 5.99151611 -3.79196777 4.86560059 -3.79736328 3.70556641 C-3.64207883 0.16007175 -3.55501654 0.15037594 0 0 Z \" fill=\"#621211\" transform=\"translate(12.683837890625,31.886474609375)\"/>"
"               <path d=\"M0 0 C9.24 0 18.48 0 28 0 C28 9.24 28 18.48 28 28 C18.76 28 9.52 28 0 28 C0 25.69 0 23.38 0 21 C7.26 21 14.52 21 22 21 C22 16.05 22 11.1 22 6 C16.72 6 11.44 6 6 6 C6 7.65 6 9.3 6 11 C9.63 11 13.26 11 17 11 C17 12.98 17 14.96 17 17 C11.39 17 5.78 17 0 17 C0 11.39 0 5.78 0 0 Z \" fill=\"#14371F\" transform=\"translate(42,65)\"/>"
"               <path d=\"M0 0 C9.24 0 18.48 0 28 0 C28 9.24 28 18.48 28 28 C18.76 28 9.52 28 0 28 C0 22.39 0 16.78 0 11 C5.61 11 11.22 11 17 11 C17 12.98 17 14.96 17 17 C13.37 17 9.74 17 6 17 C6 18.65 6 20.3 6 22 C11.28 22 16.56 22 22 22 C22 16.72 22 11.44 22 6 C14.74 6 7.48 6 0 6 C0 4.02 0 2.04 0 0 Z \" fill=\"#14371D\" transform=\"translate(42,32)\"/>"
"               <line x1=\"110\" y1=\"20\" x2=\"110\" y2=\"80\" stroke=\"#800000\" stroke-width=\"4\"/>"
                /* Main Text: gespant */
"               <text x=\"130\" y=\"70\" font-family=\"Arial, sans-serif\" font-weight=\"bold\" font-size=\"75\" fill=\"#1B3F21\">gespant</text>"
                /* Subtext: technology */
"               <text x=\"280\" y=\"95\" font-family=\"Arial, sans-serif\" font-size=\"25\" letter-spacing=\"8\" fill=\"#800000\">technology</text>"
"           </svg>"
"       </header>"
"       <nav class=\"sidebar-nav\">"
"           <ul>"
"               <li class=\"%s\"><a href=\"/main.html\">"
"                   <svg width=\"18\" height=\"18\" viewBox=\"0 -1 22 22\" fill=\"none\" xmlns=\"http://www.w3.org/2000/svg\" style=\"vertical-align:middle; margin-right:6px;\">"
"                       <path fill-rule=\"evenodd\" clip-rule=\"evenodd\" "
"                       d=\"M2 11C1.08049 11 0.648384 9.86349 1.33564 9.25259L10.3356 1.25259C10.7145 0.915803 11.2855 0.915803 11.6644 1.25259L20.6644 9.25259C21.3516 9.86349 20.9195 11 20 11H19V18C19 18.5523 18.5523 19 18 19H4C3.44772 19 3 18.5523 3 18V11H2ZM8 17V12C8 11.4477 8.44772 11 9 11H13C13.5523 11 14 11.4477 14 12V17H17V10C17 9.62477 17.2067 9.29781 17.5124 9.12674L11 3.33795L4.48762 9.12674C4.79334 9.29781 5 9.62477 5 10V17H8ZM10 17V13H12V17H10Z\" "
"                       fill=\"currentColor\"/>"
"                   </svg>"
"                   <span>Dashboard</span></a>"
"               </li>"
"               <li class=\"%s\"><a href=\"/IO_Mapping.html\">"
"                   <svg width=\"18\" height=\"18\" viewBox=\"0 0 32 32\" xmlns=\"http://www.w3.org/2000/svg\" style=\"vertical-align:middle; margin-right:6px;\">"
"                       <path d=\"M28 1.75h-24c-1.794 0.002-3.248 1.456-3.25 3.25v16c0.002 1.794 1.456 3.248 3.25 3.25h8.011l-1.685 3.5h-4.326c-0.69 0-1.25 0.56-1.25 1.25s0.56 1.25 1.25 1.25v0h20c0.69 0 1.25-0.56 1.25-1.25s-0.56-1.25-1.25-1.25v0h-4.229l-1.75-3.5h7.979c1.794-0.001 3.249-1.456 3.25-3.25v-16c-0.002-1.794-1.456-3.248-3.25-3.25h-0zM4 4.25h24c0.414 0 0.75 0.336 0.75 0.75v10.75h-25.5v-10.75c0.001-0.414 0.336-0.749 0.75-0.75h0zM18.978 27.75h-5.878l1.685-3.5h2.442zM28 21.75h-24c-0.414-0-0.75-0.336-0.75-0.75v-2.75h25.5v2.75c0 0.414-0.336 0.75-0.75 0.75v0z\" fill=\"currentColor\"/>"
"                   </svg>"
"                   <span>IO Mapping</span></a>"
"               </li>"
"               <li class=\"%s\"><a href=\"/Network.html\">"
"                   <svg width=\"18\" height=\"18\" viewBox=\"0 0 16 16\" xmlns=\"http://www.w3.org/2000/svg\" style=\"vertical-align:middle; margin-right:6px;\">"
"                       <path fill=\"currentColor\" fill-rule=\"evenodd\" clip-rule=\"evenodd\" "
"                       d=\"M6.25 0C5.56 0 5 .56 5 1.25v3.5C5 5.44 5.56 6 6.25 6H7v1H1a.75.75 0 000 1.5h2.5V10H2.25C1.56 10 1 10.56 1 11.25v3.5c0 .69.56 1.25 1.25 1.25h3.5C6.44 16 7 15.44 7 14.75v-3.5C7 10.56 6.44 10 5.75 10H5V8.5h6V10h-.75C9.56 10 9 10.56 9 11.25v3.5c0 .69.56 1.25 1.25 1.25h3.5c.69 0 1.25-.56 1.25-1.25v-3.5c0-.69-.56-1.25-1.25-1.25H12.5V8.5H15A.75.75 0 0015 7H8.5V6h1.25C10.44 6 11 5.44 11 4.75v-3.5C11 .56 10.44 0 9.75 0h-3.5zm4.25 11.5v3h3v-3h-3zm-8 0v3h3v-3h-3zm7-7v-3h-3v3h3z\"/>"
"                   </svg>"
"                   <span>Network</span></a>"
"               </li>"
"           </ul>"
"       </nav>"
"       <div style=\"margin-top: auto; padding: 20px; font-size: 0.75rem; color: #999;\">"
"           © 2026 Gespant. All rights reserved."
"       </div>"
"   </div>"

"   <div id=\"content\">";

static const char html_bottom[] =
"   </div>"
"</body></html>";

static const char page_main[] =
"<div class=\"section-title\" style=\"display:flex; align-items:center; gap:10px; font-size:18px; font-weight:600; margin-bottom:15px;\">"
"   <svg width=\"20\" height=\"20\" viewBox=\"0 0 24 24\" xmlns=\"http://www.w3.org/2000/svg\" style=\"color: var(--primary-orange);\">"
"       <rect x=\"4\" y=\"4\" width=\"16\" height=\"16\" rx=\"3\" fill=\"currentColor\"/>"
"   </svg>"
"   System CPU Load"
"</div>"

"<div style=\"background:#fff; border-radius:10px; padding:15px; box-shadow:0 2px 6px rgba(0,0,0,0.08);\">"

"   <table id=\"cputable\" style=\"width:100%; border-collapse:collapse; font-size:13px;\">"

"       <thead>"
"           <tr style=\"background:#f5f5f5; text-align:left;\">"
"               <th style=\"padding:8px;\">Task Name</th>"
"               <th style=\"padding:8px; width:60%;\">CPU Load</th>"
"               <th style=\"padding:8px; width:60px;\">%</th>"
"           </tr>"
"       </thead>"

"       <tbody>"

#define CPU_ROW(i) \
"       <tr>" \
"           <td style=\"padding:6px;\" id=\"r" #i "c0\">-</td>" \
"           <td style=\"padding:6px;\">" \
"               <div style=\"background:#eee; border-radius:6px; height:10px; overflow:hidden;\">" \
"                   <div id=\"bar" #i "\" style=\"width:0%; height:100%; background:var(--primary-orange);\"></div>" \
"               </div>" \
"           </td>" \
"           <td style=\"padding:6px; text-align:right;\" id=\"r" #i "c1\">0%</td>" \
"       </tr>"

CPU_ROW(0)  CPU_ROW(1)  CPU_ROW(2)  CPU_ROW(3)  CPU_ROW(4)
CPU_ROW(5)  CPU_ROW(6)  CPU_ROW(7)  CPU_ROW(8)  CPU_ROW(9)
CPU_ROW(10) CPU_ROW(11) CPU_ROW(12) CPU_ROW(13) CPU_ROW(14)
CPU_ROW(15) CPU_ROW(16) CPU_ROW(17) CPU_ROW(18) CPU_ROW(19)

"       </tbody>"
"   </table>"
"</div>";

static const char page_iomap[] =
"<div class=\"section-title\" style=\"display:flex; align-items:center; gap:10px; font-size:18px; font-weight:600; margin-bottom:15px;\">"
"   <svg width=\"18\" height=\"18\" viewBox=\"0 0 24 24\" xmlns=\"http://www.w3.org/2000/svg\" " 
"       style=\"color: var(--primary-orange);\">" 
"       <path d=\"M19.9,12.66a1,1,0,0,1,0-1.32L21.18,9.9a1,1,0,0,0,.12-1.17l-2-3.46a1,1,0,0,0-1.07-.48l-1.88.38a1,1,0,0,1-1.15-.66l-.61-1.83A1,1,0,0,0,13.64,2h-4a1,1,0,0,0-1,.68L8.08,4.51a1,1,0,0,1-1.15.66L5,4.79A1,1,0,0,0,4,5.27L2,8.73A1,1,0,0,0,2.1,9.9l1.27,1.44a1,1,0,0,1,0,1.32L2.1,14.1A1,1,0,0,0,2,15.27l2,3.46a1,1,0,0,0,1.07.48l1.88-.38a1,1,0,0,1,1.15.66l.61,1.83a1,1,0,0,0,1,.68h4a1,1,0,0,0,.95-.68l.61-1.83a1,1,0,0,1,1.15-.66l1.88.38a1,1,0,0,0,1.07-.48l2-3.46a1,1,0,0,0-.12-1.17ZM18.41,14l.8.9-1.28,2.22-1.18-.24a3,3,0,0,0-3.45,2L12.92,20H10.36L10,18.86a3,3,0,0,0-3.45-2l-1.18.24L4.07,14.89l.8-.9a3,3,0,0,0,0-4l-.8-.9L5.35,6.89l1.18.24a3,3,0,0,0,3.45-2L10.36,4h2.56l.38,1.14a3,3,0,0,0,3.45,2l1.18-.24,1.28,2.22-.8.9A3,3,0,0,0,18.41,14ZM11.64,8a4,4,0,1,0,4,4A4,4,0,0,0,11.64,8Zm0,6a2,2,0,1,1,2-2A2,2,0,0,1,11.64,14Z\" " 
"       fill=\"currentColor\"/>" 
"   </svg>"
"   IO Mapping Configuration"
"</div>"

"<div style=\"margin-bottom:20px;font-size:13px;color:#666;\">"
"   Coupler Type: <b style=\"color:var(--primary-orange);\">%s</b> | "
"   FW Version: <b>%s</b>"
"</div>"

"<div style=\"display:grid; grid-template-columns: 1fr 1fr; gap:20px;\">"

"   <div style=\"background:#fff; border-radius:10px; padding:18px; box-shadow:0 2px 6px rgba(0,0,0,0.08);\">"
"       <div style=\"display:flex; align-items:center; gap:8px; font-weight:600; margin-bottom:12px;\">"
"           <svg width=\"18\" height=\"18\" viewBox=\"0 0 24 24\" style=\"color:var(--primary-orange);\">"
"               <circle cx=\"12\" cy=\"12\" r=\"2\" fill=\"currentColor\"/>"
"           </svg>"
"           Scan Devices"
"       </div>"

"       <div style=\"display:flex; align-items:center; gap:15px;\">"

"           <div>"
"               <div id=\"progressContainer\" style=\"display:none; width:150px; height:6px; background:#eee; border-radius:4px; overflow:hidden; margin-bottom:8px;\">"
"                   <div id=\"progressBar\" style=\"width:0%; height:100%; background:var(--primary-orange);\"></div>"
"               </div>"

"               <button id=\"scanButton\" style=\"width:150px; height:36px; border:none; border-radius:6px; "
"                   background:var(--primary-orange); color:white; cursor:pointer; display:flex; align-items:center; justify-content:center; gap:6px;\">"

"                   <svg width=\"18\" height=\"18\" viewBox=\"0 0 24 24\" xmlns=\"http://www.w3.org/2000/svg\" style=\"color: currentColor;\">" 
"                       <line x1=\"3\" y1=\"12\" x2=\"21\" y2=\"12\" stroke=\"currentColor\" stroke-linecap=\"round\" stroke-linejoin=\"round\" stroke-width=\"2\"/>" 
"                       <path d=\"M3,7V4A1,1,0,0,1,4,3H7\" stroke=\"currentColor\" stroke-linecap=\"round\" stroke-linejoin=\"round\" stroke-width=\"2\" fill=\"none\"/>" 
"                       <path d=\"M21,7V4a1,1,0,0,0-1-1H17\" stroke=\"currentColor\" stroke-linecap=\"round\" stroke-linejoin=\"round\" stroke-width=\"2\" fill=\"none\"/>" 
"                       <path d=\"M3,17v3a1,1,0,0,0,1,1H7\" stroke=\"currentColor\" stroke-linecap=\"round\" stroke-linejoin=\"round\" stroke-width=\"2\" fill=\"none\"/>" 
"                       <path d=\"M21,17v3a1,1,0,0,1-1,1H17\" stroke=\"currentColor\" stroke-linecap=\"round\" stroke-linejoin=\"round\" stroke-width=\"2\" fill=\"none\"/>" 
"                   </svg>"
"                   Scan"
"               </button>"
"           </div>"

"           <div style=\"flex:1;\">"
"               <table style=\"width:100%; border-collapse:collapse; font-size:12px;\">"
"                   <thead>"
"                       <tr style=\"background:#f5f5f5;\">"
"                           <th>DI</th><th>DO</th><th>AIC</th><th>AIV</th>"
"                           <th>AOC</th><th>AOV</th><th>RTDY</th><th>RTDB</th>"
"                       </tr>"
"                   </thead>"
"                   <tbody>"
"                       <tr style=\"text-align:center;\">"
"                           <td id=\"DICount\">-</td><td id=\"DOCount\">-</td>"
"                           <td id=\"AICCount\">-</td><td id=\"AIVCount\">-</td>"
"                           <td id=\"AOCCount\">-</td><td id=\"AOVCount\">-</td>"
"                           <td id=\"RTDYCount\">-</td><td id=\"RTDBCount\">-</td>"
"                       </tr>"
"                   </tbody>"
"               </table>"
"           </div>"

"       </div>"
"   </div>"

"   <div style=\"background:#fff; border-radius:10px; padding:18px; box-shadow:0 2px 6px rgba(0,0,0,0.08);\">"
"       <div style=\"font-weight:600; margin-bottom:12px;\">Device Configuration</div>"

"       <form id=\"modbusConfigForm\" style=\"display:flex; gap:10px; align-items:flex-end;\">"

"           <div>"
"               <label style=\"font-size:12px; color:#666;\">Coupler Name</label><br>"
"               <input type=\"text\" id=\"ioCouplerName\" style=\"padding:6px; border:1px solid #ccc; border-radius:6px; width:130px;\">"
"           </div>"

"           <button type=\"submit\" style=\"height:34px; padding:0 14px; border:none; border-radius:6px; "
"               background:var(--primary-orange); color:white; cursor:pointer;\">Apply</button>"

"       </form>"

"       <div id=\"configStatus\" style=\"margin-top:10px; font-size:12px; color:#777;\"></div>"
"   </div>"

"</div>"

"<div style=\"margin-top:20px; background:#fff; border-radius:10px; padding:15px; box-shadow:0 2px 6px rgba(0,0,0,0.08);\">"
"   <div style=\"font-weight:600; margin-bottom:10px;\">IO Data</div>"

"   <div id=\"iotable_container\">" 
"       <table id=\"iotable\" width=\"50%\">" 
"           <tbody>" 
"               <tr>" 
"                   <th>ID</th>" 
"                   <th>IO Type</th>" 
"                   <th>Data Value</th>" 
"                   <th>State</th>" 
"                   <th>Last Error Type</th>" 
"                   <th>Last Error Code</th>" 
"               </tr>" 
"               <tr><td colspan=\"6\">Loading...</td></tr>" 
"           </tbody>" 
"       </table>"
"   </div>";

static const char page_network[] =
"<div class=\"section-title\" style=\"display:flex; align-items:center; gap:10px; font-size:18px; font-weight:600; margin-bottom:15px;\">"
"   <svg width=\"20\" height=\"20\" viewBox=\"0 0 16 16\" xmlns=\"http://www.w3.org/2000/svg\" style=\"color: var(--primary-orange);\">"
"       <path d=\"M6.25 0C5.56 0 5 .56 5 1.25v3.5C5 5.44 5.56 6 6.25 6H7v1H1a.75.75 0 000 1.5h2.5V10H2.25C1.56 10 1 10.56 1 11.25v3.5c0 .69.56 1.25 1.25 1.25h3.5C6.44 16 7 15.44 7 14.75v-3.5C7 10.56 6.44 10 5.75 10H5V8.5h6V10h-.75C9.56 10 9 10.56 9 11.25v3.5c0 .69.56 1.25 1.25 1.25h3.5c.69 0 1.25-.56 1.25-1.25v-3.5c0-.69-.56-1.25-1.25-1.25H12.5V8.5H15A.75.75 0 0015 7H8.5V6h1.25C10.44 6 11 5.44 11 4.75v-3.5C11 .56 10.44 0 9.75 0h-3.5z\" fill=\"currentColor\"/>"
"   </svg>"
"   Network Configuration"
"</div>"

"<div style=\"margin-bottom:20px;font-size:13px;color:#666;\">"
"   Configure Ethernet interface settings"
"</div>"

"<div style=\"display:grid; grid-template-columns: 1fr; gap:20px;\">"

"   <div style=\"background:#fff; border-radius:10px; padding:18px; box-shadow:0 2px 6px rgba(0,0,0,0.08);\" id=\"eth1-config\">"

"       <div style=\"display:flex; align-items:center; gap:8px; font-weight:600; margin-bottom:12px;\">"
"           <svg width=\"18\" height=\"18\" viewBox=\"0 0 32 32\" xmlns=\"http://www.w3.org/2000/svg\" style=\"color: var(--primary-orange);\">"
"               <path d=\"M28 1.75h-24c-1.794 0.002-3.248 1.456-3.25 3.25v16c0.002 1.794 1.456 3.248 3.25 3.25h8.011l-1.685 3.5h-4.326c-0.69 0-1.25 0.56-1.25 1.25s0.56 1.25 1.25 1.25h20c0.69 0 1.25-0.56 1.25-1.25s-0.56-1.25-1.25-1.25h-4.229l-1.75-3.5h7.979c1.794-0.001 3.249-1.456 3.25-3.25v-16c-0.002-1.794-1.456-3.248-3.25-3.25z\" fill=\"currentColor\"/>"
"           </svg>"
"           Ethernet Interface"
"       </div>"

"       <div style=\"display:flex; gap:20px; flex-wrap:wrap;\">"

"           <!-- STATUS CARD -->"
"           <div style=\"flex:1; min-width:240px; background:#f7f7f7; padding:14px; border-radius:8px;\">"
"               <div style=\"font-weight:600; margin-bottom:10px;\">Current Status</div>"

"               <div style=\"display:flex; justify-content:space-between; margin-bottom:6px;\">"
"                   <span>IP Address</span><b id=\"eth1_ipv4\" style=\"color:var(--primary-orange);\">-</b>"
"               </div>"
"               <div style=\"display:flex; justify-content:space-between; margin-bottom:6px;\">"
"                   <span>Subnet Mask</span><b id=\"eth1_subnet\">-</b>"
"               </div>"
"               <div style=\"display:flex; justify-content:space-between; margin-bottom:6px;\">"
"                   <span>Gateway</span><b id=\"eth1_gateway\">-</b>"
"               </div>"
"               <div style=\"display:flex; justify-content:space-between;\">"
"                   <span>MAC</span><b id=\"eth1_mac\">-</b>"
"               </div>"
"           </div>"

"           <!-- CONFIG CARD -->"
"           <div style=\"flex:1; min-width:240px;\">"
"               <div style=\"font-weight:600; margin-bottom:10px;\">Configure IP</div>"

"               <div style=\"margin-bottom:8px;\">"
"                   <label style=\"font-size:12px; color:#666;\">New IP Address</label><br>"
"                   <input type=\"text\" id=\"new_eth1_ip\" style=\"width:100%; padding:6px; border:1px solid #ccc; border-radius:6px;\" placeholder=\"192.168.1.100\">"
"               </div>"

"               <div style=\"margin-bottom:8px;\">"
"                   <label style=\"font-size:12px; color:#666;\">New Gateway</label><br>"
"                   <input type=\"text\" id=\"new_eth1_gateway\" style=\"width:100%; padding:6px; border:1px solid #ccc; border-radius:6px;\" placeholder=\"192.168.1.1\">"
"               </div>"

"               <div style=\"margin-bottom:10px;\">"
"                   <label style=\"font-size:12px; color:#666;\">New Subnet Mask</label><br>"
"                   <input type=\"text\" id=\"new_eth1_subnet\" style=\"width:100%; padding:6px; border:1px solid #ccc; border-radius:6px;\" placeholder=\"255.255.255.0\">"
"               </div>"

"               <button id=\"set_eth1_ip\" "
"                   style=\"width:160px; height:36px; border:none; border-radius:6px; "
"                   background:var(--primary-orange); color:white; cursor:pointer; "
"                   display:flex; align-items:center; justify-content:center; gap:6px;\">"

"                   <svg width=\"16\" height=\"16\" viewBox=\"0 0 24 24\" style=\"color:white;\">"
"                       <path d=\"M5 12h14M13 6l6 6-6 6\" stroke=\"currentColor\" stroke-width=\"2\" fill=\"none\" stroke-linecap=\"round\"/>"
"                   </svg>"
"                   Apply"
"               </button>"

"               <div id=\"netStatus\" style=\"font-size:12px; margin-top:8px; color:#777;\"></div>"
"           </div>"

"       </div>"
"   </div>"

"</div>";

#ifdef  __cplusplus
}
#endif

#endif // GSP_WS_HTML_H