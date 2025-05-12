#include "l9110.h"

L9110 motoresRobo(9, 10, 5, 6);
const int sensorE= A1, sensorD= A0;

void setup()
{
  Serial.begin(9600);
}
  int caminho = 0;

void teste_motores(){
  int direita = digitalRead(sensorD);
  int esquerda = digitalRead(sensorE);
  int tempoParado = 10;

  Serial.print("direito: ");   // Imprime a string
  Serial.print(direita); // Imprime o valor da variável
  Serial.print(" esquerda: ");   // Imprime a string
  Serial.println(esquerda);

  if(direita == 1 && esquerda == 1){
  caminho = 0;
    Serial.println("Frente");
  } else if(direita == 1 && esquerda == 0)
  {
  caminho = 1;
    Serial.println("Direita");
  } else if(direita == 0 && esquerda == 1)
  {
  caminho = 2;
    Serial.println("Esquerda");
  } 







switch caminho{

  case 0:


  break;

  case 1:


  break;

  case 2:


  break;
}



  if(direita == 1 && esquerda == 1){
    motoresRobo.frente(200,20);
    motoresRobo.parar();
    delay(tempoParado);
    Serial.println("Frente");
  } else if(direita == 1 && esquerda == 0)
  {
    motoresRobo.direita(100, 50);
    motoresRobo.parar();
    delay(tempoParado);
    Serial.println("Direita");
  } else if(direita == 0 && esquerda == 1)
  {
    motoresRobo.esquerda(100, 50);
    motoresRobo.parar();
    delay(tempoParado);
    Serial.println("Esquerda");
  } 

  
}

void loop()
{
  teste_motores();
}