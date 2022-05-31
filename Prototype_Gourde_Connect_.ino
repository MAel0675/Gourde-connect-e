#include <DHT.h>
#include <Wire.h>
#include "SHTSensor.h"
#include <FastLED.h>

#define brocheDeBranchementDHT1 6     // Pour le premier capteur DHT (près de la gourde)

#define typeDeDHT DHT22


//Initialisation des capteurs DHT22
DHT dht1(brocheDeBranchementDHT1, typeDeDHT);//for first DHT module
SHTSensor sht;

float getTemp(int dhtCount)
{

  if(dhtCount ==1){
    // Lire le Taux d'humidité
    float h1 = dht1.readHumidity();
    // Lire la température en Celsius
    float t1 = dht1.readTemperature();
    return(t1);
         

  }// DHT1 end

}


void setup() {
  Serial.begin(9600);
  Serial.println("Activation de la gourde connecté !");
  Serial.println("=====================");
  Wire.begin();
  sht.init();
  sht.setAccuracy(SHTSensor::SHT_ACCURACY_MEDIUM); // only supported by SHT3x


  Serial.println("Temperature:");   // Plot labels

  dht1.begin();//for first DHT module
}

void loop() {

  float t1;
  float h1;

  t1 = getTemp(1);
  h1 = dht1.readHumidity();
  
  Serial.print("Température de la gourde = ");
  Serial.print(t1);
  Serial.println(" °C");
  if (h1 < 90) {
  Serial.print("Taux d'humidité près de la gourde = ");
  Serial.print(h1);
  Serial.println(" %");
  }
  else {
    Serial.println("Taux d'humidité trop élevé, veuillez enlever le capteur.");
  }

    sht.readSample();
    Serial.print("Température extérieur : ");
    Serial.print(sht.getTemperature());
    Serial.println(" °C");

  delay(2000);
}
