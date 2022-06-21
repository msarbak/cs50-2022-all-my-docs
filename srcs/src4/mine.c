#include <stdio.h>
#include <cs50.h>

int main(void) {

    int n = 50;
    printf("\nn: %i\n",n);
    printf("\nn'in adresi: %p\n",&n);

    int *p = &n;
    printf("\np pointeri yani gösterdiginin adresi: %p\n", p); //pointer p'yi bas, p n'nin  adresi tutuyor
    printf("\np pointerinin gösterdigi deger: %i\n", *p); //pointer p nin işaret ettigi degeri yaz

    string s = "MEHMET";
    printf("\n%s\n",s);
}