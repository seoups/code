/** Handle root or redirect to captive portal */

void handleRoot() {
  //Serial.println("Server Html");
  //Serial.println ( WiFi.localIP() );
  String s=""; 
  String s1= String(ssid);
  s="<meta name='viewport' content='width=device-width, initial-scale=1.0'/>";
  if(autoRead==1)
    s=s+"<meta http-equiv='refresh' content='5'/>";
  s=s+"<meta http-equiv='Content-Type' content='text/html;charset=utf-8' />";
  s=s+"<meta http-equiv='Content-Type' content='text/html;charset=utf-8' />";
  s=s+"<h2>Seoups PLC Control</h2>";
  s=s+"<br>chip ID : "+sChipID+"<br>";
  s=s+"<H3 style=Color:DodgerBlue>OUT<H3>";
  s=s+"<style>body {background-image: url('http://files.itworld.co.kr/archive/image/2016/10/wireless_network_internet_of_things_iot_thinkstock_853701554-100739367-large.jpg');background-repeat: no-repeat;background-attachment: fixed; background-size: 100% 100%;</style>";
  if(P4[0]==1)
    s=s+"<a href=\"onoffP40\"><button style='background-color:white;font-weight:bold;background-Color:#ffe6f2; color:red;border: 1px dashed #ff0080;border-radius:10px;width:70;height:30;'>40 ON</button></a>";
  else 
    s=s+"<a href=\"onoffP40\"><button style='font-weight:bold;background-Color:#b4b4b4; color:black; border: 1px solid #3c3c3c;border-radius:10px;width:70;height:30;'>40 OFF</button></a>";
  s=s+"&emsp;";

  if(P4[1]==1)
    s=s+"<a href=\"onoffP41\"><button style='background-color:white;font-weight:bold;background-Color:#ffe6f2; color:red;border: 1px dashed #ff0080;border-radius:10px;width:70;height:30;'>41 ON</button></a>";
  else 
    s=s+"<a href=\"onoffP41\"><button style='font-weight:bold;background-Color:#b4b4b4; color:black; border: 1px solid #3c3c3c;border-radius:10px;width:70;height:30;'>41 OFF</button></a>";
  s=s+"&emsp;";

  if(P4[2]==1)
    s=s+"<a href=\"onoffP42\"><button style='background-color:white;font-weight:bold;background-Color:#ffe6f2; color:red;border: 1px dashed #ff0080;border-radius:10px;width:70;height:30;'>42 ON</button></a>";
  else 
    s=s+"<a href=\"onoffP42\"><button style='font-weight:bold;background-Color:#b4b4b4; color:black; border: 1px solid #3c3c3c;border-radius:10px;width:70;height:30;'>42 OFF</button></a>";
  s=s+"&emsp;";

  if(P4[3]==1)
    s=s+"<a href=\"onoffP43\"><button style='background-color:white;font-weight:bold;background-Color:#ffe6f2; color:red;border: 1px dashed #ff0080;border-radius:10px;width:70;height:30;'>43 ON</button></a>";
  else 
    s=s+"<a href=\"onoffP43\"><button style='font-weight:bold;background-Color:#b4b4b4; color:black; border: 1px solid #3c3c3c;border-radius:10px;width:70;height:30;'>43 OFF</button></a>";
    s=s+"<p style=Color:black>통신</p>";
  s=s+"<H3><H3>";

   if(autoRead==1)
    s=s+"<a href=\"read\"><button style='background-color:DodgerBlue; color:white;border-radius:10px;border: 1px dashed #0000ff;width:150;height:30;font-size:10pt;'>IN port Read On</button></a>";
  else 
     s=s+"<a href=\"read\"><button style='background-color:rgb(138, 149, 202); color:white;border-radius:10px;border: 1px dashed rgb(95, 88, 81);width:150;height:30;font-size:10pt;'>IN port Read Off</button></a>";
  s=s+"<br><br>";



  s=s+"<H3 style=Color:red>IN<H3>";
  if(P0[0]==1)
      s=s+"<button style='background-color:#ffe6f2;color:rgb(255, 62, 129); border-radius:10px;font-size:12pt;width:50;height:25;>00</button>";
  else
    s=s+"<button style='background-color:LightGray; color:rgb(60, 60, 60);border-radius:10px;width:50;height:25;font-size:12pt'>00</button>";
  s=s+"&nbsp;";
   if(P0[1]==1)
    s=s+"<button style='background-color:#ffe6f2; color:rgb(255, 62, 129);border-radius:10px;width:50;height:25;font-size:12pt'>01</button>";
  else 
    s=s+"<button style='background-color:LightGray; color:rgb(60, 60, 60);border-radius:10px;width:50;height:25;font-size:12pt'>01</button>";
  s=s+"&nbsp;";
  if(P0[2]==1)
    s=s+"<button style='background-color:#ffe6f2; color:rgb(255, 62, 129);border-radius:10px;width:50;height:25;font-size:12pt'>02</button>";
  else 
    s=s+"<button style='background-color:LightGray; color:rgb(60, 60, 60);border-radius:10px;width:50;height:25;font-size:12pt'>02</button>";
  s=s+"&nbsp;";
  if(P0[3]==1)
    s=s+"<button style='background-color:#ffe6f2; color:rgb(255, 62, 129);border-radius:10px;width:50;height:25;font-size:12pt'>03</button>";
  else 
    s=s+"<button style='background-color:LightGray; color:rgb(60, 60, 60);border-radius:10px;width:50;height:25;font-size:12pt'>03</button>";
  s=s+"&nbsp;";
  if(P0[4]==1)
    s=s+"<button style='background-color:#ffe6f2; color:rgb(255, 62, 129);border-radius:10px;width:50;height:25;font-size:12pt'>04</button>";
  else 
    s=s+"<button style='background-color:LightGray; color:rgb(60, 60, 60);border-radius:10px;width:50;height:25;font-size:12pt'>04</button>";
  s=s+"&nbsp;";
  if(P0[5]==1)
    s=s+"<button style='background-color:#ffe6f2; color:rgb(255, 62, 129);border-radius:10px;width:50;height:25;font-size:12pt'>05</button>";
  else 
    s=s+"<button style='background-color:LightGray; color:rgb(60, 60, 60);border-radius:10px;width:50;height:25;font-size:12pt'>05</button>";
  s=s+"<br><br>";


  s=s+"현재 연결된 AP 이름과 IP : "+"  "+String(ssid)+"  "+"<p><a href='http://"+WiFi.localIP().toString()+"'/>"+WiFi.localIP().toString()+"</a></p>";
  s=s+"<p><a href='/wifi'>공유기를 바꾸려면 누르세요.</a></p>";

  server.send(200, "text/html", s);
}

