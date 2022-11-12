#include <iostream>
using namespace std;

struct Number
{
    float num1;
    float num2;
};


void operations()
{
    Number myNums{ 15, 3 };
    for (int i = 0; i < 4; i++)
    {
        switch (i)
        {
        case 0:
            cout << myNums.num1 + myNums.num2 << endl;
            break;
        case 1:
            cout << myNums.num1 - myNums.num2 << endl;
            break;
        case 2:
            cout << myNums.num1 / myNums.num2 << endl;
            break;
        case 3:
            cout << myNums.num1 * myNums.num2 << endl;
            break;
        }
    }
}


struct car
{
    int lenth;
    float clearance;
    float size;
    int power;
    float wheels;
    char color[20];
    bool mechanical;

    // Give Value --------------------------

    void GiveLenth()
    {
        cout << "Enter lenth: ";
        cin >> lenth;
    }

    void GiveClearance()
    {
        cout << "Enter clearance: ";
        cin >> clearance;
    }

    void GiveSize()
    {
        cout << "Enter size: ";
        cin >> size;
    }

    void GivePower()
    {
        cout << "Enter power: ";
        cin >> power;
    }

    void GiveWheels()
    {
        cout << "Enter wheels: ";
        cin >> wheels;
    }

    void GiveColor()
    {
        cout << "Enter color: ";
        cin >> color;
    }

    void GiveMechanical()
    {
        cout << "Is mechanical?: ";
        cin >> mechanical;
    }

    // Show Value ------------------------

    void ShowLenth()
    {
        cout << "lenth: " << lenth << endl;
    }

    void ShowClearance()
    {
        cout << "clearance: " << clearance << endl;
    }

    void ShowSize()
    {
        cout << "size: " << size << endl;
    }

    void ShowPower()
    {
        cout << "power: " << power << endl;
    }

    void ShowWheels()
    {
        cout << "wheels: " << wheels << endl;
    }

    void ShowColor()
    {
        cout << "color: " << color << endl;
    }

    void ShowMechanical()
    {
        cout << "mechanical: " << mechanical << endl;
    }
};


void race()
{
    car audi;

    // Give Value --------------------------
    audi.GiveLenth();
    audi.GiveClearance();
    audi.GiveColor();
    audi.GiveMechanical();
    audi.GivePower();
    audi.GiveSize();
    audi.GiveWheels();

    cout << endl;

    // Show Value --------------------------
    audi.ShowLenth();
    audi.ShowClearance();
    audi.ShowColor();
    audi.ShowMechanical();
    audi.ShowPower();
    audi.ShowSize();
    audi.ShowWheels();
}


int main()
{
    operations();
    cout << "\n\n\n";
    race();
}