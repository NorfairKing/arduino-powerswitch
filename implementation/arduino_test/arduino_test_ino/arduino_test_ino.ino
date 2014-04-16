/*
  Blink
  Turns on the power for a second, then off for a second.
 */
 
// The IO pin
int PIN = 8;


void setup() {                
  pinMode(PIN, OUTPUT);     
}

void loop() {
  digitalWrite(PIN, HIGH);   
  delay(1000);               
  digitalWrite(PIN, LOW);    
  delay(1000);               
}
