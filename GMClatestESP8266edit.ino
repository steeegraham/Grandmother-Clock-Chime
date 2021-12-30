#include "Arduino.h"
#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"

//This code is to use with DS1302 RTC module, it permits you to setup the actual time and date-not any more!
//And you can visualize them on the serial monitor
//This code is a modified version of the code provided in virtuabotixRTC library
//Refer to Surtrtech Youtube chhannel/Facebook page for more information

//#include <virtuabotixRTC.h> //Library used

//Wiring SCLK -> 6, I/O -> 7, CE -> 8
//Or CLK -> 6 , DAT -> 7, Reset -> 8

//virtuabotixRTC myRTC(6, 7, 8); //If you change the wiring change the pins here also

//--This section is NTPtimeESP8266 for time--before void setup--START
#include <NTPClient.h>
#include <ESP8266WiFi.h>
#include <WiFiUdp.h>
const char *ssid     = "DrayTek-LAN-A";
const char *password = "Georgina99";
const long utcOffsetInSeconds = 0;
char daysOfTheWeek[7][12] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
  // Define NTP Client to get time
WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, "pool.ntp.org", utcOffsetInSeconds);
//--This section is NTPtimeESP8266 for time--before void setup--END

 
SoftwareSerial mySoftwareSerial(12, 13); // RX, TX
DFRobotDFPlayerMini myDFPlayer;
void printDetail(uint8_t type, int value);

void setup()
{
  mySoftwareSerial.begin(9600);
  Serial.begin(9600);

  Serial.println();
  Serial.println(F("DFRobot DFPlayer Mini Demo"));
  Serial.println(F("Initializing DFPlayer ... (May take 3~5 seconds)"));

  if (!myDFPlayer.begin(mySoftwareSerial)) {  //Use softwareSerial to communicate with mp3.
    Serial.println(F("Unable to begin:"));
    Serial.println(F("1.Please recheck the connection!"));
    Serial.println(F("2.Please insert the SD card!"));
    while(true);
  }
  Serial.println(F("DFPlayer Mini online."));

  myDFPlayer.volume(10);  //Set volume value. From 0 to 30
  myDFPlayer.play(1);  //Play the first mp3

//--This section is NTPtimeESP8266 for time connects to wifi and begins timeClient--in void setup--START
  WiFi.begin(ssid, password);

  while ( WiFi.status() != WL_CONNECTED ) {
    delay ( 500 );
    Serial.print ( "." );
  }

  timeClient.begin();
//--This section is NTPtimeESP8266 for time-- void setup--END

}
// {
// Serial.begin(9600);

// Set the current date, and time in the following format:
 // seconds, minutes, hours, day of the week, day of the month, month, year
// myRTC.setDS1302Time(00, 48, 02, 1, 16, 11, 2020); //Here you write your actual time/date as shown above 
 //but remember to "comment/remove" this function once you're done
 //The setup is done only one time and the module will continue counting it automatically
//}

