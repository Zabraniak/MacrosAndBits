#include "defs.h"

CREATE_ENUM()
CREATE_LOGIC()
CREATE_DELAY()

int main(void) {
    delay.tv_nsec = 200000000;
    printf("Provide an int number:\n");
    int number = 0;
    int test = scanf("%d", &number);
    if (test != 1) {
        printf("Invalid number\n");
        return 1;
    }
    char c = getchar();
    if(c != '\n') {
        printf("Invalid input\n");
        return 1;
    }
    enum logic status = TRUE;
    while (status) {
        CREATE_SPACER()
        printf("# Macros for bits menu #\n");
        CREATE_MENU()
        printf("Enter option:\n");
        int option = 0;
        test = scanf("%d", &option);
        if (test != 1) {
            printf("Invalid option\n");
            continue;
        }
        CREATE_SPACER()
        int bit;
        switch (option) {
            case EXIT:
                status = FALSE;
                break;
            case TOGGLE_BIT:
                GET_BIT_AND_CHECK(TOGGLE BIT)
                SHOW_BITS(number)
                TOGGLE_BIT(number, bit)
                SHOW_BITS(number)
                break;
            case SET_BIT:
                GET_BIT_AND_CHECK(SET BIT)
                SHOW_BITS(number)
                SET_BIT(number, bit)
                SHOW_BITS(number)
                break;
            case CLEAR_BIT:
                GET_BIT_AND_CHECK(CLEAR BIT)
                SHOW_BITS(number)
                CLEAR_BIT(number, bit)
                SHOW_BITS(number)
                break;
            case SHOW_BITS:
                SHOW_BITS(number)
                break;
            case SHOW_NUMBER:
                SHOW_NUMBER(number)
                break;
            default:
                printf("Invalid option\n");
                break;
        }
    }
    return 0;
}
