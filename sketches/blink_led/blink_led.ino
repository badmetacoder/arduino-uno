// insert the anode (the longer pin) of the LED
// into socket 13, insert the cathode (the
// shorter pin) into the GND (ground) socket on
// the Arduino Uno board.
const int LED = 13;
const int DELAY = 50; 

void setup() {
  // put your setup code here, to run once
  // -------------------------------------
  //
  // set the LED pin to output mode
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly
  // ------------------------------------------
  //
  // turn the LED on
  digitalWrite(LED, HIGH);
  // wait
  delay(DELAY);
  // turn the LED off
  digitalWrite(LED, LOW);
  // wait
  delay(DELAY);
}
