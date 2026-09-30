#include <iostream>
#include <string>
using namespace std;

// Function for Engine Recommendation
void engineRecommendation() {
    int usage, priority;
    int turboScore = 0;
    int naScore = 0;

    cout << "\n========================================\n";
    cout << "       ENGINE RECOMMENDATION\n";
    cout << "========================================\n";

    // Choose driving usage
    cout << "\nWhat is your main driving usage?\n";
    cout << "1. City Driving\n";
    cout << "2. Highway Driving\n";
    cout << "3. Towing / Heavy Load\n";
    cout << "4. Mixed Driving\n";

    do {
        cout << "\nEnter your choice (1-4): ";
        cin >> usage;

        if (usage < 1 || usage > 4) {
            cout << "Invalid choice. Please enter 1-4.\n";
        }
    } while (usage < 1 || usage > 4);

    // Score based on usage
    switch (usage) {
        case 1:
            turboScore += 3;
            naScore += 2;
            break;

        case 2:
            turboScore += 3;
            naScore += 2;
            break;

        case 3:
            turboScore += 4;
            naScore += 2;
            break;

        case 4:
            turboScore += 3;
            naScore += 3;
            break;
    }

    // Choose priority
    cout << "\nWhat is your main priority?\n";
    cout << "1. More Power\n";
    cout << "2. Fuel Economy\n";
    cout << "3. Simplicity and Reliability\n";

    do {
        cout << "\nEnter your choice (1-3): ";
        cin >> priority;

        if (priority < 1 || priority > 3) {
            cout << "Invalid choice. Please enter 1-3.\n";
        }
    } while (priority < 1 || priority > 3);

    // Score based on priority
    switch (priority) {
        case 1:
            turboScore += 4;
            naScore += 1;
            break;

        case 2:
            turboScore += 3;
            naScore += 3;
            break;

        case 3:
            turboScore += 1;
            naScore += 4;
            break;
    }

    // Display scores
    cout << "\n----------------------------------------\n";
    cout << "Turbocharged Engine Score: "
         << turboScore << endl;

    cout << "Naturally Aspirated Engine Score: "
         << naScore << endl;

    cout << "----------------------------------------\n";

    // Final recommendation
    if (turboScore > naScore) {
        cout << "\nRecommendation: TURBOCHARGED ENGINE\n";
        cout << "Reason: It matches your selected usage and priority.\n";
    }
    else if (naScore > turboScore) {
        cout << "\nRecommendation: NATURALLY ASPIRATED ENGINE\n";
        cout << "Reason: It matches your selected usage and priority.\n";
    }
    else {
        cout << "\nRecommendation: BOTH OPTIONS ARE SUITABLE\n";
        cout << "Reason: Both engines received the same score.\n";
    }

    cout << "\n";
}


// Function for Turbocharger Innovation Life Cycle
void turbochargerLifeCycle() {

    cout << "\n========================================\n";
    cout << "    TURBOCHARGER INNOVATION LIFE CYCLE\n";
    cout << "========================================\n";

    cout << "\n1. Ideation / Science\n";
    cout << "   Development of the basic turbocharging concept.\n";

    cout << "\n2. Prototype / Invention\n";
    cout << "   Early turbocharger designs and prototypes were developed.\n";

    cout << "\n3. Social Necessity\n";
    cout << "   Demand for better engine performance and efficiency increased.\n";

    cout << "\n4. Diffusion\n";
    cout << "   Turbochargers became more common in vehicles and other engines.\n";

    cout << "\n5. Spin-offs\n";
    cout << "   Turbocharging technology expanded into different applications.\n";

    cout << "\n----------------------------------------\n";
    cout << "Turbocharger life cycle information displayed.\n";
    cout << "----------------------------------------\n";
}


// Main function
int main() {

    int choice;

    cout << "========================================\n";
    cout << "       TURBOCHARGED ENGINE ADVISOR\n";
    cout << "========================================\n";

    do {

        cout << "\nMAIN MENU\n";
        cout << "1. Engine Recommendation\n";
        cout << "2. Turbocharger Innovation Life Cycle\n";
        cout << "3. Exit\n";

        cout << "\nEnter your choice (1-3): ";
        cin >> choice;

        switch (choice) {

            case 1:
                engineRecommendation();
                break;

            case 2:
                turbochargerLifeCycle();
                break;

            case 3:
                cout << "\nThank you for using Turbocharged Engine Advisor!\n";
                break;

            default:
                cout << "\nInvalid choice. Please enter 1, 2, or 3.\n";
        }

    } while (choice != 3);

    return 0;
}
