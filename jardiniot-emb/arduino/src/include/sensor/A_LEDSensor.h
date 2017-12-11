#ifndef A_LEDSensor_H
#define A_LEDSensor_H

#include "SensorStrategy.h"
#include <Arduino.h>
#include <string.h>

class A_LEDSensor: public SensorStrategy {
private:
    byte whiteLEDPin;
    byte blueLEDPin;
    byte redLEDPin;

    byte whiteValue = 255;
    byte blueValue = 255;
    byte redValue = 255;
public:
    A_LEDSensor(byte idController, std::vector<short> inputPins, std::vector<short> outputPins, short delay);
    ~A_LEDSensor();

    int read();
    int write();
    void setInput(std::vector<short> input);

    String toString();
};

#endif