void GoHome() {
  IPAddress ip = WiFi.localIP();
  String ipS;
  String s="";
  ipS=String(ip[0])+"."+String(ip[1])+"."+String(ip[2])+"."+String(ip[3]);
  IPAddress ipClient = server.client().remoteIP();
  if(ipClient[2]==4) 
    s="<meta http-equiv='refresh' content=\"0;url='http://192.168.4.1/'\">";
  else
    s="<meta http-equiv='refresh' content=\"0;url='http://"+ipS+"/'\">";
  server.send(200, "text/html", s);
}

void handleRead() {
  if(autoRead==1) 
    autoRead=0;
  else 
    autoRead=1;
  GoHome();
}
void handleOnOffP40() {
  if(P4[0]==1) 
    P4[0]=0;
  else 
    P4[0]=1;
  plcOut();
  GoHome();
  delay(100);
}

void handleOnOffP41() {
  if(P4[1]==1) 
    P4[1]=0;
  else 
    P4[1]=1;
  plcOut();
  GoHome();
  delay(100);
}

void handleOnOffP42() {
  if(P4[2]==1) 
    P4[2]=0;
  else 
    P4[2]=1;
  plcOut();
  GoHome();
  delay(100);
}

void handleOnOffP43() {
  if(P4[3]==1) 
    P4[3]=0;
  else 
    P4[3]=1;
  plcOut();
  GoHome();
  delay(100);
}

void handleNotFound() {
  String message = "File Not Found\n\n";
  message += "URI: ";
  message += server.uri();
  message += "\nMethod: ";
  message += (server.method() == HTTP_GET) ? "GET" : "POST";
  message += "\nArguments: ";
  message += server.args();
  message += "\n";
  for (uint8_t i = 0; i < server.args(); i++) {
    message += " " + server.argName(i) + ": " + server.arg(i) + "\n";
  }
  server.send(404, "text/plain", message);
}

