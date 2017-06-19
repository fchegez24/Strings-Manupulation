/////////////////////////////////////////////////////////////////////
//This example is meant for splitting a string at a specific  char///
//.By fredrick chege nyamu.For Improvements question email        ///
//at fchegez24@gmail.com------------------------------------------///
//improve the library to be better                                ///
/////////////////////////////////////////////////////////////////////

#include <ExString.h>
ExString exstring(0,0,0,0,0," "); //constructor initialization
String xxx="123,1234,12345"; //string to delimit
char xx=','; //charater to use in delimiting
int i =1;  // index to pick
String  con="";
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  con=exstring.spliter3(xxx,6,xx) ;
  Serial.println(con);
   
}
