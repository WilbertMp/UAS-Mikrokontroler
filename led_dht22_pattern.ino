
#include <DHT.h>

#define DHTPIN 2         // Pin data sensor DHT22 terhubung ke D2
#define DHTTYPE DHT22    // Tipe sensor DHT22
#define LEDPIN 13        // Pin LED (bisa diganti sesuai yang digunakan)

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(LEDPIN, OUTPUT);
}

void loop() {
  float suhu = dht.readTemperature();
  float kelembaban = dht.readHumidity();

  // Cek apakah pembacaan gagal
  if (isnan(suhu) || isnan(kelembaban)) {
    Serial.println("Gagal membaca dari sensor DHT22!");
    delay(2000);
    return;
  }

  Serial.print("Suhu: ");
  Serial.print(suhu);
  Serial.print(" *C	");
  Serial.print("Kelembaban: ");
  Serial.print(kelembaban);
  Serial.println(" %");

  int delayTime = 1000; // default

  if (suhu >= 30) {
    delayTime = 200; // Kedip cepat jika suhu tinggi
  } else if (suhu >= 25) {
    delayTime = 500; // Kedip sedang
  } else {
    delayTime = 1000; // Kedip lambat
  }

  // Kedipkan LED
  digitalWrite(LEDPIN, HIGH);
  delay(delayTime);
  digitalWrite(LEDPIN, LOW);
  delay(delayTime);
}
