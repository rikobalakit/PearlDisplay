//
// Created by rico on 5/26/2024.
//
#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>
#include "Adafruit_SSD1306.h"
#include "Adafruit_GFX.h"

#define DISPLAY_ENABLED false

class PearlDisplay
{
public:

    Adafruit_SSD1306 Display;
    String _line0, _line1, _line2, _line3, _line4, _line5;

    bool _displayEnabledAndFound = false;
    bool _debugEnabled = false;

    void InitializeDisplay();

    void DisplayText(float timeSeconds, String line0 = "", String line1 = "", String line2 = "", String line3 = "",
                     String line4 = "", String line5 = "");

};

