//Buzzer code
// Define the pin connected to the sensor
#define sensor_pin 2 

// Define the pin connected to the buzzer
#define buzzer 3 

// The setup function runs once when the program starts
void setup() 
{ 
  // Initialize serial communication at 9600 bits per second
  Serial.begin(9600); 
  
  // Configure the sensor pin as an input
  pinMode(sensor_pin, INPUT); 
  
  // Configure the buzzer pin as an output
  pinMode(buzzer, OUTPUT); 
  
  // Print a message to the serial monitor
  Serial.println("Smart Duster"); 
  
  // Wait for 500 milliseconds
  delay(500); 
} 

// The loop function runs repeatedly after setup
void loop() 
{ 
  // Check if the sensor detects an obstacle (value is LOW)
  if (digitalRead(sensor_pin) == 0) 
  { 
    // Turn the buzzer ON
    digitalWrite(buzzer, HIGH); 
    
    // Wait for 300 milliseconds
    delay(300); 
  } 
  else 
  { 
    // Turn the buzzer OFF
    digitalWrite(buzzer, LOW); 
  } 
  
  // Wait for 100 milliseconds before repeating the loop
  delay(100); 
} 
