#include "Budget.h"

void Budget::userRegistration(){
    userMenager.userRegistration();
}

void Budget::writeAllUsers(){
    userMenager.writeAllUsers();
}

void Budget::userLogin(){
    userMenager.userLogin();
}

void Budget::userLogout(){
    userMenager.userLogout();
}

bool Budget::ifUserIsLogged(){
    userMenager.ifUserIsLogged();
}

char Budget::selectOptionFromMainMenu(){
    char choice;
    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "8. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    choice = AssistantMethods::wczytajZnak();
    return choice;
}

char Budget::selectOptionFromUserMenu(){
    char choice;
    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj przychod" << endl;
    cout << "2. Dodaj wydatek" << endl;
    cout << "3. Bilans z biezacego miesiaca" << endl;
    cout << "4. Bilans z poprzedniego miesiaca" << endl;
    cout << "5. Bilans z wybranego okresu" << endl;
    cout << "---------------------------" << endl;
    cout << "6. Zmien haslo" << endl;
    cout << "7. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    choice = AssistantMethods::wczytajZnak();
    return choice;
}
