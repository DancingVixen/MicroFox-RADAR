/*
  uFOX 5.826Ghz Microwave RADAR 
 */
//LCD Library
#include <LiquidCrystal.h>
//LCD Pin map
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
//pin assignment for input
int Output = 6;

// Code run when Arduino Powered On/Reset
void setup() {
  // Serial communications at 9600 baud rate
  Serial.begin(9600);
  //
  pinMode(Output, INPUT);
}

// loops everything for live data via serial monitor.
void loop() {
  // Reads data from the input pin
  int SensorVal = digitalRead(Output);
  // print out the state of sensor:
  Serial.println(SensorVal);
  delay(0.5);    // Delay between reading measurements for added stability.
  lcd.print(Serial);
}
