#include <TFT_eSPI.h> // Hardware-specific library
#include <SPI.h>

TFT_eSPI tft = TFT_eSPI();       // Invoke custom library

void setup(void) {
  tft.init();

  tft.setRotation(1);

}
void loop() {

  tft.fillScreen(TFT_WHITE);

  int x = tft.width()/2;
  int y = tft.height()/2;
  int w = 40;
  int h = 50;

  uint16_t color[] = {TFT_ORANGE, TFT_BLUE, 0x0d2b, TFT_RED};
  int i = random(0,4);

  tft.fillEllipse(x, y, w, h, color[i]);
  tft.fillEllipse(x+15, y, w, h-5, color[i]);
  tft.fillEllipse(x-15, y, w, h-5, color[i]);
  tft.drawEllipse(x, y, w, h, TFT_BLACK);
  tft.fillCircle(x, y, 8, TFT_BLACK);
  tft.fillCircle(x, y+20, 6, TFT_BLACK);
  tft.fillCircle(x, y-20, 6, TFT_BLACK);
  tft.fillCircle(x, y-34, 4, TFT_BLACK);
  tft.fillCircle(x, y+34, 4, TFT_BLACK);
  tft.fillRoundRect(x-20,y-50, 40, 10, 2, TFT_BLACK);
  tft.fillRoundRect(x-5,y-55, 10, 10, 2, TFT_BLACK);

   delay(3000);
  
}



