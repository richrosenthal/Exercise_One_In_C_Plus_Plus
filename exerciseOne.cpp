//Testing functions/outputs for class
//Author Richard Rosenthal
//Date: 12-31-20

#include <iostream>

using namespace std;

void say_hi();


int main() {
    say_hi();
    return 0;
}

void say_hi(){
    string name;
    cout << "What is your name? " << endl;
    cin >> name;
    cout << "Hello " << name << "! Nice to meet you. I'm PC." << endl;
}

