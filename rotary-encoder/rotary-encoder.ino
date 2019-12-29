const int outputA = 6;
const int outputB = 7;
const int outputBtn = 8;

void setup() {
  pinMode (outputA,INPUT);
  pinMode (outputB,INPUT);
  pinMode (outputBtn,INPUT);
  Serial.begin(9600);
}

void loop() {
  String readA = (String) digitalRead(outputA);
  String readB = (String) digitalRead(outputB);
  String readBtn = (String) digitalRead(outputBtn);
  Serial.println("OutputA: " + readA);
  Serial.println("OutputB: " + readB);
  Serial.println("OutputBtn: " + readBtn);
  delay(100);
}
