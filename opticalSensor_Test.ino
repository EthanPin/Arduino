double sensorReading = A0;					//Analog input pin 0
int led = 4;								//digital output pin is 4

void setup() {
  pinMode(sensorReading, INPUT);			//Make A0 an input
  pinMode(led, OUTPUT);						//Make pin 4 an output 
  Serial.begin(9600); // # is the baud		//start serial in a new window
}

void loop() {
  if (sensorReading) {						//turns the LED on/off depending on the sensor
    digitalWrite(led,HIGH);
  } 
  else {
    digitalWrite(led,LOW);
  }
  Serial.println(sensorReading);			//prints the analog value in serial 
  
}
