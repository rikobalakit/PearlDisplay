//
// Created by rico on 5/26/2024.
//

#include "PearlDisplay.h"

void PearlDisplay::InitializeDisplay()
{
    if (!Display.begin(SSD1306_SWITCHCAPVCC, 0x3C))
    {
        _displayEnabledAndFound = false;
    }
    else
    {
        DisplayText(1, "DCv2 Prototype");
        _displayEnabledAndFound = true;

        _line0 = "";
        _line1 = "";
        _line2 = "";
        _line3 = "";
        _line4 = "";
        _line5 = "";
    }
}

void PearlDisplay::DisplayText(float timeSeconds, String line0, String line1, String line2, String line3, String line4,
                 String line5)
{
    if (!_displayEnabledAndFound)
    {
        return;
    }

    Display.clearDisplay();
    Display.setTextSize(1);
    Display.setTextColor(WHITE);

    Display.setCursor(0, 0);
    Display.println(line0);

    Display.setCursor(0, 10);
    Display.println(line1);

    Display.setCursor(0, 20);
    Display.println(line2);

    Display.setCursor(0, 30);
    Display.println(line3);

    Display.setCursor(0, 40);
    Display.println(line4);

    Display.setCursor(0, 50);
    Display.println(line5);


    Display.display();

    if (_debugEnabled)
    {
        delay(1000 * timeSeconds);
    }
    else
    {
        delay(100 * timeSeconds);
    }
}