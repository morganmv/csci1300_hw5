#include <iostream>
using namespace std;

int totalGold(int donations[], int size) {
    int total = 0;

    for (int i = 0; i < size; i++) {
        total += donations[i];
    }

    return total;
}

int main() {
    const int vault_goal = 42500;

    int count;

    cout << "Enter the number of gold donations: ";
    cin >> count;

    int donations[100];

    for (int i = 0; i < count; i++) {
        cout << "Enter gold donation " << i + 1 << ": ";
        cin >> donations[i];
    }

    int total = totalGold(donations, count);

    cout << "--- Vault Funding ---" << endl;
    cout << "Total gold donated: " << total << endl;
    cout << "Vault goal: " << vault_goal << endl;

    if (total >= vault_goal) {
        cout << "The Vault is fully funded! Surplus: "
             << total - vault_goal << " gold" << endl;
    }
    else {
        cout << "The Vault still needs "
             << vault_goal - total << " more gold." << endl;
    }

    return 0;
}