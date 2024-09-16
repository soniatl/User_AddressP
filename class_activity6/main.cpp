//
//  main.cpp
//  class_activity6
//
//  Created by Sonia Lopchan on 9/15/24.
//
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string street, city, state, zipcode;
    
    cout << "Enter your street name: " << endl;
    getline(cin, street);
    
    cout << "Enter your city: " << endl;
    getline(cin, city);
    
    cout << "Enter your state: " << endl;
    getline(cin, state);
    
    cout << "Enter your zipcode: " << endl;
    getline(cin, zipcode);
    
    //Display Address
    cout << "Your address is: "<<street<<endl;
    cout << city<<" "<<state<<" "<<zipcode<<" "<<endl;
    
    return 0;
}
