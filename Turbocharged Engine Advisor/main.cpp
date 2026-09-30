#include <iostream>
using namespace std;

int main() {

    int choice;

    cout << "==========================================" << endl;
    cout << "       TURBOCHARGED ENGINE ADVISOR" << endl;
    cout << "==========================================" << endl;

    cout << "\nMAIN MENU" << endl;
    cout << "1. Engine Recommendation" << endl;
    cout << "2. Turbocharger Innovation Life Cycle" << endl;
    cout << "3. Exit" << endl;

    cout << "\nEnter your choice (1-3): ";
    cin >> choice;

    if (choice == 1) {
        cout << "\nEngine Recommendation selected." << endl;
    }
    else if (choice == 2) {
        cout << "\nTurbocharger Innovation Life Cycle selected." << endl;
    }
    else if (choice == 3) {
        cout << "\nThank you for using the program!" << endl;
    }
    else {
        cout << "\nInvalid choice. Please enter 1, 2, or 3." << endl;
    }

    return 0;
}
