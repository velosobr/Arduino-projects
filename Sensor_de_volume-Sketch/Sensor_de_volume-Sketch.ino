/*
Por Lino Veloso - github.com/velosobr

*/

//DEFINICAO DOS PINOS
#define pinLed1  2
#define pinLed2  3
#define pinLed3  4
#define pinLed4  5
#define pinLed5  6
#define pinLed6  7
#define pinLed7  8
#define pinLed8  9
#define pinLed9  10
#define pinLed10 11


void setup() {
  pinMode(pinLed1, OUTPUT);
  pinMode(pinLed2, OUTPUT);
  pinMode(pinLed3, OUTPUT);
  pinMode(pinLed4, OUTPUT);
  pinMode(pinLed5, OUTPUT);
  pinMode(pinLed6, OUTPUT);
  pinMode(pinLed7, OUTPUT);
  pinMode(pinLed8, OUTPUT);
  pinMode(pinLed9, OUTPUT);
  pinMode(pinLed10, OUTPUT);
}

void loop() {
  int valorLido = analogRead(A0);

  digitalWrite(pinLed1, valorLido > 36);
  digitalWrite(pinLed2, valorLido > 45);
  digitalWrite(pinLed3, valorLido > 90);
  digitalWrite(pinLed4, valorLido > 100);
  digitalWrite(pinLed5, valorLido > 115);
  digitalWrite(pinLed6, valorLido > 140);
  digitalWrite(pinLed7, valorLido > 160);
  digitalWrite(pinLed8, valorLido > 180);
  digitalWrite(pinLed9, valorLido > 200);
  digitalWrite(pinLed10, valorLido > 240);
}
