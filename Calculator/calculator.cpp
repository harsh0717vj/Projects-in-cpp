#include<iostream>
using namespace std;
int main(){
    double x,y,result;
    char c;
    cout<<"Enter First Number: ";
    cin>>x;
    cout<<"Enter Operator(+,-,*,/): ";
    cin>>c;
    cout<<"Enter Second Number: ";
    cin>>y;
    if(c=='+'){
         result=x+y;
          cout<<"Result: "<<result<<endl;
    }
    else if(c=='-'){  
        result=x-y;
         cout<<"Result: "<<result<<endl;
    }
   
    else if(c=='*'){ 
        result=x*y;
         cout<<"Result: "<<result<<endl;
    }
  
    else if(c=='/'){
        if(y!=0){ 
            result=x/y;
            cout<<"Result: "<<result<<endl;
        }
        else cout<<"Division by 0 is Not Allowed!"<<endl;
    }
    else cout<<"Invalid Operator!"<<endl;
    return 0;
}
