#include "Arduino.h"
#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"

//This code is to use with DS1302 RTC module, it permits you to setup the actual time and date
//And you can visualize them on the serial monitor
//This code is a modified version of the code provided in virtuabotixRTC library
//Refer to Surtrtech Youtube chhannel/Facebook page for more information

#include <virtuabotixRTC.h> //Library used

//Wiring SCLK -> 6, I/O -> 7, CE -> 8
//Or CLK -> 6 , DAT -> 7, Reset -> 8

virtuabotixRTC myRTC(6, 7, 8); //If you change the wiring change the pins here also


 
SoftwareSerial mySoftwareSerial(10, 11); // RX, TX
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

  myDFPlayer.volume(16);  //Set volume value. From 0 to 30
  myDFPlayer.play(1);  //Play the first mp3
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
 myRTC.updateTime();

// Start printing elements as individuals
 Serial.print("Current Date / Time: ");
 Serial.print(myRTC.dayofmonth); //You can switch between day and month if you're using American system
 Serial.print("/");
 Serial.print(myRTC.month);
 Serial.print("/");
 Serial.print(myRTC.year);
 Serial.print(" ");
 Serial.print(myRTC.hours);
 Serial.print(":");
 Serial.print(myRTC.minutes);
 Serial.print(":");
 Serial.println(myRTC.seconds);
delay(1000);
if (myRTC.hours == 8 && myRTC.minutes == 59 && myRTC.seconds == 28) {
    myDFPlayer.play(16);} else
if (myRTC.hours == 8 && myRTC.minutes == 59 && myRTC.seconds == 59) {
    myDFPlayer.play(9);} else
if (myRTC.hours == 9 && myRTC.minutes == 14 && myRTC.seconds == 59) {
    myDFPlayer.play(13);} else
if (myRTC.hours == 9 && myRTC.minutes == 29 && myRTC.seconds == 59) {
    myDFPlayer.play(14);} else
if (myRTC.hours == 9 && myRTC.minutes == 44 && myRTC.seconds == 59) {
    myDFPlayer.play(15);} else

// copy sequence as above for rest of hours //

if (myRTC.hours == 9 && myRTC.minutes == 59 && myRTC.seconds == 26) {
    myDFPlayer.play(10);} else
if (myRTC.hours == 10 && myRTC.minutes == 14 && myRTC.seconds == 59) {
    myDFPlayer.play(13);} else
if (myRTC.hours == 10 && myRTC.minutes == 29 && myRTC.seconds == 59) {
    myDFPlayer.play(14);} else
if (myRTC.hours == 10 && myRTC.minutes == 44 && myRTC.seconds == 59) {
    myDFPlayer.play(15);} else
if (myRTC.hours == 10 && myRTC.minutes == 59 && myRTC.seconds == 22) {
    myDFPlayer.play(11);} else
if (myRTC.hours == 11 && myRTC.minutes == 14 && myRTC.seconds == 59) {
    myDFPlayer.play(13);} else
if (myRTC.hours == 11 && myRTC.minutes == 29 && myRTC.seconds == 59) {
    myDFPlayer.play(14);} else
if (myRTC.hours == 11 && myRTC.minutes == 44 && myRTC.seconds == 59) {
    myDFPlayer.play(15);} else
if (myRTC.hours == 11 && myRTC.minutes == 59 && myRTC.seconds == 22) {
    myDFPlayer.play(12);} else
if (myRTC.hours == 12 && myRTC.minutes == 14 && myRTC.seconds == 59) {
    myDFPlayer.play(13);} else
if (myRTC.hours == 12 && myRTC.minutes == 29 && myRTC.seconds == 59) {
    myDFPlayer.play(14);} else
if (myRTC.hours == 12 && myRTC.minutes == 44 && myRTC.seconds == 59) {
    myDFPlayer.play(15);} else
if (myRTC.hours == 12 && myRTC.minutes == 59 && myRTC.seconds == 22) {
    myDFPlayer.play(1);} else
if (myRTC.hours == 13 && myRTC.minutes == 14 && myRTC.seconds == 59) {
    myDFPlayer.play(13);} else
if (myRTC.hours == 13 && myRTC.minutes == 29 && myRTC.seconds == 59) {
    myDFPlayer.play(14);} else
if (myRTC.hours == 13 && myRTC.minutes == 44 && myRTC.seconds == 59) {
    myDFPlayer.play(15);} else
if (myRTC.hours == 13 && myRTC.minutes == 59 && myRTC.seconds == 22) {
    myDFPlayer.play(2);} else
if (myRTC.hours == 14 && myRTC.minutes == 14 && myRTC.seconds == 59) {
    myDFPlayer.play(13);} else
if (myRTC.hours == 14 && myRTC.minutes == 29 && myRTC.seconds == 59) {
    myDFPlayer.play(14);} else
