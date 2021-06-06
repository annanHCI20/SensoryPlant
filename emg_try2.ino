int speakerPin = 12; // Buzzer pin
int EMGPin = A1; // put all three sensors on the plant and open the serialplotter
int EMGVal = 0;

void setup() {
  Serial.begin(115200); 
  pinMode(speakerPin, OUTPUT);
}

void loop() { 
  EMGVal = analogRead(EMGPin);
  Serial.println(EMGVal);
  delay(20);  
  tone(speakerPin, EMGVal);
}
