#include <iostream>


int main() {
    int arreglo[10] = {3, 8, 4, 9, 2, 20, 10, 12, 55, 35};
    int auxiliar;

    for(int i = 0; i < 10; ++i) {
        std::cout <<arreglo[i]<< std::endl;
    }

    for(int i = 1; i < 10; i++){
        for(int j = 0; j < 10 - 1; j++){
            if(arreglo[j] > arreglo[j+1]){
                auxiliar = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = auxiliar;
            }
        }
    }

    for(int i = 0; i < 10; ++i) {
        std::cout <<arreglo[i]<< std::endl;
    }
}