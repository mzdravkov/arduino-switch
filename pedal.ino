/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;
int out = 9;
int in = 10;

// the setup routine runs once when you press reset:
void setup() {                
  Serial.begin(9600);
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
  pinMode(out, OUTPUT);
  pinMode(in, INPUT);
  digitalWrite(out, HIGH);
}

// the loop routine runs over and over again forever:
void loop() {
  if (!digitalRead(10)){
    digitalWrite(led, HIGH);
    if (Serial.available() == 0) Serial.write(1);
  } else
  {
    digitalWrite(led, LOW);
    Serial.write(0);
  }
}
