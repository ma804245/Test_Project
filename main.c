#include <stdio.h>

void master_function(void);
int test(void);

// 인사말을 출력하는 함수
void print_greeting(void) {
    printf("Hello, Git and GitHub!\n");
    printf("버전 관리 연습을 시작합니다.\n");
}

// 두 숫자를 더하는 함수
int add_numbers(int a, int b) {
    return a + b;
}

// 두 숫자를 빼는 함수
int minus_numbers(int a, int b) {
    return a - b;
}

int main(void) {
    print_greeting();
    
    int num1 = 10;
    int num2 = 20;
    int sum = add_numbers(num1, num2);
    
    printf("%d + %d = %d\n", num1, num2, sum);
    
    int min = minus_numbers(num1, num2);
    printf("%d - %d = %d\n", num1, num2, min);

    master_function();
    
    test();
    test2();
    
    return 0;
}


int test(void) {
    printf("테스트 함수입니다.\n");
    return 0;
}

int test2(void) {
    printf("테스트2 함수입니다.\n");
    return 0;
}



void master_function(void) {
    printf("This is the master branch function.\n");
}