void handleWifi() {
  String s; 
  String s1= String(ssid);
  //s="<meta name=\"viewport\" content=\"width=device-width, user-scalable=no\", meta http-equiv=\"Content-Type\" content=\"text/html;charset=utf-8\", meta http-equiv='refresh' content='5'/>";
  s="<meta name=\"viewport\" content=\"width=device-width, user-scalable=no\", meta http-equiv=\"Content-Type\" content=\"text/html;charset=utf-8\" />";
  //s=s+"<meta http-equiv='refresh' content='5'/>";
  s=s+"<style>body {background-image: url('https://o.aolcdn.com/images/dims?quality=85&image_uri=https%3A%2F%2Fo.aolcdn.com%2Fimages%2Fdims%3Fcrop%3D1280%252C729%252C0%252C283%26quality%3D85%26format%3Djpg%26resize%3D1600%252C911%26image_uri%3Dhttp%253A%252F%252Fo.aolcdn.com%252Fhss%252Fstorage%252Fmidas%252Fac987fc20fedeaa34f5cc67cca1eaf99%252F206709669%252Ficon-1480926_1280.png%26client%3Da1acac3e1b3290917d92%26signature%3Dbf2cdaf8a2999f5eeac922a7d7ff19dab393ceae&client=amp-blogside-v2&signature=dd9bfbb58a40691a7cd45da0b86b223de69bb96c');background-repeat: no-repeat;background-attachment: fixed; background-size: 100% 100%;</style>";
  s=s+"<h1>Wifi 사양</h1>";
  if (server.client().localIP() == apIP) {
    Serial.println(String(softAP_ssid));
    //s=s+String("<p>연결된 AP: ") + sAP_ssid + "</p>";
    s=s+String("<p>연결된 AP: 192.168.4.1") + "</p>";
  } else {
    s=s+"<p>연결된 와이파이 " + String(ssid) + "</p>";
  }
  s=s+"<table><tr><th align='left'>SoftAP 사양</th></tr>";
  s=s+"<tr><td>SSID " + String(softAP_ssid) + "</td></tr>";
  s=s+"<tr><td>IP   " + toStringIp(WiFi.softAPIP()) + "</td></tr>"+"</table>";
  s=s+"<br /><table><tr><th align='left'>WLAN 사양</th></tr>";
  s=s+"<tr><td>SSID " + String(ssid) + "</td></tr>";
  s=s+"<tr><td>IP   " + toStringIp(WiFi.localIP()) + "</td></tr>"+"</table>";
  
  s=s+"<br /><table><tr><th align='left'>검색된 와이파이 </th></tr>";
  Serial.println("scan start");
  int n = WiFi.scanNetworks();
  Serial.println("scan done");
  if (n > 0) {
    for (int i = 0; i < n; i++) {
      s=s+"\r\n<tr><td>SSID " + WiFi.SSID(i) + String((WiFi.encryptionType(i) == ENC_TYPE_NONE)?" ":" *") + " (" + WiFi.RSSI(i) + ")</td></tr>";
    }
  } else {
    s=s+"<tr><td>No WLAN found</td></tr>";
  }
  s=s+"</table>";
  s=s+"<p><a href='/wifi'>와이파이가 없으면 다시 검색하세요.</a></p>";
  
  s=s+"<form method='POST' action='wifisave'><h4>연결하려는 와이파이 입력</h4>"
    +"와이파이 이름 <input type='text' value='"+ssid+"' name='n'/>"
    +"<br />비밀번호     <input type='password' value='"+password+"' name='p'/>"
    +"<br /><input type='submit' value='      저    장      '/></form>"
    +"<p><a href='/'>메인 홈페이지로 가기</a>.</p>";
  server.send(200, "text/html", s);
}

/** Handle the WLAN save form and redirect to WLAN config page again */
void handleWifiSave() {
  Serial.println("wifi save");
  server.arg("n").toCharArray(ssid, sizeof(ssid) - 1);
  server.arg("p").toCharArray(password, sizeof(password) - 1);
  server.sendHeader("Location", "wifi", true);
  server.sendHeader("Cache-Control", "no-cache, no-store, must-revalidate");
  server.sendHeader("Pragma", "no-cache");
  server.sendHeader("Expires", "-1");
  server.send ( 302, "text/plain", "");  // Empty content inhibits Content-length header so we have to close the socket ourselves.
  server.client().stop(); // Stop is needed because we sent no content length
  saveCredentials();
  connect = strlen(ssid) > 0; // Request WLAN connect with new credentials if there is a SSID
  connectWifi();
}
