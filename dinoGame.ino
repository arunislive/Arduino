{
    "version": 1,
    "author": "Ami Sung",
    "editor": "wokwi",
    "parts": [
      { "type": "wokwi-arduino-uno", "id": "uno", "top": 90.93, "left": -190.84, "attrs": {} },
      { "type": "board-ssd1306", "id": "oled1", "top": 121.27, "left": 158.38, "attrs": {} },
      { "type": "wokwi-ky-040", "id": "encoder1", "top": 268.93, "left": 115.97, "attrs": {} },
      {
        "type": "wokwi-buzzer",
        "id": "bz1",
        "top": -45.6,
        "left": 251.4,
        "attrs": { "volume": "0.1" }
      },
      {
        "type": "wokwi-tm1637-7segment",
        "id": "sevseg1",
        "top": -48.04,
        "left": 35.83,
        "attrs": { "color": "red" }
      }
    ],
    "connections": [
      [ "sevseg1:VCC", "uno:5V", "red", [ "h29.56", "v70.22", "h-142.27", "v268.59", "h-125.71" ] ],
      [ "encoder1:VCC", "uno:5V", "red", [ "h21.09", "v71.64", "h-283.92" ] ],
      [ "oled1:VCC", "uno:5V", "red", [ "v-37.85", "h-100.73", "v260", "h-135.52" ] ],
      [ "sevseg1:GND", "uno:GND.1", "black", [ "h-1.1", "v38.55", "h-286.37" ] ],
      [ "bz1:1", "uno:GND.1", "black", [ "v16.61", "h-356.06" ] ],
      [ "oled1:GND", "uno:GND.3", "black", [ "v-22.52", "h-102.93", "v205.43", "h-95.66" ] ],
      [ "encoder1:GND", "uno:GND.2", "black", [ "h14.96", "v51.4", "h-263.68" ] ],
      [ "encoder1:SW", "uno:3", "gray", [ "h14.47", "v-73.42", "h-102.32", "v-157.92", "h-97.87" ] ],
      [ "encoder1:DT", "uno:4", "gold", [ "h5.58", "v-54.93", "h-100.09", "v-148.29", "h-110.47" ] ],
      [ "encoder1:CLK", "uno:2", "orange", [ "h-1.1", "v-35.79", "h-103.06", "v-143.84" ] ],
      [ "bz1:2", "uno:10", "purple", [ "v15.53", "h50.01", "v-147.54", "h-370.71" ] ],
      [ "sevseg1:DIO", "uno:5", "green", [ "h28.05", "v-57.18", "h-218.72" ] ],
      [ "sevseg1:CLK", "uno:6", "green", [ "h18.41", "v-56.48", "h-224.65" ] ],
      [ "oled1:SCL", "uno:A5", "blue", [ "v-34.37", "h57.64", "v303.38", "h-198.32" ] ],
      [ "oled1:SDA", "uno:A4", "green", [ "v-23.17", "h61.03", "v300.18", "h-229.18" ] ]
    ],
    "dependencies": {}
  }