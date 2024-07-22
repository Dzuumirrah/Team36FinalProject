#ifndef CONFIG_H
#define CONFIG_H

#include <WiFi.h>
#include <HTTPClient.h>
#include <driver/dac.h>
#include "BluetoothSerial.h"
#include <stdint.h>
#include "HardwareSerial.h"

// WiFi credential
#define wifi_ssid "Hey hey"                         // Change to current actived WiFi
#define wifi_pass "aingmaung"

// Bluetooth
#define bt_master_name "ESP32-Master-BT";      // ESP32 Bluetooth name
#define bt_slave_name "soundcore R50i";        // Change this name to your Bluetooth device name

// HTTP global variable
extern HTTPClient http;
extern BluetoothSerial SerialBT;
#define http_post_server "http://192.168.161.107:5000/esp32/post_images"
#define http_get_tts "http://192.168.161.107:5000/esp32/post_and_get_tts_voice"

// Ultrasonic app
#define trigPin                       12
#define echoPin                       14
#define soundSpeed                    0.034            // Sound speed in cm/μs
#define range_minimum_camera_active   80               // Minimum distance in cm for camera being ON 

// Camera Pins for ==[ ESP32 Wrover kit ]==
#define PWDN_GPIO_NUM  -1
#define RESET_GPIO_NUM -1
#define XCLK_GPIO_NUM  21
#define SIOD_GPIO_NUM  26
#define SIOC_GPIO_NUM  27

#define Y9_GPIO_NUM    35
#define Y8_GPIO_NUM    34
#define Y7_GPIO_NUM    39
#define Y6_GPIO_NUM    36
#define Y5_GPIO_NUM    19
#define Y4_GPIO_NUM    18
#define Y3_GPIO_NUM    5
#define Y2_GPIO_NUM    4
#define VSYNC_GPIO_NUM 25
#define HREF_GPIO_NUM  23
#define PCLK_GPIO_NUM  22

// voice output app...
#define delay_sample 60         // Set to 60 if sampling rate is 16kbps
#define header_format_value 44  // Set to 44 if audio type is .mp3

#endif
