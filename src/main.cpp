#include <Arduino.h>

// Uncomment the following line and comment the line after it to use the
// simpleConnect() function instead of the managerConnect().
// #include <ESP8266WiFi.h>
#include <WiFiManager.h>

// Uncomment lines referencing LED instead of lines referencing LED_BUILTIN if
// your development board does not have a built-in LED.
// #define LED D0

// Set SSID and password to use the simpleConnect() function.
const char ssid[] = "ssid";
const char password[] = "password";

void simpleConnect()
{
  Serial.print("Using SSID \"");
  Serial.print(ssid);
  Serial.print("\" and password \"");
  Serial.print(password);
  Serial.print("\".");

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print('.');
  }

  Serial.println();
}

void managerConnect()
{
  // Comment the following lines to use the simpleConnect() function.
  WiFiManager wifiManager;
  wifiManager.autoConnect("ESP8266-Arduino-PlatformIO");
}

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  // pinMode(LED, OUTPUT);

  Serial.begin(115200);

  Serial.println("Connecting to Wi-Fi...");

  // Uncomment the following line and comment the line after it to use the
  // simpleConnect() function instead of the managerConnect().
  // simpleConnect();
  managerConnect();

  Serial.print("Successfully connected to Wi-Fi with the local IP address: ");
  Serial.println(WiFi.localIP());
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
