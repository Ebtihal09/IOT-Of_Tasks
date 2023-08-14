# Communication between Two Arduino Boards
## connect two Arduino Boards
The RX of one Arduino Uno board is connected with the TX pin of the other Arduino board and similarly the TX pin is connected with the RX pin of the other Arduino board. Tx to Rx and Rx to Tx. Make sure the grounds of both the Arduino boards are connected together.

## Circuit
One of the Arduino boards is the sender, and the other Arduino is the receiver.
The pushbutton is connected to the Arduino board that acts as a transmitter and the LED is connected to the Arduino board that acts as a receiver, where the transmitter will send 1 if the pushbutton is clicked, and the receiver if it reads from the serial monitor 1 number the LED will light up.
![image](https://github.com/Ebtihal09/IOT-Tasks/assets/124944456/ebf35d4a-1ecf-45a0-8ef2-5d7d5158fbbf)
The link on the Tinkercad :https://www.tinkercad.com/things/c7HFPJkKgIF



## References:
* https://www.electroniclinic.com/serial-communication-between-two-arduino-boards/
* https://forum.arduino.cc/t/control-led-at-pin-13-of-arduino-2-through-serial-communication-from-arduino-1/1025194

