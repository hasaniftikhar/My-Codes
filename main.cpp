#include<iostream>
using namespace std;

int main()
{

    cout<<"ALAPHABET, VOWEL, SPL. CHARACTER CHECKER"<<endl;
    cout<<"Enter the value: ";
    char ch;
    cin>>ch;
    if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
    {
        cout<<"The entered value is alphabet";
    }

    else if(ch>=48 && ch<=57)
    {
        cout<<"The entered value is a number";
    }

    else
    {
        cout<<"The entered value is a special character";
    }

    return 0;
}
