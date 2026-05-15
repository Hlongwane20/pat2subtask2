#include <iostream>
#include <iomanip>
using namespace std;

const int NUM_EXPERIMENTS = 3;
const int NUM_READINGS = 3;

int main() {
    int i, j;
    double readingValue, total, average;

    for (i = 1; i <= NUM_EXPERIMENTS; i++) {
        total = 0;
        cout << "\nEXPERIMENT " << i << endl;
        cout << "===========\n";

        for (j = 1; j <= NUM_READINGS; j++) {
            cout << "Enter reading " << j << " value: ";
            cin >> readingValue;
            total += readingValue;  // Add to total
        }

        average = total / NUM_READINGS;  // Correct average calculation

        // Evaluation logic
        if (average < 100) {
            cout << "Experiment " << i << " average: " 
                 << fixed << setprecision(2) << average 
                 << " is Below acceptable range\n";
        } else if (average >= 100 && average <= 300) {
            cout << "Experiment " << i << " average: " 
                 << fixed << setprecision(2) << average 
                 << " is Within acceptable range\n";
        } else {
            cout << "Experiment " << i << " average: " 
                 << fixed << setprecision(2) << average 
                 << " is Above acceptable range\n";
        }
    }

    return 0;
}
