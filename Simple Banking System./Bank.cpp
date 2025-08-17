#include<iostream>
#include<string>
#include<limits>
using namespace  std;
string name;
int dep,wit;
int money=0;
void create(){
    cout<<"Enter Name: ";
    cin.ignore();
    getline(cin, name);
}
void Deposite(){
    int x;
    cout << "Enter Amount of Money to be Deposited: ";
    cin >> x;
    money += x;
    cout << "Deposited " << x << ". New balance: " << money << endl;
}
void Withdraw() {
    int x;
    cout << "Enter Amount of Money to be Withdrawn: ";
    cin >> x;
    if (x <= money) {
        money -= x;
    } else {
        cout << "Not enough balance!\n";
    }
}
void check(){
    cout<<"Amount of Money left in the account: "<<money;
}
int main(){
    int choice;
    do{
        cout<<endl;
        cout<<"=====SIMPLE BANK SYSTEM====="<<endl;
        cout<<"1. Create Account"<<endl;
        cout<<"2. Deposite Money"<<endl;
        cout<<"3. Withdraw Money"<<endl;
        cout<<"4. Check Balance"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter Your Choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout << "You selected: Create Account\n";
                create();
                break;
            case 2:
                cout << "You selected: Deposit Money\n";
                Deposite();
                break;
            case 3:
                cout << "You selected: Withdraw Money\n";
                Withdraw();
                break;
            case 4:
                cout << "You selected: Check Balance\n";
                check();
                break;
            case 5:
                cout << "Exiting program...\n";
                exit(0);
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }while(choice!=5);
    return 0;
}
