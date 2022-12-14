#include "C_GLOBAL_TYPES.h"
#include "stdio.h"
#include "operations.h"
#include "theorem.h"

int test_sum();
int test_subtraction();
int test_multiplication();
int test_division();
int test_do_math();
int test_theorem();

int main()
{
    /*test_sum();

    test_subtraction();

    test_multiplication();

    test_division();*/

    //test_do_math();

    test_theorem();
}

int test_theorem() {
    UINT16 cateto_1, cateto_2;
    printf("Inserir cateto 1: ");
    scanf("%ld", cateto_1);
    printf("Inserir cateto 2: ");
    scanf("%ld", cateto_2);

    int result = pitagoras(cateto_1, cateto_2);
    if (result == -1)
        printf("Invalid triangle");
    else 
        printf("Quadrado da hipotenusa = %ld", result);
}

int test_do_math() {
    printf("****************** TEST DO MATH operations *******************\n");

    UINT8 valid;
    int input_1 = 10;
    int input_2 = 20;
    OPERATION oper = SUM;
    int result = do_math(oper, input_1, input_2, &valid);
    if (valid)
        printf("%d + %d = %lu\n", input_1, input_2, result);
    else 
        printf("Invalid sum operation: %d + %d\n", input_1, input_2);

    oper = SUB;
    result = do_math(oper, input_1, input_2, &valid);
    if (valid)
        printf("%d - %d = %lu\n", input_1, input_2, result);
    else 
        printf("Invalid subtraction operation: %d - %d\n", input_1, input_2);

    oper = MUL;
    result = do_math(oper, input_1, input_2, &valid);
    if (valid)
        printf("%d * %d = %lu\n", input_1, input_2, result);
    else 
        printf("Invalid multiplication operation: %d * %d\n", input_1, input_2);

    oper = DIV;
    result = do_math(oper, input_1, input_2, &valid);
    if (valid)
        printf("%d / %d = %lu\n", input_1, input_2, result);
    else 
        printf("Invalid division operation: %d / %d\n", input_1, input_2);
}

