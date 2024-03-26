#include "Resistor.h"
#include <iostream>

using namespace std;

int main(){
    Resistor test(5.5, 1.1);
    cout <<"R: " <<  test.getResistance() << " I: " << test.getCurrent() << " V: " << test.getVoltage() << endl;
}