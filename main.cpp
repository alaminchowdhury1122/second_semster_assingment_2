
// frist program

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age:";
    cin >> age;

    if (age == 18) {
        cout << "New voter";
    }
    else if (age > 18 && age < 60) {
        cout << "Approved voter";
    }
    else if (age < 18) {
        cout << "Too young";
    }
    else if (age >= 60) {
        cout << "Retired person Approved voter";
    }
    else {
        cout << "Something went wrong";
    }

    return 0;
}
