#include <Arduino.h>


// Globals
String dataLabel1 = "EMG";
bool label = true;
int EMGPin = A1;
int EMGVal = 0;

void setup() {
    Serial.begin(115200);
    pinMode(EMGPin, INPUT);
}

void loop() {

    // runs once
    while(label) {
        Serial.print(dataLabel1);
        label=false;
    }

    EMGVal = analogRead(EMGPin);
    Serial.println(EMGVal);
    delay(50);
}