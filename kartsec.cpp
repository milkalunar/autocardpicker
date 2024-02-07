

#include "kartsec.h"

LoRaCommunication::LoRaCommunication() {
    autoDetectBoardAndModule();
}

void LoRaCommunication::begin() {
    if (_isE32) {
        setupE32();
    } else {
        setupE22();
    }
    configureModule();
}

void LoRaCommunication::sendSignal(const char* message) {
    // handled on the lib alrd
}

void LoRaCommunication::autoDetectBoardAndModule() {
    #ifdef ESP32
	#define M0 4                    //  3in1 PCB mizde pin 7
	#define M1 6                    //  3in1 PCB mizde pin 6
	#define RX 18                   //  esp32 s3 de Lora RX e bağlı
	#define TX 17                   //  esp32 s3 de Lora TX e bağlı
    #elif defined(ESP32S3)
	#define M0 4                    //  3in1 PCB mizde pin 7
	#define M1 6                    //  3in1 PCB mizde pin 6
	#define RX 18                   //  esp32 s3 de Lora RX e bağlı
	#define TX 17                   //  esp32 s3 de Lora TX e bağlı
    #elif defined(ARDUINO_AVR_NANO)
	#include <SoftwareSerial.h>
	#define M0 7
	#define M1 6
	#define RX 3
	#define TX 4
	SoftwareSerial fixSerial(RX, TX);  //PCB versiyon 4.3 den sonra bu şekilde olmalı
	kutuphane FixajSerial(&fixSerial);

    #endif
    // Modül tipini otomatik algılama
}

void LoRaCommunication::setupE32() {
    // ...
}

void LoRaCommunication::setupE22() {
    // ...
}

void LoRaCommunication::configureModule() {
    // ...
}
