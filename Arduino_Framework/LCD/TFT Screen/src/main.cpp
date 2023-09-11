#include "main.h"

Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC);

void setup() {
  tft.begin();

  tft.setCursor(20, 120);
  tft.setTextColor(ILI9341_RED);
  tft.setTextSize(3);
  tft.println("Hello STM32");
}

const uint32_t colors[] = {
  ILI9341_GREEN,
  ILI9341_CYAN,
  ILI9341_MAGENTA,
  ILI9341_YELLOW,
};
uint8_t colorIndex = 0;

void loop() {
  tft.setCursor(24, 164);
  tft.setTextColor(colors[colorIndex++ % 4]);
  tft.setTextSize(2);
  tft.println("I can do SPI :-)");
  delay(250);
}
