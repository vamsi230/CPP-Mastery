#include <iostream>


using namespace std;


void generatePaySlip(int workingDays) {
    
}

void exitProgram() {
    return;
}


int main() {
    bool exit = false;

    cout << "======================================" << endl;
    cout << "       BANK MANAGEMENT SYSTEM" << endl;
    cout << "======================================" << endl;
    cout << "1. Account Management" << endl;
    cout << "2. Transactions" << endl;
    cout << "3. Account Services" << endl;
    cout << "4. Reports" << endl;
    cout << "5. System Admin" << endl;
    cout << "6. Exit" << endl;
    cout << "======================================" << endl;

    cout << "Enter your Choice: ";
    int choice;
    cin >> choice;

    while(!exit) {
        switch(choice) {
            case 1:
                AddEmployee();
                break;
            case 2:
                DisplayEmployee();
                break;
            case 3:
                generatePaySlip();
                break;
            case 4:
                exitProgram();
                break;
            case 5:
                SystemAdmin();
                break;
            case 6:
                ExitSystem();
                break;
            default:
                return "Invalid! Please Try Again."
                break;
        }

    }

    return 0;
}