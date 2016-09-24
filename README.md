# Arduino-Temperature-SMS-Alert
## Abstract
<p> This project uses an Arduino connected to an LM35 temperature sensor and a GSM module to send an SMS to the user when the temperature exceeds the set limit.</p>
## Components
<ol>
  <li>Arduino Uno , can buy <a href="http://www.amazon.in/s/ref=nb_sb_noss_2?url=search-alias%3Daps&field-keywords=arduino+uno">here</a>, there are a lot of counterfeits out there , learn more <a href="https://www.arduino.cc/en/Products/Counterfeit">here.</a></li>
  <li>Breadboard , can buy <a href="http://www.amazon.in/s/ref=nb_sb_noss_2?url=search-alias%3Daps&field-keywords=breadboard&rh=i%3Aaps%2Ck%3Abreadboard">here</a></li>
  <li>LM35 Temperature Sensor , can buy <a href="http://www.amazon.in/Robo-India-Temperature-Sensor-LM35/dp/B00WO5AFPE/ref=sr_1_1?ie=UTF8&qid=1474726733&sr=8-1&keywords=lm35">here</a></li>
  <li>Connecting wires , can buy <a href="http://www.amazon.in/RoboCraze-com-40pin-Dupont-Jumper-Wire/dp/B00WXE49TO/ref=sr_1_1?s=computers&ie=UTF8&qid=1474726756&sr=1-1&keywords=male+to+male+jumper">here</a></li>
  <li>GSM Module [SIMCOM SIM900A] , with an external antenna attached to it , can buy <a href="http://www.amazon.in/900A-MODEM-MODULE-ANTENNA-QUALITY/dp/B01BT54Y5G/ref=sr_1_1?s=computers&ie=UTF8&qid=1474726771&sr=1-1&keywords=SIM900A">here</a></li>
  <li>Power source for the Arduino Uno , can buy <a href="http://www.amazon.in/techBerri-12V-1-5Amp-Adapter-Camera/dp/B011IMQD8Q/ref=sr_1_6?s=computers&ie=UTF8&qid=1474726869&sr=1-6&keywords=12v+adapter">here</a></li>
  <li>Power Source for the GSM Module , can buy <a href="http://www.amazon.in/techBerri-12V-1-5Amp-Adapter-Camera/dp/B011IMQD8Q/ref=sr_1_6?s=computers&ie=UTF8&qid=1474726869&sr=1-6&keywords=12v+adapter">here</a></li>
</ol>

## Requirements
<ul>
  <li> SIM Card which can send SMS </li>
  <li> Mobile phone to recieve the SMS </li>
</ul>

## Circuit Diagram
Connect the devices as per the circuit diagram
<img src = "https://github.com/KaushikNeelichetty/Arduino-Temperature-SMS-Alert/raw/master/Tempeature%20Alerting%20SMS%20_bb.jpg">
<br>
Download Fritzing from <a href="http://fritzing.org/download/">here</a> and download the <a href="https://github.com/KaushikNeelichetty/Arduino-Temperature-SMS-Alert/raw/master/Tempeature%20Alerting%20SMS%20.fzz"> Fritzing project </a> if you need a better understanding of the connection.
<ul>
  <li> With the LM35 flat surface facing you, connect the left most pin to the 3.3V of the Uno, the right most pin to the ground of the Uno and the middle pin to the A1 pin of the Uno </li>
  <li> Connect the TX pin of the GSM Module to digital pin 9 in the Uno , Connect the RX pin of the GSM module to digital pin of the Uno, and the ground pin of GSM Modules TTL to the ground pin of the Uno </li>
</ul>

## Procedure

<ol>
  <li> Connect the devices as mentioned above.</li>
  <li> Insert the SIM card into the SIM card slot of the GSM module</li>
  <li> Screw in the external antenna to the GSM Module</li>
  <li> Connect the power jack of the GSM module to the wall adapter [12 V].</li>
  <li> Wait for the network LED in the GSM module to blink once in three times, this means that the module has established a connection with thr network to which the SIM belongs to.</li>
  <li> Call the SIM Card inserted into the GSM module , and as long as you dont hear the message that the number is out of reach or not reachable, then you are all set when it comes to the GSM module.</li>
  <li> In the <a href="https://github.com/KaushikNeelichetty/Arduino-Temperature-SMS-Alert/blob/master/tempSMS.ino">tempSMS.ino</a> file change the limit value in line 2.</li>
  <li> In the  <a href="https://github.com/KaushikNeelichetty/Arduino-Temperature-SMS-Alert/blob/master/tempSMS.ino">tempSMS.ino</a> file replace the x with the mobile number to which you need to send the sms to in line 32.</li>
  <li> Save a copy of the edited tempSMS.ino file and upload it to the Uno board. For more info, refer to <a href="https://drive.google.com/file/d/0B4ojjO5sVzx8Mk5iT2NQcFE4U0k/view"> this document. </a> </li>
  <li> Connect the Arduino Uno to a power source and you will get the message from the GSM module once the temperature crosses the limit you set. </li>
  <li> The sketch is written in a way that it stops when the SMS is sent. Reset the arduino using the reset physical button in the board once you recieve the SMS.</li>
</ol>

## Snapshots 
<b>Serial Monitor Screenshot</b><br>
To enter the serial monitor, open the Arduino IDE on your PC with the Uno plugged into it, select the port to which the Uno is connected and click on the magnifying glass icon on the right top of the IDE, once the serial monitor opens, set the baud rate as per the sketch [here 19200].<br>
<img src="https://github.com/KaushikNeelichetty/Arduino-Temperature-SMS-Alert/raw/master/Capture.PNG">
<br>
<b>Screenshot of the SMS recieved</b><br>
This is the screenshot of the SMS recieved upon temperature exceeding the limit set.<br>
<img src="https://github.com/KaushikNeelichetty/Arduino-Temperature-SMS-Alert/raw/master/Screenshot_20160924-193910.png" height="480" width="270"/>

<br>
