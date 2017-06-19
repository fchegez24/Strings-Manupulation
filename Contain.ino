///////////////////////////////////////////////////////////////////////
//This example is meant for checking if a string consist a piece of////
//strin.By fredrick chege nyamu.For Improvements question email    ////
//at fchegez24@gmail.com------------------------------------------/////
//improve the library to be better returns true if it has         ////
//////////////////////////////////////////////////////////////////////


#include <ExString.h>
ExString exstring(0,0,0,0,0," ");
String xxx="abcdefghijkl";
String xx="ghi";
boolean con=false;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
 con=exstring.Contains(xxx,xx);
 if (con==true)
 {
   Serial.println("found ");
    }
}
