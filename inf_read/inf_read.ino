
int inf = A0;
int value = 0;
void setup() {                
  pinMode(inf, INPUT);
  Serial.begin(9600);  
}

void loop() {
   value=analogRead(inf);
   if(value!=1023 && value!=1 && value != 0){
     Serial.println(value);
     for(int i=0;i<value;i+=10){
       Serial.print("#");
     }
     Serial.println();
   }
}
