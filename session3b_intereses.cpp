#include <iostream>

float calcular_interes(float x, int t){
    float intereses = 0;
    float capital = x;
    for(int i=1; i<=t; i++){
        intereses = 0.08*capital;
        std::cout << i << "\t\t" << capital <<  "\t\t" << intereses << '\n';
        capital += intereses;
    }
    return capital;
}
int main() {
    std::cout << "Calcular Intereses" << std::endl;
    std::cout << "Tiempo" << "\t\t" << "Capital" <<  "\t\t" << "Intereses" << '\n';
    float total =  calcular_interes(100,12);
    std::cout<< "Total a pagar" << total;
    return 0;
}
