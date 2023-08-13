#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"

void lfsr_calculate(uint16_t *reg) {
    uint16_t X0 = 1&(*reg>>0);
    uint16_t X2 = 1&(*reg>>2); 
    uint16_t X3 = 1&(*reg>>3); 
    uint16_t X5 = 1&(*reg>>5);
    uint16_t XOR1 = X0^X2;
    uint16_t XOR2 = XOR1^X3; 
    uint16_t XOR3 = XOR2^X5;
    *reg >>= 1;
    *reg = *reg + (XOR3<<15);
       	/* YOUR CODE HERE */
}