if (myRTC.hours == 14 && myRTC.minutes == 44 && myRTC.seconds == 59) {
    myDFPlayer.play(15);} else
if (myRTC.hours == 14 && myRTC.minutes == 59 && myRTC.seconds == 22) {
    myDFPlayer.play(3);} else
if (myRTC.hours == 15 && myRTC.minutes == 14 && myRTC.seconds == 59) {
    myDFPlayer.play(13);} else
if (myRTC.hours == 15 && myRTC.minutes == 29 && myRTC.seconds == 59) {
    myDFPlayer.play(14);} else
if (myRTC.hours == 15 && myRTC.minutes == 44 && myRTC.seconds == 59) {
    myDFPlayer.play(15);} else
if (myRTC.hours == 15 && myRTC.minutes == 59 && myRTC.seconds == 22) {
    myDFPlayer.play(4);} else
if (myRTC.hours == 16 && myRTC.minutes == 14 && myRTC.seconds == 59) {
    myDFPlayer.play(13);} else
if (myRTC.hours == 16 && myRTC.minutes == 29 && myRTC.seconds == 59) {
    myDFPlayer.play(14);} else
if (myRTC.hours == 16 && myRTC.minutes == 44 && myRTC.seconds == 59) {
    myDFPlayer.play(15);} else
if (myRTC.hours == 16 && myRTC.minutes == 59 && myRTC.seconds == 22) {
    myDFPlayer.play(5);} else
if (myRTC.hours == 17 && myRTC.minutes == 14 && myRTC.seconds == 59) {
    myDFPlayer.play(13);} else
if (myRTC.hours == 17 && myRTC.minutes == 29 && myRTC.seconds == 59) {
    myDFPlayer.play(14);} else
if (myRTC.hours == 17 && myRTC.minutes == 44 && myRTC.seconds == 59) {
    myDFPlayer.play(15);} else
if (myRTC.hours == 17 && myRTC.minutes == 59 && myRTC.seconds == 22) {
    myDFPlayer.play(6);} else
if (myRTC.hours == 18 && myRTC.minutes == 14 && myRTC.seconds == 59) {
    myDFPlayer.play(13);} else
if (myRTC.hours == 18 && myRTC.minutes == 29 && myRTC.seconds == 59) {
    myDFPlayer.play(14);} else
if (myRTC.hours == 18 && myRTC.minutes == 44 && myRTC.seconds == 59) {
    myDFPlayer.play(15);} else
if (myRTC.hours == 18 && myRTC.minutes == 59 && myRTC.seconds == 22) {
    myDFPlayer.play(7);} else
if (myRTC.hours == 19 && myRTC.minutes == 14 && myRTC.seconds == 59) {
    myDFPlayer.play(13);} else
if (myRTC.hours == 19 && myRTC.minutes == 29 && myRTC.seconds == 59) {
    myDFPlayer.play(14);} else
if (myRTC.hours == 19 && myRTC.minutes == 44 && myRTC.seconds == 59) {
    myDFPlayer.play(15);} else
if (myRTC.hours == 19 && myRTC.minutes == 59 && myRTC.seconds == 22) {
    myDFPlayer.play(8);} else
if (myRTC.hours == 20 && myRTC.minutes == 14 && myRTC.seconds == 59) {
    myDFPlayer.play(13);} else
if (myRTC.hours == 20 && myRTC.minutes == 29 && myRTC.seconds == 59) {
    myDFPlayer.play(14);} else
if (myRTC.hours == 20 && myRTC.minutes == 44 && myRTC.seconds == 59) {
    myDFPlayer.play(15);} else
if (myRTC.hours == 20 && myRTC.minutes == 59 && myRTC.seconds == 22) {
    myDFPlayer.play(9);} else
if (myRTC.hours == 21 && myRTC.minutes == 14 && myRTC.seconds == 59) {
    myDFPlayer.play(13);} else
if (myRTC.hours == 21 && myRTC.minutes == 29 && myRTC.seconds == 59) {
    myDFPlayer.play(14);} else
if (myRTC.hours == 21 && myRTC.minutes == 44 && myRTC.seconds == 59) {
    myDFPlayer.play(15);} else
if (myRTC.hours == 21 && myRTC.minutes == 59 && myRTC.seconds == 22) {
    myDFPlayer.play(10);} else
if (myRTC.hours == 22 && myRTC.minutes == 14 && myRTC.seconds == 59) {
    myDFPlayer.play(13);} else
if (myRTC.hours == 22 && myRTC.minutes == 29 && myRTC.seconds == 59) {
    myDFPlayer.play(14);} else
if (myRTC.hours == 22 && myRTC.minutes == 44 && myRTC.seconds == 59) {
    myDFPlayer.play(15);} else
if (myRTC.hours == 22 && myRTC.minutes == 59 && myRTC.seconds == 22) {
    myDFPlayer.play(11);} 
}
// Delay so the program doesn't print non-stop
// delay(1000);
