/*
  ExString.h - Library for writing strings to external eeprom with less complexity.
  Created by fredrick C. Nyamu, June 17, 2017.
  Released into the public domain.
   ExString(int Index1, int prev,int Index2, int x,int W,String mystring);
   
   private:
    int _Index1;
   int _prev;
   int _Index2;
   int _x;
   int _W;
   String _mystring;
*/
#ifndef ExString_h
#define ExString_h

#include "Arduino.h"

 //ExString(int Index1,int prev,int Index2,int x,int W,String mystring);
class ExString
{
  public:
    ExString();
    String split(int thisindex);
    void spliter(int thisindex) ;
    boolean Contains(String Mystring2,String String_cheked);
    String spliter3(String rowstring,int thisindex,char delimiter) ;
    boolean isValidNumber(String readingvalue);
    
    };

#endif
