#ifndef BUDGET_H
#define BUDGET_H

#include "UserMenager.h"

using namespace std;

class Budget{
    UserMenager userMenager;
    //IncomesManager *incomesManager;
    //ExpensesManager *expensesManager;

public:
    Budget(string usersFileName) //, string incomesFileName, string expensesFileName
        : userMenager(usersFileName) {};

    void userRegistration();
    void writeAllUsers();
    //int userLogin();
    //void userLogout();
    //void balanceOfCurrentMonth();
    //void balanceOfPreviousMonth();
    //void balanceOfPassedPeriod();

};
#endif