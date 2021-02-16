

const int redLed1 = 5;
const int redLed2 = 4;
const int greenLed1 = 3;
const int switch1 = 2;

int switchState = 0;

void setup() {
  definePins();
}

void loop() {

  switchState = digitalRead(2);

  if (switchState == LOW){
    blinkingLights();
  }

  else {
    differentLights();
  }
}

void definePins(){
  pinMode(greenLed1, OUTPUT);
  pinMode(redLed2, OUTPUT);
  pinMode(redLed1, OUTPUT);
  pinMode(switch1, INPUT);
  
}

void blinkingLights(){
    delay(250);
    digitalWrite(greenLed1, HIGH);
    digitalWrite(redLed2, HIGH);
    digitalWrite(redLed1, HIGH);
    delay(250);
    digitalWrite(greenLed1, LOW);
    digitalWrite(redLed2, LOW);
    digitalWrite(redLed1, LOW);  
}

void differentLights(){
    delay(250);
    digitalWrite(greenLed1, HIGH);
    delay(250);
    digitalWrite(redLed2, HIGH);
    delay(250);
    digitalWrite(redLed1, HIGH);
    delay(250);
    digitalWrite(greenLed1, LOW);
    delay(250);
    digitalWrite(redLed2, LOW);
    delay(250);
    digitalWrite(redLed1, LOW);
  
}
