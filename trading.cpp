#include <iostream>
using namespace std;


class Account{
    public:
            int accountBalance=3000;
            void showBalance();
            void depositMoney();
            void withdrawMoney();


};

void Account::showBalance(){
    cout << "Your current balance is " << accountBalance << endl;
}

void Account::depositMoney(){
    int depositedMoney;
    cout << "Enter the money you want to deposit to your account:";
    cin >> depositedMoney;
    accountBalance += depositedMoney;
    cout << "Your current balance is " << accountBalance << endl;
}

void Account::withdrawMoney(){
    int withdrawedMoney;
    cout << "Enter the money you want to withdraw from your account:";
    cin >> withdrawedMoney;
    if(accountBalance < withdrawedMoney){
        cout << "Your account does not have enough money.";
        cout << "Your current balance is " << accountBalance << endl;
    }

    else{
        accountBalance -= withdrawedMoney;
        cout << "Your current balance is " << accountBalance << endl;
    }

}

class Crypto : public Account{
    public:
            int dogeCoinCount=0,bitCoinCount=0;
            void buyCoins();
            void sellCoins();

    
};

void Crypto::buyCoins(){
    int whichCoin;
    if(accountBalance > 10000){
        cout << "Which coin you want to buy press 1 for Dogecoin and 2 for Bitcoin:";
        cin >> whichCoin;
        if(whichCoin == 1){
            cout << "How many Dogecoin you need(1 Dogecoin costs 10,000 INR):";
            cin >> dogeCoinCount;
            if(10000 * dogeCoinCount > accountBalance){
                cout << "Nope cant purchase it you are broke bruh.";
                dogeCoinCount = 0;
            }
            else{
                accountBalance = accountBalance - 10000 * dogeCoinCount;
                cout << "DogeCoin: " << dogeCoinCount << endl;
                cout << "BitCoin: " << bitCoinCount << endl;
            }
        }
        else{
            cout << "How many Bitcoin you need(1 Bitcoin costs 20,000 INR):";
            cin >> bitCoinCount;
            if(20000 * bitCoinCount > accountBalance){
                cout << "Nope cant purchase it you are broke bruh.";
                bitCoinCount = 0;
            }
            else{
                accountBalance = accountBalance - 20000 * bitCoinCount;
                cout << "DogeCoin: " << dogeCoinCount << endl;
                cout << "BitCoin: " << dogeCoinCount << endl;
            }
        }
    }
    else{
        cout << "You are tooo broke bruhh.";
        cout << endl;
    }
}

void Crypto::sellCoins(){
    int whichCoin;
    int totalDogeCoin = dogeCoinCount;
    int totalBitCoin = bitCoinCount;
    int sellingDogeCoinCount;
    int sellingBitCoinCount;

    if(dogeCoinCount > 0 || bitCoinCount > 0){
        cout << "Which coin you want to sell press 1 for Dogecoin and 2 for Bitcoin:";
        cin >> whichCoin;
        if(whichCoin == 1){
            cout << "How many Dogecoin you want to sell(1 Dogecoin costs 10,000 INR):";
            cin >> sellingDogeCoinCount;
            if(totalDogeCoin < sellingDogeCoinCount){
                cout << "You dont have that many coins to sell.";
            }
            else{
                dogeCoinCount = totalDogeCoin-sellingDogeCoinCount;
                accountBalance += 10000*sellingDogeCoinCount;
                cout << "DogeCoin: " << dogeCoinCount << endl;
                cout << "BitCoin: " << dogeCoinCount << endl;
            }
        }
        else{
            cout << "How many Bitcoin you want to sell(1 Bitcoin costs 20,000 INR):";
            cin >> sellingBitCoinCount;
            if(totalBitCoin < sellingBitCoinCount){
                cout << "You dont have that many coins to sell.";
            }
            else{
                bitCoinCount = totalBitCoin-sellingBitCoinCount;
                accountBalance += 10000*sellingBitCoinCount;
                cout << "DogeCoin: " << dogeCoinCount << endl;
                cout << "BitCoin: " << dogeCoinCount << endl;
            }
        }
    }
    else{
        cout << "You dont have any coins to sell.";
        cout << endl;
    }
}

int main(){
    Crypto c1;
    int run=1;
    int decision;
    while(run){
        cout << "Press 1 for account details." << endl;
        cout << "Press 2 for deposting money." << endl;
        cout << "Press 3 for withdrwaing money." << endl;
        cout << "Press 4 for buying crytocurrencies." << endl;
        cout << "Press 5 for selling crytocurrencies." << endl;
        cout << "Press any other invalid key to exit." << endl;
        cin >> decision;
        if(decision==1){
            c1.showBalance();
            cout << endl;
        }
        else if(decision==2){
            c1.depositMoney();
            cout << endl;
        }
        else if(decision==3){
            c1.withdrawMoney();
            cout << endl;
        }
        else if(decision==4){
            c1.buyCoins();
            cout << endl;
        }
        else if(decision==5){
            c1.sellCoins();
            cout << endl;
        }else{
            run = 0;
        }
    }
}