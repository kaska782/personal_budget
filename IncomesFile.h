#ifndef INCOMESFILE_H
#define INCOMESFILE_H

#include <iostream>
#include <algorithm>
#include <vector>

#include "Income.h"
#include "AssistantMethods.h"
#include "XMLFile.h"


using namespace std;

class IncomesFile : public XMLFile{

    int lastIncomeID;

public:
    IncomesFile(string fileName) : XMLFile(fileName){
        lastIncomeID = 0;
    };
    vector <Income> loadIncomesFromFile(int idLoggedUser);
    bool joinIncomeToFile(Income income);

   // void deleteIncomeFromFile(int incomeDeletedID);
    //void editIncomeInFile(Income income);
    //int podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresataZPliku(int idUsunietegoAdresata);

    int getLastIncomeID();
    void setLastIncomeID(int newLastIncomeID);
};

#endif
