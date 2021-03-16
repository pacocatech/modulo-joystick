/**
   Criado por Paçoca Tech

   Youtube: https://www.youtube.com/channel/UCW6OP5j28zFsnKxpQ2v9CsA
   Instagram: http://instagram.com/pacocatech
   Github: http://github.com/pacocatech
   E-mail: pacocatech@gmail.com


   Efetuar a leitura do modulo Joystick KY-023
*/

#define eixo_x A0
#define eixo_y A1
#define botao 7

void setup() {
  Serial.begin(9600);
  pinMode(botao, INPUT_PULLUP);
}

void loop() {

  int posicaoX = analogRead(eixo_x);
  int posicaoY = analogRead(eixo_y);
  bool estadoBotao = digitalRead(botao);

  Serial.print("EIXO X:");
  Serial.println(posicaoX);
  Serial.print("EIXO Y:");
  Serial.println(posicaoY);
  Serial.print("BOTAO: ");
  Serial.println(estadoBotao ? "NÃO APERTOU" : "APERTOU");

  delay(500);
}
