#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter number of orders: ";
    cin >> N;

    double kg, charge, finalCharge, totalIncome = 0;

    for (int i = 1; i <= N; i++) {
        cout << "Enter cloth weight (kg) for order " << i << ": ";
        cin >> kg;

        charge = kg * 180;    // cost before discount

        // Apply 12% discount if charge exceeds 3000
        if (charge > 3000) {
            finalCharge = charge - (charge * 0.12);
        } else {
            finalCharge = charge;
        }

        cout << "Final charge for order " << i << " = " << finalCharge << endl;

        totalIncome += finalCharge;
    }

    cout << "\nTotal income of dyeing service = " << totalIncome << endl;

    return 0;
}
