#pragma once

class Resistor{

    public:
        Resistor(float resistance);
        Resistor(float resistance, float current);

        float getResistance();
        float getCurrent();
        float getVoltage();

        void setResistance(float resistance);
        void setCurrent(float current);
        void setVoltage(float voltage);

    private:
        float resistance = 0;
        float current = 0;
        float voltage = 0;

};
