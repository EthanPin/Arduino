
//If you are using a common ANODE LED instead of common CATHODE, 
//connect the long pin to +5 instead of ground
//Common Anode  = Common pin to +5
//Common Cathode= Common pin to GND

void setup() {
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9,  OUTPUT);

  pinMode(3,  OUTPUT):
  pinMode(5,  OUTPUT);
  pinMode(6,  OUTPUT);// set these pins to the other RGB set, or you can have the 3 pins drive multiple LEDs
  // put your setup code here, to run once:

}

void loop() {
  //analogWrite(*PIN, *0-255); //Pin 11 Red, Pin 10 Blu, Pin 9 Grn
  analogWrite(9,   0);analogWrite(10,   0);analogWrite(11, 255);delay(100); //Red
  analogWrite(9,   0);analogWrite(10,  15);analogWrite(11, 255);delay(100);
  analogWrite(9,   0);analogWrite(10,  30);analogWrite(11, 255);delay(100);
  analogWrite(9,   0);analogWrite(10,  45);analogWrite(11, 255);delay(100);
  analogWrite(9,   0);analogWrite(10,  60);analogWrite(11, 255);delay(100);
  analogWrite(9,   0);analogWrite(10,  75);analogWrite(11, 255);delay(100);
  analogWrite(9,   0);analogWrite(10,  90);analogWrite(11, 255);delay(100);
  analogWrite(9,   0);analogWrite(10, 105);analogWrite(11, 255);delay(100);
  analogWrite(9,   0);analogWrite(10, 120);analogWrite(11, 255);delay(100);
  analogWrite(9,   0);analogWrite(10, 135);analogWrite(11, 255);delay(100);
  analogWrite(9,   0);analogWrite(10, 150);analogWrite(11, 255);delay(100);
  analogWrite(9,   0);analogWrite(10, 165);analogWrite(11, 255);delay(100);
  analogWrite(9,   0);analogWrite(10, 180);analogWrite(11, 255);delay(100);
  analogWrite(9,   0);analogWrite(10, 195);analogWrite(11, 255);delay(100);
  analogWrite(9,   0);analogWrite(10, 210);analogWrite(11, 255);delay(100);
  analogWrite(9,   0);analogWrite(10, 225);analogWrite(11, 255);delay(100);
  analogWrite(9,   0);analogWrite(10, 240);analogWrite(11, 255);delay(100);
  analogWrite(9,   0);analogWrite(10, 255);analogWrite(11, 255);delay(100);
  analogWrite(9,   0);analogWrite(10, 255);analogWrite(11, 240);delay(100);
  analogWrite(9,   0);analogWrite(10, 255);analogWrite(11, 225);delay(100);
  analogWrite(9,   0);analogWrite(10, 255);analogWrite(11, 210);delay(100);
  analogWrite(9,   0);analogWrite(10, 255);analogWrite(11, 195);delay(100);
  analogWrite(9,   0);analogWrite(10, 255);analogWrite(11, 180);delay(100);
  analogWrite(9,   0);analogWrite(10, 255);analogWrite(11, 165);delay(100);
  analogWrite(9,   0);analogWrite(10, 255);analogWrite(11, 150);delay(100);
  analogWrite(9,   0);analogWrite(10, 255);analogWrite(11, 135);delay(100);
  analogWrite(9,   0);analogWrite(10, 255);analogWrite(11, 120);delay(100);
  analogWrite(9,   0);analogWrite(10, 255);analogWrite(11, 105);delay(100);
  analogWrite(9,   0);analogWrite(10, 255);analogWrite(11,  90);delay(100);
  analogWrite(9,   0);analogWrite(10, 255);analogWrite(11,  75);delay(100);
  analogWrite(9,   0);analogWrite(10, 255);analogWrite(11,  60);delay(100);
  analogWrite(9,   0);analogWrite(10, 255);analogWrite(11,  45);delay(100);
  analogWrite(9,   0);analogWrite(10, 255);analogWrite(11,  30);delay(100);
  analogWrite(9,   0);analogWrite(10, 255);analogWrite(11,  15);delay(100);
  analogWrite(9,   0);analogWrite(10, 255);analogWrite(11,   0);delay(100);
  analogWrite(9,  15);analogWrite(10, 255);analogWrite(11,   0);delay(100);
  analogWrite(9,  30);analogWrite(10, 255);analogWrite(11,   0);delay(100);
  analogWrite(9,  45);analogWrite(10, 255);analogWrite(11,   0);delay(100);
  analogWrite(9,  60);analogWrite(10, 255);analogWrite(11,   0);delay(100);
  analogWrite(9,  75);analogWrite(10, 255);analogWrite(11,   0);delay(100);
  analogWrite(9,  90);analogWrite(10, 255);analogWrite(11,   0);delay(100);
  analogWrite(9, 105);analogWrite(10, 255);analogWrite(11,   0);delay(100);
  analogWrite(9, 120);analogWrite(10, 255);analogWrite(11,   0);delay(100);
  analogWrite(9, 135);analogWrite(10, 255);analogWrite(11,   0);delay(100);
  analogWrite(9, 150);analogWrite(10, 255);analogWrite(11,   0);delay(100);
  analogWrite(9, 165);analogWrite(10, 255);analogWrite(11,   0);delay(100);
  analogWrite(9, 180);analogWrite(10, 255);analogWrite(11,   0);delay(100);
  analogWrite(9, 195);analogWrite(10, 255);analogWrite(11,   0);delay(100);
  analogWrite(9, 210);analogWrite(10, 255);analogWrite(11,   0);delay(100);
  analogWrite(9, 225);analogWrite(10, 255);analogWrite(11,   0);delay(100);
  analogWrite(9, 240);analogWrite(10, 255);analogWrite(11,   0);delay(100);
  analogWrite(9, 255);analogWrite(10, 255);analogWrite(11,   0);delay(100);
  analogWrite(9, 255);analogWrite(10, 240);analogWrite(11,   0);delay(100);
  analogWrite(9, 255);analogWrite(10, 225);analogWrite(11,   0);delay(100);
  analogWrite(9, 255);analogWrite(10, 210);analogWrite(11,   0);delay(100);
  analogWrite(9, 255);analogWrite(10, 195);analogWrite(11,   0);delay(100);
  analogWrite(9, 255);analogWrite(10, 180);analogWrite(11,   0);delay(100);
  analogWrite(9, 255);analogWrite(10, 165);analogWrite(11,   0);delay(100);
  analogWrite(9, 255);analogWrite(10, 150);analogWrite(11,   0);delay(100);
  analogWrite(9, 255);analogWrite(10, 135);analogWrite(11,   0);delay(100);
  analogWrite(9, 255);analogWrite(10, 120);analogWrite(11,   0);delay(100);
  analogWrite(9, 255);analogWrite(10, 105);analogWrite(11,   0);delay(100);
  analogWrite(9, 255);analogWrite(10,  90);analogWrite(11,   0);delay(100);
  analogWrite(9, 255);analogWrite(10,  75);analogWrite(11,   0);delay(100);
  analogWrite(9, 255);analogWrite(10,  60);analogWrite(11,   0);delay(100);
  analogWrite(9, 255);analogWrite(10,  45);analogWrite(11,   0);delay(100);
  analogWrite(9, 255);analogWrite(10,  30);analogWrite(11,   0);delay(100);
  analogWrite(9, 255);analogWrite(10,  15);analogWrite(11,   0);delay(100);
  analogWrite(9, 255);analogWrite(10,   0);analogWrite(11,   0);delay(100);
  analogWrite(9, 255);analogWrite(10,   0);analogWrite(11,  15);delay(100);
  analogWrite(9, 255);analogWrite(10,   0);analogWrite(11,  30);delay(100);
  analogWrite(9, 255);analogWrite(10,   0);analogWrite(11,  45);delay(100);
  analogWrite(9, 255);analogWrite(10,   0);analogWrite(11,  60);delay(100);
  analogWrite(9, 255);analogWrite(10,   0);analogWrite(11,  75);delay(100);
  analogWrite(9, 255);analogWrite(10,   0);analogWrite(11,  90);delay(100);
  analogWrite(9, 255);analogWrite(10,   0);analogWrite(11, 105);delay(100);
  analogWrite(9, 255);analogWrite(10,   0);analogWrite(11, 120);delay(100);
  analogWrite(9, 255);analogWrite(10,   0);analogWrite(11, 135);delay(100);
  analogWrite(9, 255);analogWrite(10,   0);analogWrite(11, 150);delay(100);
  analogWrite(9, 255);analogWrite(10,   0);analogWrite(11, 165);delay(100);
  analogWrite(9, 255);analogWrite(10,   0);analogWrite(11, 180);delay(100);
  analogWrite(9, 255);analogWrite(10,   0);analogWrite(11, 195);delay(100);
  analogWrite(9, 255);analogWrite(10,   0);analogWrite(11, 210);delay(100);
  analogWrite(9, 255);analogWrite(10,   0);analogWrite(11, 225);delay(100);
  analogWrite(9, 255);analogWrite(10,   0);analogWrite(11, 240);delay(100);
  analogWrite(9, 255);analogWrite(10,   0);analogWrite(11, 255);delay(100);
  analogWrite(9, 240);analogWrite(10,   0);analogWrite(11, 255);delay(100);
  analogWrite(9, 225);analogWrite(10,   0);analogWrite(11, 255);delay(100);
  analogWrite(9, 210);analogWrite(10,   0);analogWrite(11, 255);delay(100);
  analogWrite(9, 195);analogWrite(10,   0);analogWrite(11, 255);delay(100);
  analogWrite(9, 180);analogWrite(10,   0);analogWrite(11, 255);delay(100);
  analogWrite(9, 165);analogWrite(10,   0);analogWrite(11, 255);delay(100);
  analogWrite(9, 150);analogWrite(10,   0);analogWrite(11, 255);delay(100);
  analogWrite(9, 135);analogWrite(10,   0);analogWrite(11, 255);delay(100);
  analogWrite(9, 120);analogWrite(10,   0);analogWrite(11, 255);delay(100);
  analogWrite(9, 105);analogWrite(10,   0);analogWrite(11, 255);delay(100);
  analogWrite(9,  90);analogWrite(10,   0);analogWrite(11, 255);delay(100);
  analogWrite(9,  75);analogWrite(10,   0);analogWrite(11, 255);delay(100);
  analogWrite(9,  60);analogWrite(10,   0);analogWrite(11, 255);delay(100);
  analogWrite(9,  45);analogWrite(10,   0);analogWrite(11, 255);delay(100);
  analogWrite(9,  30);analogWrite(10,   0);analogWrite(11, 255);delay(100);
  analogWrite(9,  15);analogWrite(10,   0);analogWrite(11, 255);delay(100);
  
}
