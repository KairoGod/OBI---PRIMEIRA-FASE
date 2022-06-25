#include<iostream>

using namespace std;

int main(){
    int n, pl, pc, soma = 0, compara_soma = 0, somaf = 0, soma_x = 0;
    cin >> n;
    int q[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> q[i][j];
            if(q[i][j] == 0){
                pl = i;
                pc = j;
            }
        }
    }

    for(int i = 0; i < n; i++){
        soma_x += q[pl][i];
        soma += q[0][i];
        compara_soma += q[1][i];
    }

    if(soma >= compara_soma){
        somaf = soma;
    }else{
        somaf = compara_soma;
    }

    cout << somaf - soma_x << endl;
    cout << pl + 1 << endl;
    cout << pc + 1 << endl;


}