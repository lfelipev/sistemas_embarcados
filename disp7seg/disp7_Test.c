#include "disp7seg.h"

//inicio do programa
void main(void) {
    unsigned int tempo;
    InicializaDisplays();
    MudaDigito(0,0);
    MudaDigito(1,1);
    MudaDigito(2,2);
    MudaDigito(3,3);
    for(;;) {
        AtualizaDisplay();
        //gasta um tempo para evitar o efeito flicker
        for(int tempo=0; tempo<1000; tempo++);
    }
}