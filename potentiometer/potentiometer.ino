void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(A0);
  // value goes from 0 to 1023 -> normalize to 0-255
  int ledValue = map(value, 0, 1023, 0, 255);
  analogWrite(3, value);
  float volts = mapFloat(value, 0, 1023, 0, 5);
  Serial.println((String) volts);
  
  delay(250);
}

float mapFloat(float readValue, float minValue, float maxValue, float outMinValue, float outMaxValue) {
  return (readValue - minValue) * (outMaxValue - outMinValue) / (maxValue - minValue) + outMinValue;
}
