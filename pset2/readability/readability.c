#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    string text = get_string("Text: ");
    printf("%s\n",text);
    //kullanicidan text bilgisini aldik

    int letters = 0;
    for(int i = 0; i < strlen(text); i++) {
        if (  (text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z') ) letters++;
    }
    printf("%i letters\n",letters);

    //text deki harf sayisini hesapladik

    int words = 1;
    for(int i = 0; i < strlen(text); i++) {
        if ( text[i] == ' ') words++;
    }
    printf("%i words\n",words);

    //text deki kelime sayisini  bosluk referansi ile hesapladik

    int sentences = 0;
    for(int i = 0; i < strlen(text); i++) {
        if ( text[i] == '.' || text[i] == '!' || text[i] == '?') sentences++;
    }
    printf("%i sentences\n",sentences);

    //text deki nokta unlem soru isaretlerinin sayisini  bosluk referansi ile hesapladik

    //coleman liau
    float hesap = (0.0588 * letters / words * 100) - (0.296 * sentences / words * 100) - 15.8;
    int index = round(hesap);

    if(index < 1) {
        printf("Before Grade 1\n");
        return 0;
    }
    else if(index >= 16) {
        printf("Grade 16+\n");
        return 0;
    }
    else{
        printf("Grade %i\n",index);
        return 0;
    }
}