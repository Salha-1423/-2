// Code cho Arduino 1 - Lật trạng thái đèn sau mỗi lần Arduino 2 nhấn phím
char t0='1',t;
byte LED = 8;
bool s=0;
 
void setup() 
{
   pinMode(LED, OUTPUT);
   Serial.begin(9600);
   Serial.println("Nhan Button de lat trang thai den");
}
 

void loop()
{
   if(Serial.available())
   {
      char t = Serial.read();
      if (t0=='1'&&t=='0') 
      { 
        s=!s;
        digitalWrite(LED, s);        
      }
      t0=t;
}
}
