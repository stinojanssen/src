#include "elecanisms.h" //import elacanisms library where all the ports on the board are initialised

int16_t main(void) {    //start main function
    init_elecanisms();  //load the elacanisms library

    while (1) { //open while loop

    if ( D0 == 1) {   //check if the coin machine generates a signal by turning on a led through an if statement
      //if led1 turns on the digital pin D0 doesn't receive a pulse (pulse =0), if led2 turns  on D0 rreceives a pulse.
            LED1 = ON;
            LED2 = OFF;
        }
    else{
          LED1 = OFF;
          LED2 = ON;

        }
    }
}
