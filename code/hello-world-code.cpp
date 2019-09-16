//c++ code to display "hello world"

#include<iostream>
using namespace std;

int main()
{
string input;
//Enter user input
cout << "Enter your input as YES if you want Hello world to be displayed: ";
cin >> input;
//print hello world if input is YES

if(input == YES)
{
cout <<"Hello World";
}
else if (input == NO)
{
cout << "Enter YES as input for Hello World to be displayed"
}
return 0;
}