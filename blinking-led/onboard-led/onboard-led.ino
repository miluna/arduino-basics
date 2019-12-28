int LED_PIN = 13;

void setup() {
  // set the pin to output mode
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // set 1/2 second to high, 1/2 second to low
  digitalWrite(LED_PIN, HIGH);
  delay(500);
  digitalWrite(LED_PIN, LOW);
  delay(500);
}
