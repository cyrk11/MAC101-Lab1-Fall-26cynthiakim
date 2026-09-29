#include <iostream>
#include<string> //needed to use std::string
using namespace std;//so i dont have to type std:: before every cin and cout
int main(){
    string name;//string for text
    double GPA;//double for numbers with decimals
cout<<"What is your name?\n";//\n to go to next line
cin>>name;
cout<<"Hello " <<name<< ", nice to meet you. \n";
cout<<"What is your GPA?\n";
cin>>GPA;
cout<<"Wow " <<name<<", your GPA is "<<GPA<<". You got this! Don't forget to use student resources!";
return 0;
}
