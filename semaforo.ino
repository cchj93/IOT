const int ledRojo = 11;
const int ledAmarillo = 12;
const int ledVerde = 13;

const int tiempoRojo = 5000;
const int tiempoAmarilloCorto = 1000;
const int tiempoAmarilloLargo = 2000;
const int tiempoVerde = 5000;

void setup() {
  pinMode(ledRojo, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop() {
  digitalWrite(ledRojo, HIGH);
  digitalWrite(ledAmarillo, LOW);
  digitalWrite(ledVerde, LOW);
  delay(tiempoRojo);

  digitalWrite(ledRojo, LOW);
  digitalWrite(ledAmarillo, HIGH);
  digitalWrite(ledVerde, LOW);
  delay(tiempoAmarilloCorto);

  delay(tiempoAmarilloLargo);

  digitalWrite(ledAmarillo, LOW);
  digitalWrite(ledVerde, HIGH);
  delay(tiempoAmarilloCorto);

  delay(tiempoVerde);

  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarillo, HIGH);
  delay(tiempoAmarilloCorto);

  delay(tiempoAmarilloLargo);

  digitalWrite(ledAmarillo, LOW);
  digitalWrite(ledRojo, HIGH);
  delay(tiempoAmarilloCorto);
}