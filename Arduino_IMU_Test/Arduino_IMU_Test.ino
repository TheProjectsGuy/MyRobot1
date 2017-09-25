void setup() {
  Serial3.begin(57600); //IMU
  Serial.begin(57600);  //Normal Arduino serial
  while(!Serial3);
}

void loop() {
  if (Serial3.available()) {
    Serial.write(Serial3.read());
  }
  if (Serial.available()) {
    Serial3.write("#f");
    Serial.read();
  }
}

