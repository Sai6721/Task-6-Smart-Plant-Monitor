// Task 6 - Smart Plant Monitor

const int moisturePin = 34;
const int buzzerPin = 25;

void setup() {
  Serial.begin(115200);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {

  int moisture = analogRead(moisturePin);

  int moisturePercent = map(moisture, 0, 4095, 100, 0);

  Serial.print("Moisture: ");
  Serial.print(moisturePercent);
  Serial.println("%");

  if (moisturePercent < 30) {
    digitalWrite(buzzerPin, HIGH);
    Serial.println("Alert: Soil is Dry!");
  } else {
    digitalWrite(buzzerPin, LOW);
  }

  delay(60000);
}