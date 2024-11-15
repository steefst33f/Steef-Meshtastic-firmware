#ifndef _VARIANT_STEEF_DIY_
#define _VARIANT_STEEF_DIY_

#define HAS_TOUCHSCREEN 1

#define SLEEP_TIME 120

// Analog pins
// #define BATTERY_PIN -1 // A battery voltage measurement pin, voltage divider connected here to measure battery voltage
// // ratio of voltage divider = 2.0
// #define ADC_MULTIPLIER 2.11 // 2.0 + 10% for correction of display undervoltage.
// #define ADC_CHANNEL ADC1_GPIO4_CHANNEL

// LED PWM
// #define RGB_LED_R 4
// #define	RGB_LED_G 16
// #define RGB_LED_B 17

// Button
// #define BUTTON_PIN 0

// Keyboard
#define I2C_SDA 8
#define I2C_SCL 9
#define CANNED_MESSAGE_MODULE_ENABLE 1

// GPS
#define GPS_RX_PIN 1
#define GPS_TX_PIN 2

// #define HAS_SDCARD 1
// #define SPI_MOSI 13
// #define SPI_SCK 12
// #define SPI_MISO 11
// #define SPI_CS 10
// #define SDCARD_CS 6

// LORA SPI
// #define USE_RF95 //Wrapper for SX1278 Lora module

#undef LORA_SCK
#undef LORA_MISO
#undef LORA_MOSI
#undef LORA_CS


#define LORA_SCK 12
#define LORA_MISO 13
#define LORA_MOSI 11

// #define LORA_SCK 35 //12
// #define LORA_MISO 37 //13
// #define LORA_MOSI 36 //11
#define LORA_CS 16

#define LORA_RESET 15
#define LORA_DIO0 RADIOLIB_NC // IRQ
#define LORA_DIO1 41 //RADIOLIB_NC?

// common pinouts for SX126X modules
#define SX126X_CS LORA_CS
#define SX126X_DIO1 LORA_DIO1
#define SX126X_BUSY 18
#define SX126X_RESET LORA_RESET
// #define SX126X_RXEN LORA_RXEN
// #define SX126X_TXEN LORA_TXEN

#define SX126X_DIO2_AS_RF_SWITCH // All switching is performed with DIO2, it is automatically inverted using circuitry.
// CDEBYTE EoRa-S3 uses an XTAL, thus we do not need DIO3 as TCXO voltage reference. Don't define SX126X_DIO3_TCXO_VOLTAGE for
// simplicity rather than defining it as 0.
#define SX126X_MAX_POWER 22
// E22-900MM22S and E22-400MM22S have a raw SX1262 or SX1268 respsectively, they are rated to output up and including 22
// dBm out of their SX126x IC.

// // supported modules list
// #define USE_RF95 // RFM95/SX127x
#define USE_SX1262
// #define USE_SX1268
// #define USE_LLCC68
#endif
