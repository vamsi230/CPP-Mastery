#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

enum class accountType {
    Checking,
    Savings,
    Bussiness
}
using namespace std;

class BankAccount {

private:
    int accountnumber;
    string accountHolderName;
    double balance;
    accountType AccountType = accountType::Bussiness;
    bool isActive;

public:
    BankAccount(int accountNumber, string Name, double balance, accountType Type, bool Status);

    virtual void deposit (double amount) = 0;
    virtual bool withdrar(double amount) = 0;
    virtual double calculateInterest() = 0;
    virtual void displayAccountInfo() = 0;


    int getAccountNumber();
    void setAccountNumber(int Number);

    string getAccountHolderName();
    void setAccountHolderName(string Name);

    double getBalance();
    void setBalance(double Balance);

    accountType getAccountType();
    void setAccountType(accountType AccountType);

    bool getIsActive();
    void setIsActive(bool isActive?);

    void closeAccount();
    string getAccountSummary();
};


#endif