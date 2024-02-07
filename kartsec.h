#ifndef KARTSEC_H
#define KARTSEC_H

#include <Arduino.h>

#if defined(ESP32)
#include <HardwareSerial.h>
#elif defined(ESP32S3)
#include <HardwareSerial.h>
#elif defined(ARDUINO_AVR_NANO)
#include <SoftwareSerial.h>
#endif

class LoRaCommunication {
public:
    LoRaCommunication();
    void begin();
    
private:
    void autoDetectBoardAndModule();
    void setupE32();
    void setupE22();
    void configureModule();

    int _M0, _M1, _RX, _TX;
    bool _isE32;
    HardwareSerial* _hardSerial;
    SoftwareSerial* _softSerial;
};

#endif