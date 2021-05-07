int A1 8;
int B1 9;
int A2 10;
int B2 11 ;
int cg1 ,cg ,cd ,cd1 ,cc ; 

void setup() {
  Serial.begin(9600);
pinMode(A1,OUTPUT);
pinMode(A2,OUTPUT);
pinMode(B1,OUTPUT); 
pinMode(B2,OUTPUT);
pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(A2,INPUT);
pinMode(A3,INPUT);
pinMode(A4,INPUT);
}
void forward(int speed){
  analogWrite(A1,speed);
digitalWrite(A2,LOW);

analogWrite(B1,speed);
digitalWrite(B2,LOW);
}
void backward(int speed){
  digitalWrite(A1,LOW);
digitalWrite(A2,speed);

digitalWrite(B1,LOW);
digitalWrite(B2,speed);
}
void TurnRight(int speed){
  digitalWrite(A1,speed);
digitalWrite(A2,LOW);

digitalWrite(B1,LOW);
digitalWrite(B2,speed);
}
void TurnLeft(int speed){
  digitalWrite(A1,LOW);
digitalWrite(A2,speed);

digitalWrite(B1,speed);
digitalWrite(B2,LOW);
}


void loop() {
cg= analogRead(A0) ; 
cg1= analogRead(A1) ; 
cd= analogRead(A2) ; 
cd1= analogRead(A3) ; 
cc= analogRead(A4) ;
if(cc<150 && cg>150 && cg1>150 && cd>150 && cd1>150){
  forward(/*speed */);  
}
else if(cc<150 && cg<150 && cg1<150 && cd>150 && cd1>150){
  TurnLeft(/*spped */);
}
 else if(cc<150 && cd<150 && cd1<150 && cg>150 && cg1>150){
  TurnRight(/*speed */);
 }
 //angle 75°
if( cg<150 && cgg>150 && cc>150 && cd>150 && cdd>150){
  TurnLeft(/*slowly*/);
  /*lazem idour betrayef bch mayfoutich l'angle*/
}
else if(cd<150 && cdd>150 && cg>150 && cgg>150 && cc>150){
  TurnRight(/*slowly*/);
}
//croisement
if(cd<150 && cdd<150 && cgg<150 && cg<150 && cc<150){
  forward(/*speed*/);
}
if(cc<seuil && cg<seuil && cgg>150 && cd>150 && cdd>150)/*7atit seuil houni 5ater netsawer ligne blanche  bich tji bin les deux capteurs centre w gauche donc mna3rach seuil 9adeh bedhabt*/ {
  TurnLeft(/*slowly*/);
}

}
