#define sensorPin A0
#define buzzerPin 7

void setup() {
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);  // For debugging or GSM
}

void loop() {
  int level = analogRead(sensorPin);
  float voltage = level * (5.0 / 1023.0);

  if (voltage > 2.5) {
    digitalWrite(buzzerPin, HIGH);
    Serial.println("Flood Alert! Water Level HIGH!");
    // Simulate SMS:
    // Serial.println("AT+CMGF=1"); delay(100);
    // Serial.println("AT+CMGS=\"+91XXXXXXXXXX\"\r");
    // Serial.print("Flood Detected!");
  } else {
    digitalWrite(buzzerPin, LOW);
    Serial.println("Water Level Normal");
  }

  delay(2000);
}
