// program 2 

// Md. Al Amin (26205012)

#include <iostream>
using namespace std;

class Grandfather
{
protected:
    int money;
    string car;

public:
    void getGrandfatherProperty()
    {
        cout << "Enter Grandfather's Money: ";
        cin >> money;

        cout << "Enter Grandfather's Car: ";
        cin >> car;
    }
};

class Father : public Grandfather
{
protected:
    string land;

public:
    void getFatherProperty()
    {
        cout << "Enter Father's Land: ";
        cin >> land;
    }
};

class Child : public Father
{
public:
    void display()
    {
        cout << "Family Property Details" << endl;

        cout << "Grandfather's Money: " << money << endl;
        cout << "Grandfather's Car: " << car << endl;
        cout << "Father's Land: " << land << endl;
    }
};

int main()
{
    Child c1;

    c1.getGrandfatherProperty();
    c1.getFatherProperty();

    c1.display();

    return 0;
}