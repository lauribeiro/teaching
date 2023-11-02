// class for KIDS
// a simple dice with leds

int numero = 0;

void setup()
{
  pinMode(9, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  while (digitalRead(9) == HIGH) {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    delay(500); // Wait for 500 millisecond(s)
    digitalWrite(5, HIGH);
    delay(300); // Wait for 300 millisecond(s)
    digitalWrite(4, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, LOW);
    delay(300); // Wait for 300 millisecond(s)
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(6, LOW);
    delay(300); // Wait for 300 millisecond(s)
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    delay(500); // Wait for 500 millisecond(s)
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    delay(300); // Wait for 300 millisecond(s)
    digitalWrite(4, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    delay(300); // Wait for 300 millisecond(s)
    digitalWrite(5, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(6, LOW);
    delay(300); // Wait for 300 millisecond(s)
    digitalWrite(5, LOW);
    delay(500); // Wait for 500 millisecond(s)
    numero = random(1, 6 + 1);
  }
  if (numero == 1) {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
  }
  if (numero == 2) {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
  }
  if (numero == 3) {
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
  }
  if (numero == 4) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
  }
  if (numero == 5) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
  }
  if (numero == 6) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
  }
}
