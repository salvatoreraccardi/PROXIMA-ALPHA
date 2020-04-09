void conn(){
  // Get SSID AND PASS
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("connecting");
  // Request connection
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    // Display animation
    Wifi_connection_animation();
    delay(100);
  }
  Serial.println();
  Serial.print("connected: ");
  Serial.println(WiFi.localIP());
  // Proxima is connected
  wifiStatus = true;
}
