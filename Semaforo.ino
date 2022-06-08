int ledRojo = 11;
int ledAmarillo = 10;
int ledVerde = 9;

int tEspera = 1000;
int tEncen = 2000;

void setup() {
}

void loop() {
  analogWrite(ledRojo,255);
  delay(tEncen);
  analogWrite(ledRojo,100);
  delay(tEncen);
  analogWrite(ledRojo,0);
  delay(tEspera);

  analogWrite(ledVerde,255);
  delay(tEncen);
  analogWrite(ledVerde,100);
  delay(tEncen);
  analogWrite(ledVerde,0);
  delay(tEspera);

  analogWrite(ledAmarillo,255);
  delay(tEncen);
  analogWrite(ledAmarillo,100);
  delay(tEncen);
  analogWrite(ledAmarillo,0);
  delay(tEspera);
}
