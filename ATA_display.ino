//display for 4 number hex 7-seg digital display 

void setup(){
  pinMode(2,OUTPUT); //ATA pin6
  pinMode(3,OUTPUT); //ATA pin5
  pinMode(4,OUTPUT); //ATA pin7
  pinMode(5,OUTPUT); //ATA pin8
  pinMode(6,OUTPUT); //ATA pin9
  pinMode(7,OUTPUT); //ATA pin10
  pinMode(8,OUTPUT); //ATA pin11
  pinMode(9,OUTPUT); //ATA pin12
  pinMode(10,OUTPUT); //ATA pin1
  pinMode(11,OUTPUT); //ATA pin2
  pinMode(12,OUTPUT); //ATA pin3
  pinMode(13,OUTPUT); //ATA pin4
  digitalWrite(2,HIGH);  //"ones" place
  digitalWrite(5,HIGH);  //"tens" place
  digitalWrite(6,HIGH);  //"hundreds" place
  digitalWrite(9,HIGH);  //"thousands" place
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

void dispNum(int x){ //one digit is dsiplayed at a time, this will display specific nums
  if(x==0) {       //show a "0"
    digitalWrite(3,LOW);digitalWrite(4,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(13,HIGH);
  }
  if(x==1){
    digitalWrite(3,LOW);digitalWrite(4,HIGH);digitalWrite(7,LOW);digitalWrite(8,LOW);digitalWrite(10,LOW);digitalWrite(11,LOW);digitalWrite(13,HIGH);
  }
  if(x==2){
    digitalWrite(3,HIGH);digitalWrite(4,HIGH);digitalWrite(7,LOW);digitalWrite(8,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(13,LOW);
  }
  if(x==3){
    digitalWrite(3,HIGH);digitalWrite(4,HIGH);digitalWrite(7,LOW);digitalWrite(8,HIGH);digitalWrite(10,LOW);digitalWrite(11,HIGH);digitalWrite(13,HIGH);
  }
  if(x==4){
    digitalWrite(3,HIGH);digitalWrite(4,HIGH);digitalWrite(7,HIGH);digitalWrite(8,LOW);digitalWrite(10,LOW);digitalWrite(11,LOW);digitalWrite(13,HIGH);
  }
  if(x==5){
    digitalWrite(3,HIGH);digitalWrite(4,LOW);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(10,LOW);digitalWrite(11,HIGH);digitalWrite(13,HIGH);
  }
  if(x==6){
    digitalWrite(3,HIGH);digitalWrite(4,LOW);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(13,HIGH);
  }
  if(x==7){
    digitalWrite(3,LOW);digitalWrite(4,HIGH);digitalWrite(7,LOW);digitalWrite(8,HIGH);digitalWrite(10,LOW);digitalWrite(11,LOW);digitalWrite(13,HIGH);
  }
  if(x==8){
    digitalWrite(3,HIGH);digitalWrite(4,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(13,HIGH);
  }
  if(x==9){
    digitalWrite(3,HIGH);digitalWrite(4,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(10,LOW);digitalWrite(11,HIGH);digitalWrite(13,HIGH);
  }
}
  
void dispPlace(float x){
  int a,b,c,d,point;      //abcd for the numbers in each place and point for the decimal
  if (x >= 10000) exit;   //if the number is too big
  int bigx = (int)x;      //int part seperation
  float smlx = x - bigx;  //decimal part seperation
  if (bigx >= 1000){
    d = bigx % 10;        //ones
    c = (bigx/10) % 10;   //tens
    b = (bigx/100) % 10;  //hundreds
    a = (bigx/1000) % 10; //thous
    point = 4;
  }
  else if (bigx >= 100){
    d = (int)(smlx*10) % 10;  //ones
    c = bigx % 10;   //tens
    b = (bigx/10) % 10;  //hundreds
    a = (bigx/100) % 10; //thous
    point = 3;
  }
  else if (bigx >= 10){               ///////////////////inaccurate when hundreths is "6"
    d = (int)(smlx*100) % 10;  //ones
    c = (int)(smlx*10) % 10;   //tens
    b = bigx % 10;  //hundreds
    a = (bigx/10) % 10; //thous
    point = 2;
  }
  else{  //any positive float less than 10
    d = (int)(smlx*1000) % 10;  //ones
    c = (int)(smlx*100) % 10;   //tens
    b = (int)(smlx*10) % 10;  //hundreds
    a = bigx % 10; //thous
    point = 1;
  }
  
  digitalWrite(2,LOW);  //"ones" place
  dispNum(d);
  if (point == 4)digitalWrite(12,HIGH);
  delay(1);
  digitalWrite(12,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(5,LOW);  //"tens" place
  dispNum(c);
  if (point == 3)digitalWrite(12,HIGH);
  delay(1);
  digitalWrite(12,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);  //"hundreds" place
  dispNum(b);
  if (point == 2)digitalWrite(12,HIGH);
  delay(1);
  digitalWrite(12,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(9,LOW);  //"hundreds" place
  dispNum(a);
  if (point == 1)digitalWrite(12,HIGH);
  delay(1);
  digitalWrite(12,LOW);
  digitalWrite(9,HIGH);
}

void loop() {
  dispPlace(0.966651);
  //delay(500);
  //dispPlace(420);
}
