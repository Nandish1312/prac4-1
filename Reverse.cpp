
#include "Reverse.h"
#include <iostream>

Reverse::Reverse()
{}
string Reverse::reverseString(string letters)
{
 size_t all_numbers= letters.size();

if(all_numbers== 1)
{
return letters;
}
else
{
 return letters[all_numbers- 1]+reverseString(letters.substr(0, all_numbers- 1));
}
}



int Reverse::reverseDigit(int value)
{
if(value<10) 
{
return value;
}
int lamba=0;
for (int ab=lamba; ab; ab/=10) lamba++;
{
return value%10*(int)pow(10, lamba-1) + reverseDigit(value/10);
}
}
