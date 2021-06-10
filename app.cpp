#include <iostream>
using namespace std;

int main()
{
    int initialAmount, userChoice, amtToDeposit, amtToWithdraw;
    cout << "Starting ATM Simulator.." << endl;

    cout << "Enter amount" << endl;
    cin >> initialAmount ;
    
    cout << "ACCOUNT BALANCE: #" << initialAmount << endl;
    cout << "Press 1 for deposit" << endl;
    cout << "Press 2 for withdrawal" << endl;
    cin >> userChoice;

    if (userChoice == 1)
    {
        cout << "Account balance: #" << initialAmount << endl;
        cout << "Enter amount to deposit" << endl;
        cin >> amtToDeposit;

        cout << "New balance is #" << amtToDeposit + initialAmount << endl;
    }
    else if (userChoice == 2) {
        cout << "Account balance: #" << initialAmount << endl;
        cout << "Enter amount to withdraw" << endl;
        cin >> amtToWithdraw;

        if (amtToWithdraw > initialAmount) {
           cout << "Insufficient funds!" << endl;
        }
        else
        {
            cout << "New balance is #" << initialAmount - amtToWithdraw << endl;
        }
        
    }
    return 0;
}