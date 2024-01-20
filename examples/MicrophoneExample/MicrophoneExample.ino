#include <Arduino.h>
#include <Microphone.h>

void setup() 
{
    Serial.begin(9600);
}

void loop() 
{
    Serial.println(microphone.read());
}