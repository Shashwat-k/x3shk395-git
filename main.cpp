#include <iostream>
#include "utils.h"
using namespace std;

int main()
{
    string name, password;

    cout<<"Enter name : ";
    cin >> name;
    cout<<"\nEnter password : ";
     cin>> password;

cout<<endl;
    if (login(name, password)) {
        cout << "Success!" << endl;
    } else {
        cout << "Login Failed :(" << endl;
    }

    return 0;
}
