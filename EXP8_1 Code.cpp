#include <iostream>
#include <string>
using namespace std;

class Planet {
private:
    string name;
    static double g; 

public:
    
    Planet(string planetName, double gravity) {
        name = planetName;
        g = gravity;
    }

    
    double calculateWeight(double mass) const {
        return mass * g;
    }

    
    void displayInfo(double mass) const {
        cout << "Planet: " << name << endl;
        cout << "Gravitational Force (g): " << g << " m/s²" << endl;
        cout << "Weight of the object on " << name << ": " << calculateWeight(mass) << " N" << endl;
    }
};


double Planet::g = 0;

int main() {
    double mass;

    
    cout << "Enter the mass of the object (in kg): ";
    cin >> mass;

    
    Planet earth("Earth", 9.81);
    Planet mars("Mars", 3.71);
    Planet jupiter("Jupiter", 24.79);
    Planet moon("Moon", 1.62);

    
    cout << endl;
    earth.displayInfo(mass);
    cout << endl;
    mars.displayInfo(mass);
    cout << endl;
    jupiter.displayInfo(mass);
    cout << endl;
    moon.displayInfo(mass);
    
    return 0;
}

