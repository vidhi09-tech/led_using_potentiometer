int potPin = A0;
int led = 3;


void setup() {
  pinMode(led,OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  int value = analogRead(potPin);
  Serial.print("value: ");
  Serial.println(value);
  int intensity = value/4;
  Serial.print("intensity: ");
  Serial.println(intensity);
  delay(500);
  analogWrite(led,intensity);
  delay(5);
}
