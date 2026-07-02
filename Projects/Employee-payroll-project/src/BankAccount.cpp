#include "BankAccount.h"

BankAccount::BankAccount(int accountNumber, string Name, double balance, accountType Type, bool Status){
    this->accountnumber = accountNumber;
    this->accountHolderName = Name;
    this->balance = balance;
    this->AccountType = Type;
    this->isActive = Status;
}

int BankAccount::getAccountNumber() {
    return accountnumber;
}

void BankAccount::setAccountNumber(int Number){
    accountnumber = Number;
}

string BankAccount::getAccountHolderName() {
    return accountHolderName;
}
void BankAccount::setAccountHolderName(string Name) {
    accountHolderName = Name;
}

double BankAccount::getBalance() {
    return balance;
}
void BankAccount::setBalance(double Balance){
    balance = Balance;
}

accountType BankAccount::getAccountType() {
    return AccountType;
}
void BankAccount::setAccountType(accountType AccountType){
    this->AccountType = AccountType;
}

bool BankAccount::getIsActive() {
    return isActive;
}
void BankAccount::setIsActive(bool isActive?) {
    isActive = isActive?;
}
void BankAccount::closeAccount() {
    ~BankAccount();
}
string BankAccount::getAccountSummary() {
    return "Account Name: " << accountHolderName 
    << " Account Number: " << accountnumber
    << " Account Balance: " << balance
    << " Active Status: " << isActive;
}