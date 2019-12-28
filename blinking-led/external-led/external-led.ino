int LED_PIN = 3;

void setup() {
  // set the pin to output mode
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // set 3 seconds to high, 3 seconds to low
  digitalWrite(LED_PIN, HIGH);
  delay(3000);
  digitalWrite(LED_PIN, LOW);
  delay(3000);
}
