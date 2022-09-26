#include "operations.h"

UINT32 sum ( UINT32 input_1, UINT32 input_2, UINT8 * valid) {
    if (input_1 < 0 || input_1 > 200 || input_2 < 0 || input_2 > 200)
        *valid = 0;
    else 
        *valid = 1;
    
    return input_1 + input_2;  
}

UINT32 subtraction (UINT32 input_1, UINT32 input_2, UINT8 * valid) {
     if (input_1 < 0 || input_1 > 200 || input_2 < 0 || input_2 > 200)
        *valid = 0;
    else if (input_1 < input_2)
        *valid = 0;
    else 
        *valid = 1;
    
    return input_1 - input_2;  
}

UINT32 multiplication ( UINT32 input_1, UINT32 input_2, UINT8 * valid) {
     if (input_1 < 0 || input_1 > 200 || input_2 < 0 || input_2 > 200)
        *valid = 0;
    else 
        *valid = 1;
    
    return input_1 * input_2;  
}

UINT32 division ( UINT32 input_1, UINT32 input_2, UINT8 * valid) {
    if (input_1 < 0 || input_1 > 200 || input_2 < 0 || input_2 > 200)
        *valid = 0;
    else if (input_2 == 0)
        *valid = 0;
    else 
        *valid = 1;
    
    return input_1 / input_2;  
}

UINT32 do_math ( OPERATION oper, UINT32 input_1, UINT32 input_2, UINT8 * valid) {
    switch (oper)
    {
    case 1: // SUM
        sum(input_1, input_2, valid);
        break;
    case 2: // SUB
        subtraction(input_1, input_2, valid);
        break;
    case 3: // MUL
        multiplication(input_1, input_2, valid);
        break;
    case 4: // DIV
        division(input_1, input_2, valid);
        break;
    default:
        break;
    }
}