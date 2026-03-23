#include <iostream>
using namespace std;

//Q1 print 1 to n
void print1ton(int n){
    //base case
    if(n==1){
        cout<<n;
        return;
    }

    cout<<n<<" ";
    print1ton(n-1);
}

int main(){

    int n=10;
    print1ton(n);

    return 0;
}