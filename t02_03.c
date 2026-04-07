
// 12S25057 - Dian Petrus Panjaitan 

#include <stdio.h>
#include <stdio.h>

int main(int _argv, char **_argc) {
    char op;
    int num;
    int result = 0;
    int i;

    scanf(" %c", &op);
    printf("%c\n", op);

    if (op == '*') {
        result = 1;
    }

    for (i = 0; i < 4; i++) {
        scanf("%d", &num);
        printf("%d\n", num);

        if (num == -1) {
            printf("0\n");
            break;
        }

        if (op == '+') {
            result += num;
        } else if (op == '-') {
            result -= num;
        } else if (op == '*') {
            result *= num;
        }

        printf("%d\n", result);
    }

    return 0;
}