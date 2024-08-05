#include <Arduino.h>

#include <WiFiManager.h>

// Uncomment lines referencing LED instead of lines referencing LED_BUILTIN in case you don't have built-in LED.
// #define LED D0

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  // pinMode(LED, OUTPUT);

  Serial.begin(115200);
  WiFiManager wifiManager;
  wifiManager.autoConnect("ESP8266-Arduino-PlatformIO");
  Serial.println("Connected!");
}

void loop()
{
  // Note: NodeMCU built-in LED turns on when the pin is set to LOW.
  digitalWrite(LED_BUILTIN, LOW);
  // digitalWrite(LED, HIGH);
  Serial.print("Blinking...");
  delay(1000);

  Serial.println(" done!");
  digitalWrite(LED_BUILTIN, HIGH);
  // digitalWrite(LED, LOW);
  delay(1000);
}
