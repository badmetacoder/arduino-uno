// connect the anode (the longer pin) of LED1
// to socket 13, connect the anode (the
// longer pin) of LED2 to socket 12, connect
// the cathodes (the shorter pins) of LED1 and
// LED2 to the GND (ground) socket on the
// Arduino Uno board.
const int LED1 = 13; 
const int LED2 = 12;
const int DELAY = 500;

void setup() {
  // put your setup code here, to run once
  // -------------------------------------
  //
  // set the LED pin to output mode
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly
  // ------------------------------------------
  //
  // turn the LED on
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  // wait
  delay(DELAY);
  // turn the LED off
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  // wait
  delay(DELAY);
}
