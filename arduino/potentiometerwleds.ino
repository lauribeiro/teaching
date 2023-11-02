// class for KIDS
// potentiometer and leds

int leitura = 0;

int potencia = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  leitura = analogRead(A0);
  potencia = map(leitura, 0, 1023, 0, 50);

  if (potencia >= 10 && potencia <= 20) {
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
  } else {
    if (potencia >= 20 && potencia <= 30) {
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
    } else {
      if (potencia >= 30 && potencia <= 40) {
        digitalWrite(6, HIGH);
        digitalWrite(7, HIGH);
        digitalWrite(8, HIGH);
        digitalWrite(9, LOW);
      } else {
        if (potencia >= 40 && potencia <= 50) {
          digitalWrite(6, HIGH);
          digitalWrite(7, HIGH);
          digitalWrite(8, HIGH);
          digitalWrite(9, HIGH);
        } else {
          digitalWrite(6, LOW);
          digitalWrite(7, LOW);
          digitalWrite(8, LOW);
          digitalWrite(9, LOW);
        }
      }
    }
  }
  delay(10); 
}
