// 12S25057 - Dian Petrus Panjaitan

#include <stdio.h>
#include <string.h>

struct Alihgiji {
    int level;
};

int main(int _argv, char **_argc) {
    struct Alihgiji menu;

    scanf("%d", &menu.level);

    switch (menu.level) {
        case 5:
            printf("milk\n");
        case 4:
            printf("fruits\n");
        case 3:
            printf("vegetables\n");
        case 2:
            printf("side dishes\n");
        case 1:
            printf("staple food\n");
    }

    switch (menu.level) {
        case 1:
            printf("you need side dishes\n");
            break;
        case 2:
            printf("you need vegetables\n");
            break;
        case 3:
            printf("good\n");
            break;
        case 4:
            printf("very good\n");
            break;
        case 5:
            printf("perfect\n");
            break;
    }

    return 0;
}