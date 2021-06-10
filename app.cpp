#include <iostream>
using namespace std;

int main()
{
    int initialAmount, userChoice, amtToDeposit, amtToWithdraw;
    cout << "Starting Program.." << endl;

    cout << "Enter amount" << endl;
    cin >> initialAmount ;

    cout << "Press one for deposit" << endl;
    cout << "Press two for withdrawal" << endl;
    cin >> userChoice;

    if (userChoice == 1)
    {
        cout << "Enter amount to deposit" << endl;
        cin >> amtToDeposit;

        cout << "New balance is " << amtToDeposit + initialAmount << endl;
    }
    else if(userChoice == 2) {
        cout << "Enter amount to withdraw" << endl;
        cin >> amtToWithdraw;

        if (amtToWithdraw > initialAmount) {
            cout << "Insufficient funds!" << endl;
        }
        else {
            cout << "New balance is " << initialAmount - amtToWithdraw << endl;
        }

    }
    else {
        cout << "Invalid input" << endl;
    }
    return 0;
    
}