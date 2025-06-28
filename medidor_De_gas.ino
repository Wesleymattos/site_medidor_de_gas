#include <WiFi.h>         
#include <IOXhop_FirebaseESP32.h> 

//wifi da minha empresa
//#define WIFI_SSID "shirou_2GHz"                   
//#define WIFI_PASSWORD "T@fStor3"   

//wifi do meu celular
#define WIFI_SSID "Wesley"                   
#define WIFI_PASSWORD "unovermelho"  

//wifi da minha casa
//#define WIFI_SSID "FAMÍLIA MATTOS"                   
//#define WIFI_PASSWORD "1498877676l"   

#define FIREBASE_HOST "https://medidor-de-gas-95ee5-default-rtdb.firebaseio.com"    
#define FIREBASE_AUTH "AIzaSyAbr7fMYIpnb83WakHYUonCQlNFoKDSLAc"   

void setup() {
  Serial.begin(115200);
  Serial.println();

  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  
  Serial.print("Conectando ao wifi");
  
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(300);
  }
  
  Serial.println();
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
}

void loop() {
  // Exemplo da função Get para número inteiro
  Serial.println();
  Firebase.setInt("/gas_value", 100);
Firebase.setInt("/botijao_get_peso", 26);
delay(700);

Firebase.setInt("/gas_value", 90);
Firebase.setInt("/botijao_get_peso", 24.7);
delay(700);

Firebase.setInt("/gas_value", 80);
Firebase.setInt("/botijao_get_peso", 23.4);
delay(700);

Firebase.setInt("/gas_value", 70);
Firebase.setInt("/botijao_get_peso", 22.1);
delay(700);

Firebase.setInt("/gas_value", 60);
Firebase.setInt("/botijao_get_peso", 20.8);
delay(700);

Firebase.setInt("/gas_value", 50);
Firebase.setInt("/botijao_get_peso", 19.5);
delay(700);

Firebase.setInt("/gas_value", 40);
Firebase.setInt("/botijao_get_peso", 18.2);
delay(700);

Firebase.setInt("/gas_value", 30);
Firebase.setInt("/botijao_get_peso", 16.9);
delay(700);

Firebase.setInt("/gas_value", 20);
Firebase.setInt("/botijao_get_peso", 15.6);
delay(700);

Firebase.setInt("/gas_value", 10);
Firebase.setInt("/botijao_get_peso", 14.3);
delay(700);

Firebase.setInt("/gas_value", 0);
Firebase.setInt("/botijao_get_peso", 13);

    


}
