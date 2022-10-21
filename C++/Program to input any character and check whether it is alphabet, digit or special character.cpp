/****************************************************************

Program to input any character and check whether it is 
alphabet, digit or special character.

*****************************************************************/

#include <iostream>

using namespace std;

int main()
{
    char c;
    cout<<"Enter input any character and check whether it is alphabet, digit or special character"<<endl;
    cin>>c;
    
    if((c >= 'a' && c <= 'z' ) || ( c >= 'A' && c <= 'Z')){
        cout<<"character is alphabet ";
    }
    else if(c >= '0' && c<= '9'){ 
        cout<<"character is number";
    }
    else{
        cout<<"character is symbol";
    }
    return 0;
}

/*
OUTPUT

Enter input any character and check whether it is alphabet, digit or special character
e
character is alphabet 

Enter input any character and check whether it is alphabet, digit or special character
6
character is number

Enter input any character and check whether it is alphabet, digit or special character
*
character is symbol



*/