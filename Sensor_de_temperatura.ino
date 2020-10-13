void setup() {
  // put your setup code here, to run once:
pinMode(A1,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
float volt;
int temp;
delay(1000);
volt=analogRead(A1);
Serial.println("La temperatura es:");
//temp=map(4,1023,0,75);
temp=volt/13.58666667;
Serial.print(temp);
Serial.println(" grados centigrados");
}
