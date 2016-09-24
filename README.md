# Arduino-Temperaure-Based-SMS
## Abstract
<p> This project uses an Arduino connected to an LM35 temperature sensor and a GSM module to send an SMS to the user when the temperature exceeds the set limit.</p>
## Components
<ol>
  <li>Arduino Uno</li>
  <li>Breadboard</li>
  <li>LM35 Temperature Sensor</li>
  <li>Connecting wires</li>
  <li>GSM Module [SIMCOM SIM900A] , with an external antenna attached to it.</li>
  <li>Power source for the Arduino Uni</li>
  <li>Power Source for the GSM Module</li>
</ol>

## Requirements
<ul>
  <li> SIM Card which can send SMS </li>
  <li> Mobile phone to recieve the SMS </li>
</ul>

## Circuit Diagram
Connect the devices as per the circuit diagram
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
  <li> In the tempSMS.ino file change the limit value in line 2.</li>
  <li> In the tempSMS.ino file replace the x with the mobile number to which you need to send the sms to in line 32.</li>
  <li> Save a copy of the edited tempSMS.ino file and upload it to the Uno board. </li>
  <li> Connect the Arduino Uno to a power source and you will get the message from the GSM module once the temperature crosses the limit you set. </li>
  <li> The sketch is written in a way that it stops when the SMS is sent. Reset the arduino using the reset physical button in the board once you recieve the SMS.</li>
</ol>

## Snapshots 
Coming Soon...