void loop() {
 // This allows for the update of variables for time or accessing the individual elements.
 //myRTC.updateTime();
timeClient.update();
// Start printing elements as individuals
  Serial.print(daysOfTheWeek[timeClient.getDay()]);
  Serial.print(", ");
  Serial.print(timeClient.getHours());
  Serial.print(":");
  Serial.print(timeClient.getMinutes());
  Serial.print(":");
  Serial.println(timeClient.getSeconds());
  //Serial.println(timeClient.getFormattedTime());
delay(1000);
if (timeClient.getHours() == 8 && timeClient.getMinutes() == 59 && timeClient.getSeconds() == 30) {
    myDFPlayer.play(9);} else
if (timeClient.getHours() == 9 && timeClient.getMinutes() == 14 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(13);} else
if (timeClient.getHours() == 9 && timeClient.getMinutes() == 29 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(14);} else
if (timeClient.getHours() == 9 && timeClient.getMinutes() == 44 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(15);} else
if (timeClient.getHours() == 9 && timeClient.getMinutes() == 59 && timeClient.getSeconds() == 26) {
    myDFPlayer.play(10);} else
if (timeClient.getHours() == 10 && timeClient.getMinutes() == 14 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(13);} else
if (timeClient.getHours() == 10 && timeClient.getMinutes() == 29 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(14);} else
if (timeClient.getHours() == 10 && timeClient.getMinutes() == 44 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(15);} else
if (timeClient.getHours() == 10 && timeClient.getMinutes() == 59 && timeClient.getSeconds() == 22) {
    myDFPlayer.play(11);} else
if (timeClient.getHours() == 11 && timeClient.getMinutes() == 14 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(13);} else
if (timeClient.getHours() == 11 && timeClient.getMinutes() == 29 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(14);} else
if (timeClient.getHours() == 11 && timeClient.getMinutes() == 44 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(15);} else
if (timeClient.getHours() == 11 && timeClient.getMinutes() == 59 && timeClient.getSeconds() == 22) {
    myDFPlayer.play(12);} else
if (timeClient.getHours() == 12 && timeClient.getMinutes() == 14 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(13);} else
if (timeClient.getHours() == 12 && timeClient.getMinutes() == 29 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(14);} else
if (timeClient.getHours() == 12 && timeClient.getMinutes() == 44 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(15);} else
if (timeClient.getHours() == 12 && timeClient.getMinutes() == 59 && timeClient.getSeconds() == 22) {
    myDFPlayer.play(1);} else
if (timeClient.getHours() == 13 && timeClient.getMinutes() == 14 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(13);} else
if (timeClient.getHours() == 13 && timeClient.getMinutes() == 29 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(14);} else
if (timeClient.getHours() == 13 && timeClient.getMinutes() == 44 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(15);} else
if (timeClient.getHours() == 13 && timeClient.getMinutes() == 59 && timeClient.getSeconds() == 22) {
    myDFPlayer.play(2);} else
if (timeClient.getHours() == 14 && timeClient.getMinutes() == 14 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(13);} else
if (timeClient.getHours() == 14 && timeClient.getMinutes() == 29 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(14);} else
if (timeClient.getHours() == 14 && timeClient.getMinutes() == 44 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(15);} else
if (timeClient.getHours() == 14 && timeClient.getMinutes() == 59 && timeClient.getSeconds() == 22) {
    myDFPlayer.play(3);} else
if (timeClient.getHours() == 15 && timeClient.getMinutes() == 14 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(13);} else
if (timeClient.getHours() == 15 && timeClient.getMinutes() == 29 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(14);} else
if (timeClient.getHours() == 15 && timeClient.getMinutes() == 44 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(15);} else
if (timeClient.getHours() == 15 && timeClient.getMinutes() == 59 && timeClient.getSeconds() == 22) {
    myDFPlayer.play(4);} else
if (timeClient.getHours() == 16 && timeClient.getMinutes() == 14 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(13);} else
if (timeClient.getHours() == 16 && timeClient.getMinutes() == 29 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(14);} else
if (timeClient.getHours() == 16 && timeClient.getMinutes() == 44 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(15);} else
if (timeClient.getHours() == 16 && timeClient.getMinutes() == 59 && timeClient.getSeconds() == 22) {
    myDFPlayer.play(5);} else
if (timeClient.getHours() == 17 && timeClient.getMinutes() == 14 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(13);} else
if (timeClient.getHours() == 17 && timeClient.getMinutes() == 29 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(14);} else
if (timeClient.getHours() == 17 && timeClient.getMinutes() == 44 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(15);} else
if (timeClient.getHours() == 17 && timeClient.getMinutes() == 59 && timeClient.getSeconds() == 22) {
    myDFPlayer.play(6);} else
if (timeClient.getHours() == 18 && timeClient.getMinutes() == 14 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(13);} else
if (timeClient.getHours() == 18 && timeClient.getMinutes() == 29 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(14);} else
if (timeClient.getHours() == 18 && timeClient.getMinutes() == 44 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(15);} else
if (timeClient.getHours() == 18 && timeClient.getMinutes() == 59 && timeClient.getSeconds() == 22) {
    myDFPlayer.play(7);} else
if (timeClient.getHours() == 19 && timeClient.getMinutes() == 14 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(13);} else
if (timeClient.getHours() == 19 && timeClient.getMinutes() == 29 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(14);} else
if (timeClient.getHours() == 19 && timeClient.getMinutes() == 44 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(15);} else
if (timeClient.getHours() == 19 && timeClient.getMinutes() == 59 && timeClient.getSeconds() == 22) {
    myDFPlayer.play(8);} else
if (timeClient.getHours() == 20 && timeClient.getMinutes() == 14 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(13);} else
if (timeClient.getHours() == 20 && timeClient.getMinutes() == 29 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(14);} else
if (timeClient.getHours() == 20 && timeClient.getMinutes() == 44 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(15);} else
if (timeClient.getHours() == 20 && timeClient.getMinutes() == 59 && timeClient.getSeconds() == 22) {
    myDFPlayer.play(9);} else
if (timeClient.getHours() == 21 && timeClient.getMinutes() == 14 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(13);} else
if (timeClient.getHours() == 21 && timeClient.getMinutes() == 29 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(14);} else
if (timeClient.getHours() == 21 && timeClient.getMinutes() == 44 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(15);} else
if (timeClient.getHours() == 21 && timeClient.getMinutes() == 59 && timeClient.getSeconds() == 22) {
    myDFPlayer.play(10);} else
if (timeClient.getHours() == 22 && timeClient.getMinutes() == 14 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(13);} else
if (timeClient.getHours() == 22 && timeClient.getMinutes() == 29 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(14);} else
if (timeClient.getHours() == 22 && timeClient.getMinutes() == 44 && timeClient.getSeconds() == 59) {
    myDFPlayer.play(15);} else
if (timeClient.getHours() == 22 && timeClient.getMinutes() == 59 && timeClient.getSeconds() == 22) {
    myDFPlayer.play(11);} 
}
// Delay so the program doesn't print non-stop
// delay(1000);
