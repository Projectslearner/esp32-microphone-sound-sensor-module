/*
    Project name: ESP32 Microphone Sound Sensor Module
    Modified Date: 24-06-2024
    Code by: Projectslearner
    Website: https://projectslearner.com/learn/esp32-microphone-sound-sensor
*/

const int soundSensorPin = 34; // GPIO pin connected to the sound sensor
int soundValue; // Variable to store the sound sensor value

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(soundSensorPin, INPUT); // Set the sound sensor pin as INPUT
}

void loop() {
  // Read the analog value from the sound sensor
  soundValue = analogRead(soundSensorPin);

  // Print the sound sensor value to the Serial Monitor
  Serial.print("Sound Level: ");
  Serial.println(soundValue);

  delay(1000); // Delay before the next reading
}
