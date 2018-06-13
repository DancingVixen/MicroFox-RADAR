/*
  uFOX 5.826Ghz Microwave RADAR 
 */

#include <LiquidCrystal.h>


//pin assignment for input
int Output = 4;

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


void setup() {
  // Serial communications at 9600 baud rate
  Serial.begin(9600);

  // Initialize the LCD at 16x2
  lcd.begin(16, 2);

  // Initialize the input pin
  pinMode(Output, INPUT);
}


void loop() {
  // Reads data from the input pin
  int SensorVal = digitalRead(Output);

  // print out the state of sensor:
  Serial.println(SensorVal);

  // Print to the LCD (in decimal)
  lcd.print(SensorVal, DEC);

  //delay(1);    // Delay between reading measurements for added stability.
  delay(500); //test delay
}
