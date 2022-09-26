#include "C_GLOBAL_TYPES.h"

typedef enum { SUM=1, SUB=2, MUL=3, DIV=4 } OPERATION;

UINT32 sum ( UINT32 input_1, UINT32 input_2, UINT8 * valid);
UINT32 subtraction (UINT32 input_1, UINT32 input_2, UINT8 * valid);
UINT32 multiplication ( UINT32 input_1, UINT32 input_2, UINT8 * valid);
UINT32 division ( UINT32 input_1, UINT32 input_2, UINT8 * valid);
UINT32 do_math ( OPERATION oper, UINT32 input_1, UINT32 input_2, UINT8 * valid);