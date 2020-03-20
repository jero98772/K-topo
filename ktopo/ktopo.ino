
int taladroin1 = 4 ;
int taladroin2 = 2 ;
int taladroena = 3 ;
int dostaladroin1 = 9 ;
int dostaladroin2 =  10;
int dostaladroena =  11;
int ladoderechoin1 = 7;
int ladoderechoin2 = 8;
int ladoderchaena = 5;
int ladoizquerdain1 = 13;
int ladoizquerdain2 = 12;
int ladoizquierdaena = 6;
void setup() {
  Serial.begin(9600);
  pinMode(taladroin1, OUTPUT);
  pinMode(taladroin2, OUTPUT);
  pinMode(taladroena, OUTPUT);
  pinMode(dostaladroin1, OUTPUT);
  pinMode(dostaladroin2, OUTPUT);
  pinMode(dostaladroena, OUTPUT);
  pinMode(ladoderechoin1, OUTPUT);
  pinMode(ladoderechoin2, OUTPUT);
  pinMode(ladoderchaena, OUTPUT);
  pinMode(ladoizquerdain1, OUTPUT);
  pinMode(ladoizquerdain2, OUTPUT);
  pinMode(ladoizquierdaena, OUTPUT);
}

void loop() {
  switch(Serial.read()){
    case '0':
    o ();
    break;
     case'1':
    l ();
      break;
    case'M':
    taladroALMAX ();
    break;
     case'm':
    taladrooff ();
      break;
         case'A':
     adelante ();
     delay(8);
     Adelante ();
    break;
     case'a':
    aatraz ();
      break;
    case'i':
    izquierda90 ();
    break;
     case'I':
     izqierdaloca();
      break;
     case'S':
     STOP ();
     }
}
void l (){

     
      digitalWrite(ladoderechoin1, HIGH);
      digitalWrite(ladoderechoin2, LOW);
      analogWrite(ladoderchaena, 255);
      digitalWrite(ladoizquerdain2, HIGH);
      digitalWrite(ladoizquerdain1, LOW);
      analogWrite(ladoizquierdaena,150);
      Serial.println("FUN...");
      delay(5);
      digitalWrite(ladoderechoin1, LOW);
      digitalWrite(ladoderechoin2, HIGH);
      analogWrite(ladoderchaena, 255);
      digitalWrite(ladoizquerdain2,LOW);
      digitalWrite(ladoizquerdain1 , HIGH);
      analogWrite(ladoizquierdaena,150);
      Serial.println("CIO...");
      delay(5);
      digitalWrite(taladroin1, LOW);
     digitalWrite(taladroin2, HIGH); 
      for (int x = 0 ; x  < 150; x++){
      analogWrite(taladroena, x);}
      Serial.println("NA");
         }
         
 void o(){

     
      digitalWrite(ladoderechoin1, LOW);
      digitalWrite(ladoderechoin2, LOW);
      digitalWrite(ladoizquerdain2, LOW);
      digitalWrite(ladoizquerdain1, LOW);
      Serial.println("off");
      delay(5);
      for (int x = 0 ; x  > 150; x--){
      analogWrite(taladroena, x);}
      Serial.println("apagado");
         }


void taladroALMAX (){

 digitalWrite(taladroin1, LOW);
     digitalWrite(taladroin2, HIGH); 
      for (int x = 0 ; x  < 150; x++){
      analogWrite(taladroena, x);}
       digitalWrite(dostaladroin1,HIGH );
     digitalWrite(dostaladroin2, LOW); 
      for (int x = 0 ; x  < 150; x++){
      analogWrite(dostaladroena, x);}
      Serial.println("Maximun drill");

}

void taladrooff (){

 digitalWrite(taladroin1, LOW);
     digitalWrite(taladroin2, LOW); 
       digitalWrite(dostaladroin1,LOW );
     digitalWrite(dostaladroin2, LOW); 
      Serial.println("off drill");

}
void  adelante (){
  
      digitalWrite(ladoderechoin1, HIGH);
      digitalWrite(ladoderechoin2, LOW);
      analogWrite(ladoderchaena, 155);
      digitalWrite(ladoizquerdain2, HIGH);
      digitalWrite(ladoizquerdain1, LOW);
      analogWrite(ladoizquierdaena,155);
      Serial.println("adelante");
  
 }
 void Adelante (){
  
      digitalWrite(ladoderechoin1, HIGH);
      digitalWrite(ladoderechoin2, LOW);
      analogWrite(ladoderchaena, 255);
      digitalWrite(ladoizquerdain2, HIGH);
      digitalWrite(ladoizquerdain1, LOW);
      analogWrite(ladoizquierdaena,255);
      Serial.println("adelante");
  
 }
void  aatraz (){
  
      digitalWrite(ladoderechoin1, LOW);
      digitalWrite(ladoderechoin2, HIGH);
      analogWrite(ladoderchaena, 255);
      digitalWrite(ladoizquerdain2, LOW);
      digitalWrite(ladoizquerdain1, HIGH);
      analogWrite(ladoizquierdaena,255);
      Serial.println("atraz");
      
  
  }
void  STOP (){
  
      digitalWrite(ladoderechoin1, LOW);
      digitalWrite(ladoderechoin2, LOW);
      analogWrite(ladoderchaena, 255);
      digitalWrite(ladoizquerdain2, LOW);
      digitalWrite(ladoizquerdain1, LOW);
      analogWrite(ladoizquierdaena,255);
      Serial.println("stop");
  
 }
void  izquierda90 (){
  
      digitalWrite(ladoderechoin1, LOW);
      digitalWrite(ladoderechoin2, LOW);
      analogWrite(ladoderchaena, 255);
      digitalWrite(ladoizquerdain2, HIGH);
      digitalWrite(ladoizquerdain1, LOW);
      analogWrite(ladoizquierdaena,255);
      Serial.println("izquierda");
  
 }
void  izqierdaloca (){
  
      digitalWrite(ladoderechoin1, LOW);
      digitalWrite(ladoderechoin2, HIGH);
      analogWrite(ladoderchaena, 255);
      digitalWrite(ladoizquerdain2, HIGH);
      digitalWrite(ladoizquerdain1, LOW);
      analogWrite(ladoizquierdaena,255);
      Serial.println("izqierdaloca");
  
 }
 void  derecha90 (){
  
      digitalWrite(ladoderechoin1, HIGH);
      digitalWrite(ladoderechoin2, LOW);
      analogWrite(ladoderchaena, 255);
      digitalWrite(ladoizquerdain2, LOW);
      digitalWrite(ladoizquerdain1, LOW);
      analogWrite(ladoizquierdaena,255);
      Serial.println("izquierda");
  
 }
void  derechaloca (){
  
      digitalWrite(ladoderechoin1, HIGH);
      digitalWrite(ladoderechoin2, LOW);
      analogWrite(ladoderchaena, 255);
      digitalWrite(ladoizquerdain2, LOW);
      digitalWrite(ladoizquerdain1, HIGH);
      analogWrite(ladoizquierdaena,255);
      Serial.println("izqierdaloca");
  
 }
