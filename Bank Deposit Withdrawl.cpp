#include<iostream>
using namespace std;

class Bank {
    private:
        double Balance = 4000;

    public:

        void Withdraw(double Amount) {
            if (Amount > 0 && Amount <= Balance) {
                Balance -= Amount;
                cout << "WITHDRAW SUCCESSFUL OF AMOUNT : " << Amount << "!\n";
            }
            else if (Amount <= 0) {
                cout << "INVALID WITHDRAW AMOUNT!\n";
            }
            else {
                cout << "INSUFFICIENT BALANCE!\n";
            }
        }

        void ShowBalance() {
            cout << "YOUR CURRENT BALANCE IS : " << Balance << "!\n";
        }

        void Deposit(double Amount) {
            if (Amount > 0) {
                Balance += Amount;
                cout << "YOUR DEPOSIT IS SUCCESSFUL OF AMOUNT : " << Amount << "!\n";
            }
            else {
                cout << "INVALID DEPOSIT AMOUNT!\n";
            }
        }
};

int main() {
    Bank s;

    s.ShowBalance();
    s.Withdraw(3000);
    s.Deposit(7000);
    s.ShowBalance();

    return 0;
}
