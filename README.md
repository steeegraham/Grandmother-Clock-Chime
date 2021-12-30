# Grandmother-Clock-Chime
Grandmother Clock Chime with DS1302 RTC + Arduino Uno 

## RTC connections



![ArduinoUnoRTC](https://i0.wp.com/surtrtech.com/wp-content/uploads/2018/01/4f79e-1.png?resize=640%2C454&ssl=1)


## DFplayer connections



![DFplayer](https://raw.githubusercontent.com/DFRobot/DFRobotMediaWikiImage/master/Image/playerMini.png)



## Set RTC module with current date and time


After connection, edit the DS1302_settime.ino with the current time and quickly upload it.

Then explore the other sketches to make stuff work with 'current time' as set by previous.


## How to use latest sketch for best updates!


After connections (standalone WIP); ensure you have set the correct date/time using the DS1302_settime.ino sketch upload.

Copy your chosen mp3 files to the \mp3\ folder of the SD card (see \mp3_3files\ for description of the hourly then quarter of an hour sound files.

Download and open then upload the GMClatest.ino.

Watch the Serial monitor on 9600 and appropriate COM port.

Listen for Chimes!


## ESP8266 GMClatestESP8266edit.ino

![ESP8266](https://github.com/steeegraham/Grandmother-Clock-Chime/blob/main/NodeMCU-ESP8266-Pinout-DFPlayermini.jpg)

![DFplayer](https://dfimg.dfrobot.com/nobody/wiki/77048a25b85b6e29438244020e7237e1.png)

To the DFPlayer...

 Connect Red to VCC 

 Connect Black to GND

 Connect Yellow to RX with a 1K resistor in series

 Connect Green to TX

 Connect up your Speakers to SPK_1 & SPK_2

Flash GMClatestESP8266edit.ino using Generic ESP8266 board in Arduino IDE to ESP8266 connected via COM port with USB

View output on Console Monitor using Baud 9600 to see if it connects ok to DFPlayer and WIFI.  If working will show Day and time.


## Version History

 V1 - straight download from source, no integration


 V2 - DFPlayer and RTC DS1302 integration - Serial display of time and DF player demo playing spcified tracks begining at the second


 V3 - example of deployment to requirements - play hourly unique and 1/4, 1/2 and 3/4 hourly play
 
 
 V4 - ESP8266 (NodeMCU v3) written for NTP instead of RTC for better accuracy - Use GMClatestESP8266edit.ino (could do with tidying up!)




## Sources
https://surtrtech.com/2018/01/27/how-to-simply-use-ds1302-rtc-module-with-arduino-board-and-lcd-screen/
https://wiki.dfrobot.com/DFPlayer_Mini_SKU_DFR0299
