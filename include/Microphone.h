#pragma once

#ifndef _Microphone_h
#define _Microphone_h

#include <MicrophoneConfig.h>


class Microphone 
{
public:
    Microphone(unsigned int pin);
    ~Microphone();
    int read();

private:
    unsigned int _pin;
};

extern Microphone microphone;

#endif