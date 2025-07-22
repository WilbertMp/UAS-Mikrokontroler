
# UAS Mikrokontroler - Lampu LED Berkedip Berdasarkan Suhu (DHT22)

Proyek ini membaca suhu dan kelembaban dari sensor DHT22. Berdasarkan suhu, LED akan berkedip dengan kecepatan berbeda:

- Suhu ≥ 30°C → LED berkedip cepat
- Suhu 25°C - 29°C → LED berkedip sedang
- Suhu < 25°C → LED berkedip lambat

## Alat & Bahan
- Arduino UNO / ESP32 / ESP8266
- Sensor DHT22
- LED
- Resistor 220 Ohm
- Breadboard dan kabel jumper

## Pin yang Digunakan
- DHT22: pin data ke D2
- LED: ke pin 13

## Library yang Diperlukan
- `DHT sensor library` dari Adafruit
- `Adafruit Unified Sensor` library (jika diminta)

## Upload ke Board
1. Pastikan library sudah diinstal.
2. Upload file `led_dht22_pattern.ino` ke Arduino.
3. Buka Serial Monitor untuk melihat data suhu dan kelembaban.

---

### ⚡ Tidak memerlukan koneksi internet / Blynk untuk versi ini.
