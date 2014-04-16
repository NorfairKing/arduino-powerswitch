const byte ledPin = 8;      // the pin that the LED is attached to
byte incomingByte;      // a variable to read incoming serial data into

boolean ledState = false;

void setup() {
  // initialize serial communication:
  Serial.begin(9600);
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // see if there's incoming serial data:
  if (Serial.available() > 0) {
    // read the oldest byte in the serial buffer:
    incomingByte = Serial.read();
    // if it's a capital H (ASCII 72), turn on the LED:
    if (incomingByte == 'H') {
      ledState = HIGH;
    } 
    // if it's an L (ASCII 76) turn off the LED:
    if (incomingByte == 'L') {
      ledState = LOW;
    }
    digitalWrite(ledPin, ledState);
  }
}
