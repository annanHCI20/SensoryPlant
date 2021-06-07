#define speakerPin 12 // buzzer pin
#define EMGPin A1     // add three sensors on plant

int EMGVal = 0;
int Tone1 = 150; 
int Tone2 = 300; 
int Tone3 = 450; 
int Tone4 = 600; 
int Tone5 = 750; 
int Tone6 = 900; 
int Tone7 = 1000;


void setup() {
  Serial.begin(115200); 
  pinMode(speakerPin, OUTPUT);
}

void loop() { 
  EMGVal = analogRead(EMGPin);
  Serial.println(EMGVal);
  delay(20);  

if (EMGVal == 0 && EMGVal <= 150){
    tone(speakerPin, Tone1);
  }

if (EMGVal > 151 && EMGVal <= 300){
    tone(speakerPin, Tone2);
      
  }

if (EMGVal > 300 && EMGVal <= 450){
    tone(speakerPin, Tone3);

  }

if (EMGVal > 450 && EMGVal <= 600){
    tone(speakerPin, Tone4);

  }

if (EMGVal > 600 && EMGVal <= 750){
    tone(speakerPin, Tone5);

  }

if (EMGVal > 750 && EMGVal <= 900){
    tone(speakerPin, Tone6);

  }

if (EMGVal > 900){
    tone(speakerPin, Tone7);
  }


/*  Tone1 = map(EMGVal, 0, 150, 150, 150);
  Tone2 = map(EMGVal, 151, 300, 300, 300);
  Tone3 = map(EMGVal, 301, 450, 450, 450);
  Tone4 = map(EMGVal, 451, 600, 600, 600);
  Tone5 = map(EMGVal, 601, 750, 750, 750);
  Tone6 = map(EMGVal, 751, 900, 900, 900);
  Tone7 = map(EMGVal, 901, 1000, 1000, 1000);
 */ 

}
