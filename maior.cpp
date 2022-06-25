#include<iostream>

using namespace std;

int main(){
    int n, m, s, result = -1;

    cin >> n >> m >> s;

    for(int i = m; i >= n; i--){
        int aux = i, soma = 0;
        while(aux > 0){
            soma += aux%10;
            aux = aux/10;
        }
        if(soma == s){
            result = i;
            break;
        }
    }    
    cout << result << endl;
}