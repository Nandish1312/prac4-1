#include "Reverse.h"
#include <iostream>

using namespace std;

 int main()
{

Reverse rev1;
std::cout << "please enter the word." << endl;
string s;
int i;
std::cin >> i>>s;
if(i<0)
{
std::cout<<"ERROR"<<" ";
}
else
{
std::cout<<rev1.reverseDigit(i)<<" ";

std::cout<<rev1.reverseString(s)<<" ";
}
return 0;
}








