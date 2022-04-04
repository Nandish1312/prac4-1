#include "Reverse.h"
#include <iostream>

Reverse::Reverse()
{}
string Reverse::reverseString(string letters)
{
 size_t number_characters = letters.size();

if(number_characters == 1)
{
return letters;
}
else
{
 return letters[number_characters- 1]+reverseString(letters.substr(0, number_characters- 1));
}
}



int Reverse::reverseDigit(int value)
{
if(value<10) 
{
return value;
}
int number=0;
for (int a=value; a; a/=10) number++;
{
return value%10*(int)pow(10, len-1) + reverseDigit(value/10);
}
}