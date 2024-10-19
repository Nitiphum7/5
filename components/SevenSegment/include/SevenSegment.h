#ifndef SEVENSEGMENT_H
#define SEVENSEGMENT_H

#include "LED.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
 
class SevenSegment
{
    int common_pin;
    LED seg_a = LED(16);
    LED seg_b = LED(17);
    LED seg_c = LED(5);
    LED seg_d = LED(18);
    LED seg_e = LED(19);
    LED seg_f = LED(21);
    LED seg_g = LED(22);
    LED common;
 
public:
    SevenSegment(int pin) : common_pin(pin), common(LED(pin)) {}
 
    void HardwareTest();
    void DisplayBlank();
    void DisplayNumber(int number); // Updated to take an int parameter
    void DisplayNum0();
    void DisplayNum1();
    void DisplayNum2();
    void DisplayNum3();
    void DisplayNum4();
    void DisplayNum5();
    void DisplayNum6();
    void DisplayNum7();
    void DisplayNum8();
    void DisplayNum9();
};
#endif
