#include<iostream>
using namespace std;
class BankAccount{
    private:
        string accountNumber;
        string accountHolderName;
        double balance;
    public:
    void deposit(double amount){
        balance+=amount;
    }
    void withdraw(double amount){
        if(amount<balance){
            balance-=amount;
        
        }else{
            cout<<"the amount exceeds the current balance"<<endl;
        }
    }
    double getBalance(){
        return balance;
    }    

};
int main(){
    BankAccount account;
    account.deposit(500);
    account.withdraw(200);
    cout<<"the current balance is: "<<account.getBalance()<<endl;
    
    return 0;
}