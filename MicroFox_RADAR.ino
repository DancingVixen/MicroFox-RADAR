/*
  uFOX 5.826Ghz Microwave RADAR 
 */

//pin assignment for input
int Output = 4;

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
  delay(1);    // Delay between reading measurements for added stability.
}
