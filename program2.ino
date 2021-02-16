
const int redLed1 = 5;
const int redLed2 = 4;
const int greenLed1 = 3;
const int sensorPin = A0;
const float baselineTemp = 25.0;

void setup() {
  Serial.begin(9600);

for (int pinNumber = greenLed1; pinNumber <= redLed1; pinNumber++){
  pinMode(pinNumber, OUTPUT);
  digitalWrite(pinNumber, LOW);
}
}

void loop() {
  
  int sensorVal = analogRead(sensorPin);

  Serial.print("Sensor value: ");
  Serial.print(sensorVal);

  float voltage = sensorVal / 1024.0 * 5;

  Serial.print(" , Volts: ");
  Serial.print(voltage);

  float temperature = (voltage - .5) * 100;
  
  Serial.print(" , Temp: ");
  Serial.println(temperature);

   
   if (temperature < baselineTemp + 2){
    digitalWrite (greenLed1, LOW);
    digitalWrite (redLed2, LOW);
    digitalWrite (redLed1, LOW); 
  }

  else if(temperature >= baselineTemp + 2 && temperature < baselineTemp + 4){
    digitalWrite (greenLed1, HIGH);
    digitalWrite (redLed2, LOW);
    digitalWrite (redLed1, LOW);
  }

  else if(temperature >= baselineTemp + 4 && temperature < baselineTemp + 6){
    digitalWrite (greenLed1, HIGH);
    digitalWrite (redLed2, HIGH);
    digitalWrite (redLed1, LOW);
  }

  else if(temperature >= baselineTemp + 6){
    digitalWrite (greenLed1, HIGH);
    digitalWrite (redLed2, HIGH);
    digitalWrite (redLed1, HIGH);
  }
  
  delay(250);
}



  
