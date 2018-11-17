#include "bankaccount.h"
#include <bits/stdc++.h>
using namespace std;

int counter = 2017001;
//-------------------------------------------------
//              Setters and getter for the parent class
void BankAccount::setID(int ID)
{
    Acc_ID=ID;
}
void BankAccount::setbalanace(double BL)
{
    Balance=BL;
}
double BankAccount::getBL()
{
    return Balance;
}
int BankAccount::getID()
{
    return Acc_ID;
}
//--------------------------------------------------
//              Withdraw and deposit functions
/////////////////////////////////////////////////////////////////////////////////////////////
double BankAccount::withdraw(double BL)
{
    BankAccount ba;
    client c;
    char namee,addresss;
    double d=ba.Balance;

    char x[10];
    cout<<endl<<endl;
    ifstream infile;
    infile.open("example.txt");
    infile >> counter;
    infile >> c.name;
    infile >> c.address;
    infile >> c.phone;
    infile >> x;
    infile >> ba.Balance;

        if(BL > ba.Balance)
        {
            cout<<"Sorry. This is more than what you can withdraw."<<endl<<endl;
        }
        else
        {
            ba.Balance-=BL;
            cout<<"Thank you."<<endl;
        }
        cout<<"The new balance = "<<ba.Balance<<endl<<endl;
        ba.setbalanace(d);
        ba.getBL();
        return ba.Balance;
}
double BankAccount::deposit(double valuee)
{
    BankAccount ba;
    client c;
    char x[10];
    cout<<endl<<endl;
    ifstream infile;
    infile.open("example.txt");
    infile >> counter;
    infile >> c.name;
    infile >> c.address;
    infile >> c.phone;
    infile >> x;
    infile >> ba.Balance;

    ba.Balance+=valuee;

    cout<<"Thank you, The new balance value is: "<<ba.Balance<<endl;
    ba.setbalanace(valuee);
    ba.getBL();
    return ba.Balance;
}
//----------------------------------------------------
void client::prints(int ID)
{
    client c;
    char x[10];
    cout<<endl<<endl;
    ifstream infile;
    infile.open("example.txt");
    infile >> counter;
    infile >> name;
    infile >> address;
    infile >> phone;
    infile >> x;
    infile >> Balance;
    cout<<"-------------------------- "<< name << " ---------------------------"<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"Account ID: "<<counter<<endl;
    cout<<"Balance: "<<Balance<<endl;
    cout<<endl<<endl;
}
//----------------------------------------------------
//----------------------------------------------------
//      Those Functions is for the Client class(setters and getters)
void client::setname(char n[40])
{
    name[40]=n[40];
}
void client::setaddress(char address1[40])
{
    address[40]=address1[40];
}
void client::setphone(int p)
{
    phone=p;
}

void client::setIDD(int IDD)
{
    Acc_ID=IDD;
}
int client::getIDD()
{
    return Acc_ID;
}
char client::getname()
{
    return name[40];
}
char client::getaddress()
{
    return address[40];
}
int client::getphone()
{
    return phone;
}
//-------------------------------------------------------
//-------------------------------------------------------
//          Functions for saving account

