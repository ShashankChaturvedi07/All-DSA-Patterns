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

//Q-2 print n !

int fact(int n){
    if(n==0 || n==1) {
        return 1;
    }
    return n*fact(n-1);    
}

//Q-3 sum of n num

int sum(int n){
    if(n==0) {
        return 0;
    }
    return n+sum(n-1);    
}
//Q-4 only even num from 1 to n 

int even(int n){
    if(n==0) {
        return 0 ;
    }
    if(n%2==0) 
        return 1+ even(n-1);
    else 
        return even(n-1);
}

int main(){

    // print1ton(10);

    // int factorial = fact(5);
    // cout<<factorial;
    
    // int ans = sum(5);
    // cout<<ans;

    int ans = even( 10);
    cout<<ans;

    return 0;
}