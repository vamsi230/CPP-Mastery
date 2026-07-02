#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "BankAccount.h"

class SavingsAccount : public BankAccount {
    public:
    ComissionEmployee();

    double interestRate = 2.5f;
    double minimumBalance = 500;
    int transactionLimit = 6;
    int monthlyWithdrawls;


    double CalculateMonthlyInterest();
    
}

#endif