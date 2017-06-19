
/*
  ExString.cpp - Library for strings Manupulation with less complexity.
  Created by fredrick C. Nyamu, June 17, 2017.
  Released into the public domain.
  //ExString::ExString(int Index1,int prev,int Index2,int x,int W,String mystring)
  ExString::ExString(int Index1,int prev,int Index2,int x,int W,String mystring)
   ExString::ExString(int Index1,int prev,int Index2,int x,int W,String mystring)
   {
  _Index1=0;
  _prev=0;
  _Index2=0;
  _x=0;
   _W=0;
 _mystring="";
}
*/

#include "Arduino.h"
#include "ExString.h"


ExString::ExString(void){
}



boolean ExString::Contains(String Mystring2,String String_cheked)
{
	int xx=Mystring2.length();
  for(int W=0;W<xx;W++)
  {
    if (Mystring2.startsWith(String_cheked, W))
    {
     return true;
    }
  }
  return false;
}
String ExString::spliter3(String rowstring,int thisindex,char delimiter) 
{
	int _Index1=0;
int _prev=0;
int _Index2=0;
for (int _x=0;_x<24;_x++)
  {
    _Index1 = rowstring.indexOf(delimiter,_prev);
    String secondValue = rowstring.substring(_prev, _Index1);
    _prev=_Index1+1;
    if(_x==thisindex)
    {
      _Index1=0;
      _prev=0;
      _Index2=0;
      return secondValue;
    }
  }
}
boolean ExString::isValidNumber(String readingvalue)
{
  boolean isNum=false;
  for(byte i=0;i<readingvalue.length();i++)
  {
    isNum = isDigit(readingvalue.charAt(i)) || readingvalue.charAt(i) == '+' || readingvalue.charAt(i) == '.' || readingvalue.charAt(i) == '-';
    if(!isNum) return false;
  }
  return isNum;
}


