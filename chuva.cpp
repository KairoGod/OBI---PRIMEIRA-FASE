#include<iostream>

using namespace std;

int main(){

    //FICOU COM 80/100 POIS DEU TEMPO EXCEDIDO EM DOIS CASOS DE TESTE

    int n, s, intervalos = 0, cont = 0, z = 0;
    cin >> n >> s;
    int x[n];

    for(int i = 0; i < n; i++){
        cin >> x[i];
        if(x[i] == s){
            cont++;
        }
    }

    for(int i = 0; i < n; i++){
        if(i < n - 1){
            intervalos = x[i];
            for(int j = i + 1; j < n; j++){
                intervalos += x[j];
                if(intervalos == s){
                    cont++;
                }else if(intervalos > s){
                    break;
                }
            }
        }
        intervalos = 0;
    }

    cout << cont << endl;
}