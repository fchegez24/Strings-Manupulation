

/////////////////////////////////////////////////////////////////////
//This example is meant for checking if a string is numeric or not///
//numeric.By fredrick chege nyamu.For Improvements question email ///
//at fchegez24@gmail.com------------------------------------------///
//improve the library to be better
/////////////////////////////////////////////////////////////////////
#include <ExString.h>
ExString exstring(0,0,0,0,0," ");
String xxx="1234567";
boolean con=false;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
 con=exstring.isValidNumber(xxx);
 if (con==true)
 {
   Serial.println("Numeric  ");
 }
 else
 {
   Serial.println("Non Numeric ");
 }
}