double Saving::withdraaw(double BAL)
{
    BankAccount ba;
    client c;
    char namee,addresss;
    double d=ba.Balance;

    int x;
    cout<<endl<<endl;
    ifstream infile;
    infile.open("example.txt");
    infile >> counter;
    infile >> c.name;
    infile >> c.address;
    infile >> c.phone;
    infile >> x;
    infile >> ba.Balance;

    if(BAL>1000.00)
    {

        if(BAL>(ba.Balance+1000))
        {
            cout<<"Sorry. This is more than what you can withdraw."<<endl;
        }
        else
        {
            ba.Balance-=BAL;
            cout<<"Thank you."<<endl;
        }

        cout<<"The new balance = "<<ba.Balance<<endl;
        ba.setbalanace(ba.Balance);
        ba.getBL();

        return ba.Balance;
    }
    else
        cout<<"Please enter value greater than 1000(minimum value)"<<endl;
}
double Saving::depositt(double val)
{
    BankAccount ba;
    client c;
    char x[10];
    cout<<endl<<endl;
    ifstream infile;
    infile.open("example.txt");
    infile >> counter;
    infile >> c.name;
    infile >> c.address;
    infile >> c.phone;
    infile >> x;
    infile >> ba.Balance;

    ba.Balance+=val;
    return ba.Balance;
    cout<<"Thank you, your new balance is "<<ba.Balance<<endl;
    ba.setbalanace(ba.Balance);
    ba.getBL();
    return ba.Balance;

}
//-----------------------------------------------------------
int main()
{
while(true)
{
    cout<<"Welcome to FCI Banking Application "<<endl;
    cout<<"1. Create a New Account" <<endl;
    cout<<"2. List Clients and Accounts "<<endl;
    cout<<"3. Withdraw Money "<<endl;
    cout<<"4. Deposit Money "<<endl;
    //------------------------------------------------
    char namee[40],addresss[40];
    string n,m;
    int y,phonee,x;
    double B,W,V;

    BankAccount Ba;
    client cl;
    Saving sa;

    cout<<"Please Enter Choice: ";
    cin>>y;

    if(y==1)
    {
        ofstream myfile;
        myfile.open ("example.txt");
        cout<<"Please Enter Client Name: ";
        cin>>namee;
        cl.setname(namee);
        cl.getname();
        cout<<endl;

        cout<<"Please Enter Client Address: ";
        cin>>addresss;
        cl.setaddress(addresss);
        cl.getaddress();
        cout<<endl;

        cout<<"Please Enter Client Phone: ";
        cin>>phonee;
        cl.setphone(phonee);
        cl.getphone();
        cout<<endl;

        cout<<"What Type of Account Do You Like? (1) Basic (2) Saving, Type 1 or 2 ";
        cin>>x;
        cout<<endl;

        myfile << counter <<"\t";
        myfile << namee <<"\t";
        myfile << addresss <<"\t";
        myfile << phonee <<"\t";

        if(x==1)
        {
            myfile << x <<"\t";
            cout<<"Please Enter the Starting Balance: ";
            cin>>B;
            Ba.setbalanace(B);
            Ba.getBL();
            cout<<"An account was created with ID and Starting Balance "<< B <<endl;
            cout<<"Your ID is: "<<counter;
            cout<<endl;
            cout<<endl;
            cl.setIDD(counter);
            cl.getID();
            myfile << B;
            counter++;
        }
        else if (x==2)
        {
            myfile << x <<"\t";
            cout<<"Please Enter the Starting Balance: ";
            cin>>B;
            if(B>=1000)
            {
                sa.setbalanace(B);
                sa.getBL();
                cout<<"An account was created and Starting Balance "<< B <<endl;
                cout<<"Your ID is: "<<counter;
                cout<<endl;
                cout<<endl;
                cl.setIDD(counter);
                cl.getID();
                myfile << B;
                counter++;
            }
            else
                cout<<"The account cannot be created as balance is less than 1000LE"<<endl;
                cout<<endl;
        }
    }
    else if(y==2)
    {
        int accID;
        cout<<"Please Enter Account ID: ";
        cin>>accID;
        cl.setIDD(accID);
        cl.getIDD();
        cl.prints(accID);
    }
    else if(y==3)
    {
        client c;
        BankAccount ba;
        Saving s;
        int x;
        cout<<endl<<endl;
        ifstream infile;
        infile.open("example.txt");
        infile >> counter;
        infile >> c.name;
        infile >> c.address;
        infile >> c.phone;
        infile >> x;
        infile >> ba.Balance;

        int z;
        double BL;
        cout<<"Please Enter Account ID: ";
        cin>>z;
        cl.setIDD(z);
        cl.getIDD();
        cl.prints(z);
        if(x==1)
        {
            cout << "Please Enter The Amount to Withdraw : ";
            cin >> BL;
            Ba.withdraw(BL);
        }
        else if(x==2)
        {
            cout << "Please Enter The Amount to Withdraw : ";
            cin >> BL;
            s.withdraaw(BL);

        }
    }
    else if(y==4)
    {
        int z;
        double valuee;
        cout<<"Please Enter Account ID: ";
        cin>>z;
        cl.setIDD(z);
        cl.getIDD();
        cout<<"Please enter the value to deposit: ";
        cin >> valuee;
        Ba.deposit(valuee);
    }
    else
        cout<<"Cannot be found please enter a number from range 1-4, Thank you"<<endl<<endl;
}
}
