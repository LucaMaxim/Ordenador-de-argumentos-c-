#include <iostream>

void ordenarnumeros(int numeros[], int tam);

int main(){
     
    int numeros[] = {10,1,9,2,8,3,7,4,6,5};
    int tam = sizeof(numeros) / sizeof(int);

    ordenarnumeros(numeros, tam);
    
    for(int elementos : numeros) {
        std::cout << elementos << " ";
    }
    return 0;
}
void ordenarnumeros(int numeros[], int tam){

    int temp;
    for(int i = 0; i < tam -1; i++){
        for(int j = 0; j < tam -i -1 ; j++){
            if(numeros[j] > numeros[j + 1]){
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }
}
