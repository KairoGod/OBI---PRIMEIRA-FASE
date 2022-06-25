#include<iostream>

using namespace std;

int main(){
    int d, a, n;

    cin >> d >> a >> n;

    if(n == 1){
        cout << d * 31 << endl;
    }else if(n == 2){
        cout << 30 * (d + a) << endl;
    }else if(n <= 15){
        cout << (31 - (n - 1)) * (d + (n - 1)*a) << endl;
    }else{
        cout << (31 - (n - 1)) * (d + 14*a) << endl;
    }
}