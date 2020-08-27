#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cs50.h>
#include <ctype.h>

int main(int argc, char *argv[])
{

    
    if (argc != 2 || atoi(argv[1]) < 0) //2 den fazla ve negatif argüman olması durumu
    {
        printf("Usage: ./caesar key");
        return 1;
    }

    int k = atoi(argv[1]); // k: anahtar
    string p = get_string("plaintext:"); //p: acik metin
    printf("ciphertext: "); // c: kripto metin olsun
    
    //Algoritmamiz : c(i) = (p(i) + k) % 26
    //Buradaki 26 ingilizcedeki harf sayisindan gelmektedir.
   
    for (int i = 0, n = strlen(p) ; i < n; i++)
        {
           
            if (p[i] >= 'a' && p[i] <= 'z') //kucuk harf kontrolu
            {
                printf("%c", (((p[i] - 'a') + k) % 26) + 'a'); //kucuk harfin cevirimi - yazilmasi
            }
            else if (p[i] >= 'A' && p[i] <= 'Z') //buyukk harf kontrolu
            {
                printf("%c", (((p[i] - 'A') + k) % 26) + 'A'); //buyuk harfin cevirimi - yazilmasi
            }

            else

            {
                printf("%c", p[i]);
            }
        }

        printf("\n");
    
    return 0;
}


