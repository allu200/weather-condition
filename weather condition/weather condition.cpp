#include <iostream>
using namespace std;

class Weather
{
private:
    double temperature;
    string condition;

public:
    Weather(double t, string c) 
    {
        temperature = t;
        condition = c;
    }

    void display() 
    {
        cout << "Temperature: " << temperature << " F" << endl;
        cout << "Condition: " << condition << endl;

        if (temperature >= 90)
            cout << "Weather is hot." << endl;
        else if (temperature <= 40)
            cout << "Weather is cold." << endl;
        else
            cout << "Weather is moderate." << endl;
    }
};

int main() 
{
    Weather w(75, "Sunny");
    w.display();

    return 0;
}