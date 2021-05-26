#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include "Fita.h"
#include <IRremote.h>

#define  R D4
#define  G D2
#define  B D1

const int IRsend_PIN = D6;

IRsend irsend(IRsend_PIN);
unsigned long valor;
decode_results res;
decode_type_t tipo;


#define SSID ""
#define SENHA ""

ESP8266WebServer servidor;

void coloreLED(int redQ, int greenQ, int blueQ) {

}

void ledazul(){
   valor=0xF7609F;
   irsend.sendNEC(valor,32); 
   Serial.println(valor,HEX); 
   tipo=res.decode_type;;}
void ledverdin(){
   valor=0xF78877;
   irsend.sendNEC(valor,32); 
   Serial.println(valor,HEX); 
   tipo=res.decode_type;}
void ledon(){
   valor=0xF7C03F;
   irsend.sendNEC(valor,32); 
   Serial.println(valor,HEX); 
   tipo=res.decode_type;}
void ledverde(){
   valor=0xF7A05F;
   irsend.sendNEC(valor,32); 
   Serial.println(valor,HEX); 
   tipo=res.decode_type;}
void ledroxo(){
   valor=0xF748B7;
   irsend.sendNEC(valor,32); 
   Serial.println(valor,HEX); 
   tipo=res.decode_type;}
void ledroxao(){
   valor=0xF7708F;
   irsend.sendNEC(valor,32); 
   Serial.println(valor,HEX); 
   tipo=res.decode_type;}
void ledrosa(){
   valor=0xF76897;
   irsend.sendNEC(valor,32); 
   Serial.println(valor,HEX); 
   tipo=res.decode_type;}
void ledoff(){
  valor=0xF740BF;
   irsend.sendNEC(valor,32); 
   Serial.println(valor,HEX); 
   tipo=res.decode_type;}
void ledvermelho(){
  valor=0xF730CF;
   irsend.sendNEC(valor,32); 
   Serial.println(valor,HEX); 
   tipo=res.decode_type;}
void ledbranco(){
   valor=0xF7E01F;
   irsend.sendNEC(valor,32); 
   Serial.println(valor,HEX); 
   tipo=res.decode_type;}
void ledbrilho(){
   valor=0xF700FF;
   irsend.sendNEC(valor,32); 
   Serial.println(valor,HEX); 
   tipo=res.decode_type;
}
void ledfesta(){

   valor=0xF7D02F;
   irsend.sendNEC(valor,32); 
   Serial.println(valor,HEX); 
   tipo=res.decode_type;
}
void quadroon() {
  digitalWrite (R, HIGH);
  digitalWrite (G, HIGH);
  digitalWrite (B, HIGH);
}
void quadrooff() {
  digitalWrite (R, LOW);
  digitalWrite (G, LOW);
  digitalWrite (B, LOW);
}
void quadroazul() {
  digitalWrite (R, LOW);
  digitalWrite (G, LOW);
  digitalWrite (B, HIGH);
}
void quadroroxo() {
  digitalWrite (R, HIGH);
  digitalWrite (G, LOW);
  digitalWrite (B, HIGH);
}
void quadrovermelho() {
  digitalWrite (R, HIGH);
  digitalWrite (G, LOW);
  digitalWrite (B, LOW);
}
void quadroverde() {
  digitalWrite (R, LOW);
  digitalWrite (G, HIGH);
  digitalWrite (B, LOW);
}
void setup() {
 WiFi.begin(SSID,SENHA);
Serial.begin(115200);
pinMode ( R, OUTPUT);
pinMode ( G, OUTPUT);
pinMode ( B, OUTPUT);
digitalWrite(IRsend_PIN, LOW);

while(WiFi.status()!=WL_CONNECTED)//Enquanto a conexão não é realizada
{
  Serial.print(".");
  delay(500);
}

Serial.print("IP Address: ");
Serial.println(WiFi.localIP());//Ip onde tenho que me conectar

servidor.on("/ledazul",ledazul);
servidor.on("/ledverdin",ledverdin);
servidor.on("/ledon",ledon);
servidor.on("/ledverde",ledverde);
servidor.on("/ledroxo",ledroxo);
servidor.on("/ledroxao",ledroxao);
servidor.on("/ledrosa",ledrosa);
servidor.on("/ledoff",ledoff);
servidor.on("/ledvermelho",ledvermelho);
servidor.on("/ledbranco",ledbranco);
servidor.on("/ledbrilho",ledbrilho);
servidor.on("/ledfesta",ledfesta);
servidor.on("/quadroon",quadroon);
servidor.on("/quadrooff",quadrooff);
servidor.on("/quadroazul",quadroazul);
servidor.on("/quadroroxo",quadroroxo);
servidor.on("/quadrovermelho",quadrovermelho);
servidor.on("/quadroverde",quadroverde);
servidor.begin();
}

void loop() {
  coloreLED(16,176,200);
  servidor.send(200,"text/html", Fita);//Imprime a página web no servidor
  servidor.handleClient();  

}