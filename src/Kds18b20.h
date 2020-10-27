#ifndef KDS_H
#define KDS_H
#include "OneWire.h"
#include "DallasTemperature.h"

class KDS
{
private:
    OneWire oneWire;
    DallasTemperature sensors;
    DeviceAddress insideThermometer;

public:
    KDS(int);
    void printTemperature(DeviceAddress);
    void printAddress(DeviceAddress);
    float readDs();
};
#endif