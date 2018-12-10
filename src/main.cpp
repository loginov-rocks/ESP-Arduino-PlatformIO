#include <Arduino.h>

#include <ESP8266WiFi.h>

#include <DNSServer.h>
#include <ESP8266WebServer.h>
#include <WiFiManager.h>

void setup()
{
  Serial.begin(9600);
  WiFiManager wifiManager;
  wifiManager.autoConnect("NodeMCU-Arduino-PlatformIO");
  Serial.println("Connected!");
}

void loop()
{
  Serial.println("Idle...");
  delay(1000);
}
