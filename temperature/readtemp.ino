#include <math.h>

double Thermister(int RawADC) {
  double Temp;
  Temp = log(((10240000/RawADC) - 10000));
  Temp = 1 / (0.001129148 + (0.000234125 * Temp) + (0.0000000876741 * Temp * Temp * Temp));
  Temp = Temp - 273.15;
  return Temp;
}
int led = 13;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}
 
void loop() {
  char sTemp[] = "00.00";  
  double temp = Thermister(analogRead(0));
  dtostrf(temp, 4, 2, sTemp);
  Serial.println(String(sTemp));
  delay(30000);
}
