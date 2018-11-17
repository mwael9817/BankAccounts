#include <bits/stdc++.h>
#define BANKACCOUNT_H

class BankAccount
{
protected:

public:
    int Acc_ID;
    double Balance;
    BankAccount()
    {
        Acc_ID = 0;
        Balance = 0;
    }

    void setID(int ID);
    void setbalanace(double BL);
    int getID();
    double getBL();
    double withdraw(double BL);
    double deposit(double valuee);
    void print();

};

class Saving : public BankAccount
{

public:
    Saving()
    {
        Balance=0;
    }
    void setbalanacee(double BL);
    double getBLL();
    double withdraaw(double BAL);
    double depositt(double val);
};

class client : public BankAccount
{
protected:

public:
        char name[40];
    char address[40];
    int phone;
    int ID;
    void setname(char n[40]);
    void setaddress(char address1[40]);
    void setphone(int p);

    void setIDD(int IDD);
    int getIDD();

    char getname();
    char getaddress();
    int getphone();

    void prints(int ID);
};
