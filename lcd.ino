#include <LiquidCrystal.h>
const int rs = 11, en = 10, d4 = 8, d5 = 6, d6 = 5, d7 = 4;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print(" FAS1-FAS2-FAS3");
  lcd.setCursor(15,1);
  lcd.print("V");
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  //lcd.print(millis() / 1000);
  lcd.print("220.5");
  lcd.setCursor(5,1);
  lcd.print("222.5");
  lcd.setCursor(10,1);
  lcd.print("223.5");  
}
