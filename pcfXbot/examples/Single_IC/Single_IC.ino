/*
Biblioteca feita por Melque_lima.
*/


#include <pcfXbot.h>
#include <Wire.h> 

pcfXbot pcf(32); // endereço do CI a ser lido


void setup() {
Serial.begin(9600);
}

void loop() {
 
 int botao = pcf.digRead();  // É feita a leitura do pcf que retorna o numero do botao pressionado
 if(botao != 0){Serial.println(botao); delay(200);} // 0 e retornado como padrao para "nenhum botão pressionado"
  
}
