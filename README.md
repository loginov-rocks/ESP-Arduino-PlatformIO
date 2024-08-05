# ESP8266 Arduino PlatformIO

Quick Start with ESP8266 (NodeMCU) in the Arduino Ecosystem using PlatformIO IDE:
[Medium](https://loginov-rocks.medium.com/b8415bf9a038)

This repository represents a minimalistic template [PlatformIO](https://platformio.org) project to quickly start with
[ESP8266](https://en.wikipedia.org/wiki/ESP8266)-based development boards such as
[NodeMCU](https://en.wikipedia.org/wiki/NodeMCU) in the [Arduino](https://www.arduino.cc) ecosystem using PlatformIO
IDE. It provides two options to connect the development board to a Wi-Fi network and starts blinking LED after a
successful connection.

The first option configured by default is to use the `managerConnect()` function that utilizes the
[WiFiManager](https://registry.platformio.org/libraries/tzapu/WiFiManager) library by **tzapu** which allows you to
configure Wi-Fi access by establishing an access point, that you can connect to and enter Wi-Fi credentials, in a
simple and user-friendly way.

The second option is to use the `simpleConnect()` function that will connect to the Wi-Fi using the SSID and password
defined in the code, without relying on any libraries. Pick what you like and follow the comments in the
[platformio.ini](https://github.com/loginov-rocks/ESP8266-Arduino-PlatformIO/blob/main/platformio.ini) and
[main.cpp](https://github.com/loginov-rocks/ESP8266-Arduino-PlatformIO/blob/main/src/main.cpp) files to configure the
preferred option.

PlatformIO will use the `nodemcuv2` environment to build the project by default, however, you can switch between
preconfigured environments or set a new one matching your
[development board](https://docs.platformio.org/en/latest/platforms/espressif8266.html#boards).

## Tested Boards

| Development Board     | Environment    | ESP Module           | Price | Link (no referrals)                                                             |
| --------------------- | -------------- | -------------------- | ----- | ------------------------------------------------------------------------------- |
| NodeMCU (V3 CH340G)   | `nodemcuv2`    | ESP-12E (assumption) | $1.82 | [Unknown from Aliexpress](https://www.aliexpress.us/item/2255799973818463.html) |
| ESP8266-DevKitC-02D-F | `esp_wroom_02` | ESP-WROOM-02D        | $8.00 | [Official from Amazon](https://a.co/d/dhkB3tJ)                                  |

Note: **ESP8266-DevKitC-02D-F** does not have a built-in LED (referenced in the code as `LED_BUILTIN`).

## Reference

* PlatformIO Documentation:
  * [Espressif 8266 Platform](https://docs.platformio.org/en/latest/platforms/espressif8266.html)
    * [NodeMCU 1.0 (ESP-12E Module)](https://docs.platformio.org/en/latest/boards/espressif8266/nodemcuv2.html)
    * [Espressif ESP-WROOM-02 Board](https://docs.platformio.org/en/latest/boards/espressif8266/esp_wroom_02.html)
* [Official Product Page on Espressif](https://www.espressif.com/en/products/socs/esp8266)
* [ESP8266 on Wikipedia](https://en.wikipedia.org/wiki/ESP8266)
* [NodeMCU on Wikipedia](https://en.wikipedia.org/wiki/NodeMCU)
* [NodeMCU Official Website](https://www.nodemcu.com)
