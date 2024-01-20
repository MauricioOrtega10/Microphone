#include <Microphone.h>
#include "Arduino.h"

Microphone::Microphone(unsigned int pin)
{
    _pin = pin;
    pinMode(_pin, INPUT);
}

Microphone::~Microphone()
{

}

int Microphone::read()
{
    return analogRead(_pin);
}

Microphone microphone(MICROPHONE_PIN);