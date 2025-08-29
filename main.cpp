#include <iostream>
#include "main.hpp"

using namespace std;

en_main_sts main_sts;

int main()
{

    cout<<"CPP BANK"<<endl;

    cout<<"Enter your opinion :\n ENTER -> Press 0\n EXIT  -> Press 1 "<<endl;

    cin>>a;

    cout<<"YOUR CHOICE IS :"<<a<<endl;

    switch(a)
    {
        case MAIN_ENTER:
            cout<<"WELCOME TO BANK"<<endl;
            break;

        case MAIN_EXIT:
            cout<<"THANK YOU! COME AGAIN"<<endl;
            break;

        default:
            break;
    }

    return 0;
}