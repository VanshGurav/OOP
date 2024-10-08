#include <iostream>
using namespace std;

class Birthday {
private:
    int day;
    int month;
    int year;

public:
    // Function to accept birthday details
    void acceptBirthday() {
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
    }

    // Function to display birthday details
    void displayBirthday() const {
        cout << "Birthday: " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    int n;

    // Accept number of birthday records
    cout << "Enter the number of birthdays: ";
    cin >> n;

    // Dynamically allocate an array of Birthday objects
    Birthday* birthdays = new Birthday[n];

    // Accept birthday details for each object
    for (int i = 0; i < n; i++) {
        cout << "Enter details for birthday " << (i + 1) << endl;
        birthdays[i].acceptBirthday();
    }

    // Display birthday details for each object
    cout << "\nEntered Birthday Details:\n";
    for (int i = 0; i < n; i++) {
        birthdays[i].displayBirthday();
    }

    // Deallocate the memory
    delete[] birthdays;

    return 0;
}

