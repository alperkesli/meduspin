#include <Wire.h>         // Seri baglanti icin kutuphane tanimlamasi


void setup() {
  Wire.begin();           // Seri baglantiyi baslatmaktadir.
  Serial.begin(9600);     // Seri baglantiyi 9600 bandina ayalarmaktadir.
}
void loop() {
  delay(900);
  int sensorValueA0=analogRead(A0);                   // A0, A1 ve A2'nin pinlerin ayarlamasi
  int sensorValueA1=analogRead(A1);
  int sensorValueA2=analogRead(A2);
//  int sensorValueA3=analogRead(A3);
//  int sensorValueA4=analogRead(A4);
  sensorValueA0 = map(sensorValueA0,0,1023,0,180);    // A0, A1 ve A2'nin 0 1023 degerlerini 0 180 arasinda degerlere donusmektedir.
  sensorValueA1 = map(sensorValueA1,0,1023,0,180);
  sensorValueA2 = map(sensorValueA2,0,1023,0,180);
//  sensorValueA3 = map(sensorValueA2,0,1023,0,180);
//  sensorValueA4 = map(sensorValueA2,0,1023,0,180);

  Wire.beginTransmission(8);              // serial baglantinin 8 bitlik baglanti uzerinden kurulmasini saglar.
  Wire.write("A0: ");        // A0, A1 ve A2 sabit ve degiskenleri icin serial baglantida yazdirma islemi yapar. 
  Wire.write(sensorValueA0);
  Wire.endTransmission();     
  Wire.beginTransmission(8);
  Wire.write("A1: ");
  Wire.write(sensorValueA1);
  Wire.endTransmission();
  Wire.beginTransmission(8);
  Wire.write("A2: ");
  Wire.write(sensorValueA2);
  Wire.endTransmission();   
  Wire.beginTransmission(8);
  //Wire.write("A3: ");
  //Wire.write(sensorValueA3);
  //Wire.endTransmission();
  //Wire.beginTransmission(8);
  //Wire.write("A4: ");
  //Wire.write(sensorValueA4);
  //Wire.endTransmission();
  //if(sensorValueA0 > 180 || sensorValueA1 > 180 || sensorValueA2 > 180 || sensorValueA3 > 180 || sensorValueA4 > 180)
  //{
  //Wire.beginTransmission(8);
  //Wire.write("Duruşunuzu düzeltin ");
  //Wire.endTransmission();
  //}
  //else
  //{ 
  //Wire.beginTransmission(8);
  //Wire.write("Duruşunuz Normal ");
  //Wire.endTransmission();
  //}
  
}
