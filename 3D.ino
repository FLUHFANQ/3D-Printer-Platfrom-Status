#include <M5Core2.h>
#define pin1 27

int A;
void setup()
{
  M5.begin();
  Serial.begin(9600);
  pinMode(pin1, INPUT_PULLUP);
  
}

void Show(String val)
{ 
  M5.Lcd.clear();

  M5.Lcd.drawRect(0,0,360,80, WHITE);
  M5.Lcd.fillRect(0,0,360,80, WHITE); 
  M5.Lcd.setTextSize(3);
  M5.Lcd.setCursor(100,40);
  M5.Lcd.setTextColor(BLACK);  
  M5.Lcd.print("Zortax 1  ");
  
  M5.Lcd.drawRect(0,80,360,80, RED);
  M5.Lcd.fillRect(0,80,360,80, RED);
  M5.Lcd.setTextSize(4); 
  M5.Lcd.setCursor(115,105);
  M5.Lcd.setTextColor(WHITE);  
  M5.Lcd.println(val); 

  M5.Lcd.drawRect(0,160,360,80,WHITE);
  M5.Lcd.fillRect(0,160,360,80,WHITE); 
}

void loop() {
  A = digitalRead(pin1);
  Serial.println(A); 
  
if( A ==1 ){  
  Show("Done");  
    }
else{
  Show("ERROR");
}
  delay(2000);

}
