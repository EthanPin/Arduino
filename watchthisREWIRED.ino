//Based on the ATA_display.ino file to make an LED act like a clock 
//Was not too heavy to carry as a watch, but makes a decent desk clock 

void setup(){
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  }

/*
//0
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(13,HIGH);
  delay(500);
//1
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(13,HIGH);
  delay(500);
//2
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(13,LOW);
  delay(500);
//3
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(13,HIGH);
  delay(500);
//4
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(13,HIGH);
  delay(500);
//5
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(13,HIGH);
  delay(500);
//6
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(13,HIGH);
  delay(500);  
//7
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(13,HIGH);
  delay(500);
//8
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(13,HIGH);
  delay(500);
//9
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(13,HIGH);
  delay(500);
*/
int a = 2;
int b = 0;
int c = 4;
int d = 4;

int t = 0;
int AlterThreshUp = 0;
int AlterThreshDown = 0;

void loop() {
  if (analogRead(3) == 1023){
    AlterThreshUp++;
  }
  if (AlterThreshUp >= 30){
    if (a == 2 & b == 3 & c == 5 & d == 9){
      a = 0;
      b = 0;
      c = 0;
      d = 0;
    }
    else if (b == 9 & c == 5 & d == 9){
      a++;
      b = 0;
      c = 0;
      d = 0;
    }
    else if (c == 5 & d == 9){
      b++;
      c = 0;
      d = 0;    
    }
    else if (d == 9){
      c++;
      d = 0;
    }
    else{
      d++;
    }
    AlterThreshUp = 0;
  }
  if (analogRead(2) == 1023){
    AlterThreshDown++;
  }
  if (AlterThreshDown >= 30){
    if (a == 0 & b == 0 & c == 0 & d == 0){
      a = 2;
      b = 3;
      c = 5;
      d = 9;
    }
    else if (b == 0 & c == 0 & d == 0){
      a--;
      b = 9;
      c = 5;
      d = 9;
    }
    else if (c == 0 & d == 0){
      b--;
      c = 5;
      d = 9;    
    }
    else if (d == 0){
      c--;
      d = 9;
    }
    else{
      d--;
    }
    AlterThreshDown = 0;
  }
  if (t == 4755){
    if (a == 2 & b == 3 & c == 5 & d == 9){
      a = 0;
      b = 0;
      c = 0;
      d = 0;
    }
    else if (b == 9 & c == 5 & d == 9){
      a++;
      b = 0;
      c = 0;
      d = 0;
    }
    else if (c == 5 & d == 9){
      b++;
      c = 0;
      d = 0;    
    }
    else if (d == 9){
      c++;
      d = 0;
    }
    else{
      d++;
    }
    AlterThreshUp = 0;
    AlterThreshDown = 0;
    t = 0;
  }
  
t++;
  
  ////////////thousands place
  digitalWrite(9, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(2, HIGH);
  
  if (a == 2){
  //2
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  }
  if (a == 1){
  //1
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  }
  if (a == 0){
  //0
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  }
  delay(1);
  
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  
  delay(2);
  
  ////////////hundreds place
  digitalWrite(9, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(2, HIGH);
  
  if (b == 9){ 
  //9
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  }
  if (b == 8){
  //8
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  }
  if (b == 7){
  //7
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  }
  if (b == 6){
  //6
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  }
  if (b == 5){
  //5
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  }
  if (b == 4){
  //4
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  }
  if (b == 3){
  //3
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  }
  if (b == 2){
  //2
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  }
  if (b == 1){
  //1
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  }
  if (b == 0){
  //0
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  }
  delay(1);
  
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  
  delay(2);
      
  ////////////tens place
  digitalWrite(9, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(2, HIGH);
  
  if (c == 5){
  //5
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  }
  if (c == 4){
  //4
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  }
  if (c == 3){
  //3
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  }
  if (c == 2){
  //2
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  }
  if (c == 1){
  //1
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  }
  if (c == 0){
  //0
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  }
  delay(1);
  
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  
  delay(2);
      
  ////////////ones place
  digitalWrite(9, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(2, LOW);
  if (d == 9){ 
  //9
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  }
  if (d == 8){
  //8
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  }
  if (d == 7){
  //7
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  }
  if (d == 6){
  //6
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  }
  if (d == 5){
  //5
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  }
  if (d == 4){
  //4
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  }
  if (d == 3){
  //3
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  }
  if (d == 2){
  //2
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  }
  if (d == 1){
  //1
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  }
  if (d == 0){
  //0
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  }
  delay(1);
  
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  
  delay(2);
      
  }
  
