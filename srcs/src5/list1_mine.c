#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *list = malloc(3 * sizeof(int));
    if(list == NULL) {
        return 1;
    }

    list[0] = 10;
    list[1] = 20;
    list[2] = 30;

    for(int i = 0; i < 3; i++) {
        printf("%i\n", list[i]);
    }

    printf("##############\n");
    int *tmp = malloc(4 * sizeof(int));
    if(tmp == NULL) {
        free(list);
        return 1;
    }

    for(int i =0; i < 3; i++) {
        tmp[i] = list[i];
    }

    tmp[3] = 40;

    free(list);

    list = tmp;// list size 4 oldu

    for(int i = 0; i < 4; i++) {
        printf("%i\n",list[i]);
    }
    free(list);
    return 0;
}