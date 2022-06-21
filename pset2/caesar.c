#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

https://www.youtube.com/watch?v=-RCUNVWmYMc

int main(int argc, string argv[]) {
    //kullanim kontrolu yapiyoruz, tek bir parametre almasi gerekiyor
    if(argc != 2) {
        printf("Bu sekilde kullanin: ./caesar key\n");
        return 1;
    }
    //else printf("Basarili Giris\n");

    //./caesar argv[0], key argv[1]

    //key tanimlamasi
    string key = argv[1];
    //girilen key'in kac haneli oldugunu tespit edelim
    for(int i = 0; i < strlen(argv[1]); i++) {
        if (!isdigit(argv[1][i])) {
            printf("Bu sekilde kullanin: ./caesar key\n");
            return 1;
        }
    }

    //kontrol
    //printf("Basarili Giris\n%s\n",key);

    //kullanicidan standart yaziyi alalim
    string yazi = get_string("Sifrelemek istediginiz yaziyi giriniz:  ");

    // key -> int donusumu

    int k = atoi(key);
    printf("sifreli metin: ");

    //sifreli metini hazirlayalim
    for(int i = 0; i < strlen(yazi); i++) {
        if(isupper(yazi[i])) {
            printf("%c",(((yazi[i] - 65) + k) % 26) + 65);
        }
        else if(islower(yazi[i])) {
            printf("%c",(((yazi[i] - 97) + k) % 26) + 97);
        }

        else{
            printf("%c",yazi[i]);
        }
    }

    printf("\n");

}
