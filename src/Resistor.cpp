#include "Resistor.h"

Resistor::Resistor(float resistance){
    this->resistance = resistance;
}
Resistor::Resistor(float resistance, float current){
    this->resistance = resistance;
    this->current = current;
    this->voltage = resistance * current;
}

#pragma region accessor methods
    float Resistor::getResistance(){
        //first checks is has value, if not uses ohms law to calc
        if (resistance > 0)
            return resistance;
        else
            return voltage / current;
    }
    float Resistor::getCurrent(){
        //first checks is has value, if not uses ohms law to calc
        if(current > 0)
            return current;
        else
            return voltage / resistance;
    }
    float Resistor::getVoltage(){
        //first checks is has value, if not uses ohms law to calc
        if(voltage > 0)
            return voltage;
        else
            return current * resistance;
    }
#pragma endregion
#pragma region mutator methods
    void Resistor::setResistance(float resistance){
        this->resistance = resistance;
    }
    void Resistor::setCurrent(float current){
        this->current = current;
    }
    void Resistor::setVoltage(float voltage){
        this->voltage = voltage;
    }
#pragma endregion