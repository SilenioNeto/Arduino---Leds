void setup()
{
  //Define a porta do led como saida
  for (int i = 4; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }
}
  
void loop()
{
  /*
  //Acende o led
  digitalWrite(13, HIGH);
  delay(200);

  digitalWrite(13, LOW);
  delay(200);

  digitalWrite(12, HIGH);
  delay(200);

  digitalWrite(12, LOW);
  delay(200);

  digitalWrite(11, HIGH);
  delay(200);

  digitalWrite(11, LOW);
  delay(200);

  digitalWrite(10, HIGH);
  delay(200);

  digitalWrite(10, LOW);
  delay(200);

  digitalWrite(9, HIGH);
  delay(200);

  digitalWrite(9, LOW);
  delay(200);

  digitalWrite(8, HIGH);
  delay(200);

  digitalWrite(8, LOW);
  delay(200);

  digitalWrite(7, HIGH);
  delay(200);

  digitalWrite(7, LOW);
  delay(200);

  digitalWrite(6, HIGH);
  delay(200);

  digitalWrite(6, LOW);
  delay(200);

  digitalWrite(5, HIGH);
  delay(200);

  digitalWrite(5, LOW);
  delay(200);

  digitalWrite(4, HIGH);
  delay(200);

  digitalWrite(4, LOW);
  delay(200);
  //Aguarda intervalo de tempo em milissegundos
  delay(200);
    
  //Apaga o led
*/ 
for (int i = 4; i <= 13; i++) {
 
    digitalWrite(i, HIGH);  // Liga o pino
    delay(50);
  }

  // Desliga os pinos de 13 a 4 com 100 ms de intervalo
  for (int i = 13; i >= 4; i--) {
    digitalWrite(i, LOW);  // Desliga o pino
    delay(50);
  }

  delay(50);
  
  for (int i = 13; i >= 4; i--) {
    digitalWrite(i, HIGH);  // Desliga o pino
    delay(50);
  }

  
for (int i = 4; i <= 13; i++) {
 
    digitalWrite(i, LOW);  // Liga o pino
    delay(50);
  }

}
