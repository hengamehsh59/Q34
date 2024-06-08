#include<iostream>
using namespace std;
struct Mobile{
    char Number[11];
    bool isValid()
    {
        if(Number[0]=='0'&&Number[1]=='9'){
            return 1;
        }
        return 0;
    }
};
int main()
{
    Mobile mobile;
    cin>>mobile.Number;
    if(mobile.isValid()){
        cout<<"valid";
    }else{
        cout<<"invalid";
    }
    return 1;
    }