/*int test_sum() {
    BOOLEAN sum_valid;
    int input_1;
    int input_2;

    printf("****************** SUM operations *******************\n");

    // Valid input_1 and input_2
    input_1 = 3;
    input_2 = 10;
    int result_sum = sum(input_1, input_2, &sum_valid);
    if (sum_valid)
        printf("%d + %d = %ld\n", input_1, input_2, result_sum);
    else 
        printf("Invalid sum operation: %d + %d\n", input_1, input_2);

    // Invalid input_1 and valid input_2
    input_1 = 201;
    input_2 = 10;
    result_sum = sum(input_1, input_2, &sum_valid);
    if (sum_valid)
        printf("%d + %d = %ld\n", input_1, input_2, result_sum);
    else 
        printf("Invalid sum operation: %d + %d\n", input_1, input_2);

    // Invalid input_1 and valid input_2
    input_1 = 10;
    input_2 = -1;
    result_sum = sum(input_1, input_2, &sum_valid);
    if (sum_valid)
       printf("%d + %d = %ld\n", input_1, input_2, result_sum);
    else 
        printf("Invalid sum operation: %d + %d\n", input_1, input_2);

    // Invalid input_1 and input_2
    input_1 = 201;
    input_2 = -1;
    result_sum = sum(input_1, input_2, &sum_valid);
    if (sum_valid)
        printf("%d + %d = %ld\n", input_1, input_2, result_sum);
    else 
        printf("Invalid sum operation: %d + %d\n", input_1, input_2);

    printf("\n");
}

int test_subtraction() {
    BOOLEAN subtraction_valid;
    int input_1;
    int input_2;

    printf("****************** SUBTRACTION operations *******************\n");
    // Valid input_1 and input_2
    input_1 = 13;
    input_2 = 10;
    int result_subtraction = subtraction(input_1, input_2, &subtraction_valid);
    if (subtraction_valid)
        printf("%d - %d = %ld\n", input_1, input_2, result_subtraction);
    else 
         printf("Invalid subtraction operation: %d - %d\n", input_1, input_2);

    // Invalid input_1 and valid input_2
    input_1 = 201;
    input_2 = 10;
    result_subtraction = subtraction(input_1, input_2, &subtraction_valid);
    if (subtraction_valid)
        printf("%d - %d = %ld\n", input_1, input_2, result_subtraction);
    else 
        printf("Invalid subtraction operation: %d - %d\n", input_1, input_2);
    
    // Invalid input_1 and valid input_2
    input_1 = 10;
    input_2 = -1;
    result_subtraction = subtraction(input_1, input_2, &subtraction_valid);
    if (subtraction_valid)
        printf("%d - %d = %ld\n", input_1, input_2, result_subtraction);
    else 
        printf("Invalid subtraction operation: %d - %d\n", input_1, input_2);

    // Invalid input_1 and input_2 
    input_1 = 201;
    input_2 = -1;
    result_subtraction = subtraction(input_1, input_2, &subtraction_valid);
    if (subtraction_valid)
        printf("%d - %d = %ld\n", input_1, input_2, result_subtraction);
    else 
        printf("Invalid subtraction operation: %d - %d\n", input_1, input_2);

    // Invalid input_1 < input_2 
    input_1 = 10;
    input_2 = 13;
    result_subtraction = subtraction(input_1, input_2, &subtraction_valid);
    if (subtraction_valid)
        printf("%d - %d = %ld\n", input_1, input_2, result_subtraction);
     else 
        printf("Invalid subtraction operation: %d - %d\n", input_1, input_2);

    printf("\n");
}

int test_multiplication() {
    BOOLEAN multiplication_valid;
    int input_1;
    int input_2;

    printf("****************** MULTIPLICATION operations *******************\n");
     // Valid input_1 and input_2
    input_1 = 3;
    input_2 = 10;
    int result_multiplication = multiplication(input_1, input_2, &multiplication_valid);
    if (multiplication_valid)
        printf("%d * %d = %ld\n", input_1, input_2, result_multiplication);
    else 
        printf("Invalid multiplication operation: %d * %d\n", input_1, input_2);
   
    // Invalid input_1 and valid input_2
    input_1 = 201;
    input_2 = 2;
    result_multiplication = multiplication(input_1, input_2, &multiplication_valid);
    if (multiplication_valid)
        printf("%d * %d = %ld\n", input_1, input_2, result_multiplication);
    else 
        printf("Invalid multiplication operation: %d * %d\n", input_1, input_2);
   
    // Valid input_1 and invalid input_2
    input_1 = 20;
    input_2 = -1;
    result_multiplication = multiplication(input_1, input_2, &multiplication_valid);
    if (multiplication_valid)
        printf("%d * %d = %ld\n", input_1, input_2, result_multiplication);
    else 
        printf("Invalid multiplication operation: %d * %d\n", input_1, input_2);

    // Invalid input_1 and input_2
    input_1 = 201;
    input_2 = -1;
    result_multiplication = multiplication(input_1, input_2, &multiplication_valid);
    if (multiplication_valid)
        printf("%d * %d = %ld\n", input_1, input_2, result_multiplication);
    else 
        printf("Invalid multiplication operation: %d * %d\n", input_1, input_2);

    printf("\n");
}

int test_division() {
    BOOLEAN division_valid;
    int input_1;
    int input_2;

    printf("****************** DIVISION operations *******************\n");
    // Valid input_1 and input_2
    input_1 = 13;
    input_2 = 10;
    int result_division = division(input_1, input_2, &division_valid);
    if (division_valid)
        printf("%d / %d = %ld\n", input_1, input_2, result_division);
    else 
        printf("Invalid division operation: %d / %d\n", input_1, input_2);

    // Valid input_1 and invalid input_2
    input_1 = 3;
    input_2 = 201;
    result_division = division(input_1, input_2, &division_valid);
    if (division_valid)
        printf("%d / %d = %ld\n", input_1, input_2, result_division);
    else 
        printf("Invalid division operation: %d / %d\n", input_1, input_2);

    // Invalid input_1 and valid input_2 
    input_1 = -1;
    input_2 = 100;
    result_division = division(input_1, input_2, &division_valid);
    if (division_valid)
        printf("%d / %d = %ld\n", input_1, input_2, result_division);
    else 
        printf("Invalid division operation: %d / %d\n", input_1, input_2);
    
    // Invalid input_1 and input_2
    input_1 = -1;
    input_2 = -2;
    result_division = division(input_1, input_2, &division_valid);
    if (division_valid)
        printf("%d / %d = %ld\n", input_1, input_2, result_division);
    else 
        printf("Invalid division operation: %d / %d\n", input_1, input_2);
    
    printf("\n");
}*/