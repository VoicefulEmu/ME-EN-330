/*
 * File:   newmainXC16.c
 * Author: eblamore
 *
 * Created on October 3, 2025, 2:16 PM
 */


#include "xc.h"
# pragma config FNOSC = LPFRC   //500kHz

#define PWMperiod 499                // period set
#define low_pwm 165
#define mid_pwm 250
#define high_pwm 499

int main(void) {
    
    //configure oscillator postscale
    _RCDIV = 0b000;
    
    //configure PWM
    OC1CON1 = 0;                // Clear all bits of OC1CON1 
    OC1CON2 = 0;                // Clear all bits of OC1CON2 
    OC1CON1bits.OCTSEL = 0b111; // System clock as timing source 
    OC1CON2bits.SYNCSEL = 0x1F; // Self-synchronization 
    OC1CON2bits.OCTRIG = 0;     // Synchronization mode 
    OC1CON1bits.OCM = 0b110;    // Edge-aligned PWM mode 
    
    //Specify PWM Period
    OC1RS = PWMperiod;
    
    //Specify duty cycle
    OC1R = 0;
    
    
    //Configure Pin 14
    //done above

    //Configure Timer 1
    
    _TON = 1;
    _TCS = 0;
    _TCKPS = 0b10;                  //set timer prescale to 64
    PR1 = 31300;                    //set timer period to 2 seconds
    

    
    //configure program function

//    while(1){
//        OC1R = low_pwm;
//    }
    
    
    
//    while(1){
//        if (TMR1 == 15625){
//            if (OC1R == low_pwm) {
//                OC1R = high_pwm;
//                TMR1 = 0;
//            }
//            else {
//                OC1R = low_pwm;
//                TMR1 = 0;
//            }
//        }
//    }
    
    enum {low, med, high} state;
    state = low;
    while(1)
    {
        switch (state){
            case low:
//                OC1R = low_pwm;
                if (TMR1 >= 7813){
                    OC1R = mid_pwm;
                    TMR1 = 0;
                    state = med;
                }
//                break;
            case med:
                if (TMR1 >= 11719){
                    OC1R = high_pwm;
                    TMR1 = 0;
                    state = high;
                }
//                break;
            case high:
                if (TMR1 >= 15625){
                    OC1R = low_pwm;
                    TMR1 = 0;
                    state = low;
                }
//                break;
        }
    }
      
    return 0;
}
