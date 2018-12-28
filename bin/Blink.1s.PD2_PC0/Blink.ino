/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(A0, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(A1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(A2, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(A3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);              // wait for a second
 
  digitalWrite(2, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(3, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(4, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(5, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(A0, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(A1, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(A2, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(A3, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
}
