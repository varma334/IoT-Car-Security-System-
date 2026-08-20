// IoT Car Security System
// ESP32 + IR Sensor + Buzzer

#define IR_SENSOR_PIN  27
#define BUZZER_PIN     26
#define LED_PIN        2

void setup() {
  Serial.begin(115200);

  pinMode(IR_SENSOR_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);

  digitalWrite(BUZZER_PIN, LOW);
  digitalWrite(LED_PIN, LOW);

  Serial.println("Car Security System Started");
}

void loop() {

  int sensorState = digitalRead(IR_SENSOR_PIN);

  // Most IR obstacle sensors give LOW when an object is detected
  if (sensorState == LOW) {

    Serial.println("WARNING: Intrusion Detected!");

    digitalWrite(BUZZER_PIN, HIGH);
    digitalWrite(LED_PIN, HIGH);

    delay(1000);

  } else {

    Serial.println("Car Secure");

    digitalWrite(BUZZER_PIN, LOW);
    digitalWrite(LED_PIN, LOW);
  }

  delay(200);
}