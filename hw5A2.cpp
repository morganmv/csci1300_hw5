#include <iostream>
using namespace std;

int daysToFund(int startBalance, int dailyDeposit) {
    const int vault_goal = 42500;

    int days = 0;

    while (startBalance < vault_goal) {
        days++;
        startBalance += dailyDeposit;

        cout << "Day " << days << ": deposited " << dailyDeposit << ", balance now " << startBalance << endl;
    }
    return days;
}

int main() {
    int startBalance;
    int dailyDeposit;

    cout << "Enter the starting Vault balance: ";
    cin >> startBalance;

    cout << "Enter the daily deposit amount: ";
    cin >> dailyDeposit;

    cout << "--- Vault Savings Plan ---" << endl;

    int days = daysToFund(startBalance, dailyDeposit);

    cout << "The Vault was funded in "
         << days << " days!" << endl;

    return 0;
}