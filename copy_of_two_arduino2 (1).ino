// Code cho Arduino 2 - nhận tín hiệu từ phím bấm
void setup() {
pinMode(2,INPUT_PULLUP);
Serial.begin(9600);
}

void loop() {
  int a=digitalRead(2);
  Serial.print(a);
}