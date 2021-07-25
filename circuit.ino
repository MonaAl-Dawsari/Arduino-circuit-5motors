// Include servo libirary
#include <Servo.h> 

// set initial pisition
int pos = 90; 

// define 5 var for each servo
Servo srv1; 
Servo srv2;
Servo srv3;
Servo srv4;
Servo srv5;

void setup()
{
  srv1.attach(2, 500, 2500);
  srv2.attach(3, 500, 2500);
  srv3.attach(4, 500, 2500);
  srv4.attach(5, 500, 2500);
  srv5.attach(6, 500, 2500);
}

void loop()
{
  
    
    srv1.write(pos);
    srv2.write(pos);
    srv3.write(pos);
    srv4.write(pos);
    srv5.write(pos);
      
    delay(15);      

  
}