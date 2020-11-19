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



## Version History

 V1 - straight download from source, no integration


 v2 - DFPlayer and RTC DS1302 integration - Serial display of time and DF player demo playing spcified tracks begining at the second


 v3 - example of deployment to requirements - play hourly unique and 1/4, 1/2 and 3/4 hourly play




## Sources
https://surtrtech.com/2018/01/27/how-to-simply-use-ds1302-rtc-module-with-arduino-board-and-lcd-screen/
https://wiki.dfrobot.com/DFPlayer_Mini_SKU_DFR0299
