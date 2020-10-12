int relay1 = 4;  //rele de mecanismo//
int relay2 = 6;  //rele de dispenser//
int relay3 = 8;  //rele de base//

void setup() {
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  delay(5000);
  digitalWrite(relay1, LOW);
  delay(2750);
  digitalWrite(relay2, LOW);
  delay(2200);
  digitalWrite(relay3, HIGH);
  delay(9000);
  digitalWrite(relay3, LOW);
  delay(4000);
 }
