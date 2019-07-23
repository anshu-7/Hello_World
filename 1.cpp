#include<bits/stdc++.h>
using namespace std;
class account
{
private:
    float balance;
    int transaction;
    int accountNo;
    char type;
public:

    account(int x,char c)
    {
        accountNo=x;
        type=c;
        balance = 0;
        transaction=0;
    }
    void enter(int x)
    {
        accountNo=x;
    }
    void withdraw(float x)
    {
        balance -=x;
        transaction++;
        if(type=='B')
        {
            balance-=10;
            transaction++;
        }
    }
    float Accbalance()
    {
        return balance;
    }
    int accountNum()
    {
        return accountNo;
    }
    void print()
    {
        cout<<accountNo<<" "<<balance<<" "<<transaction<<" "<<type<<endl;
    }
    void Display()
    {
        if(type=='A')
        {
            withdraw(50);
        }
           cout<<accountNo<<" "<<balance<<" "<<transaction<<" "<<endl;
    }

};
class BankManager
{
private:
  vector<account>ac;
public:
    void addAccount(account aa)
    {
        ac.push_back(aa);
    }
    void WithdrawlFromAccount(double amt,int accno)
    {
        for(int i=0;i<ac.size();i++)
        {
            if(ac[i].accountNum()==accno)
            {
                ac[i].withdraw(amt);
                break;
            }
        }
    }
    void printAllBalance()
    {
        for(int i=0;i<ac.size();i++)
        {
            ac[i].print();
        }
    }
};
main()
{
    account y(10,'A');
    y.withdraw(-100);
   // BankManager x;
     account y2(20,'A');
    y2.withdraw(-150);
     account y3(30,'B');
    y3.withdraw(-1000);
  //  BankManager x;
    BankManager x;
    x.addAccount(y);
      x.addAccount(y2);
        x.addAccount(y3);
    x.printAllBalance();
cout<<"dehradun is city of love.a person named anshuman is  living there AND EATS MOMOS."<<endl;
    
}


