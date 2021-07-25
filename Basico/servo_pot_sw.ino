int servo = 9; //pin 9
int potenciometro=A0; //pin A0
long periodo = 20000; //50Hz en microsegundos

void setup() {
  pinMode(servo,OUTPUT);
  digitalWrite(servo,LOW); //definimos señal como 0 
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = map(analogRead(potenciometro),0,1024,0,periodo);
  
  Serial.print("valor: ");
  Serial.println(val);

//Señal de reloj 
  digitalWrite(servo,HIGH); //definimos señal como 1
  delayMicroseconds(val); //mantenemos la señal en 1 por val ms
  digitalWrite(servo,LOW); 
  delayMicroseconds(periodo-val);
  
}
