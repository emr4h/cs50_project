#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

bool beNumber(char txt[],const int size); //sayi kontrol fonksiyonu

int main(int argc, string argv[])
{
 
    string k = argv[1]; //k: key(anahtar)
     if (argc != 2 || beNumber(argv[1],strlen(argv[1]))) //kullanıcının yanlıs girdi kontrolleri
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }
  
    string p = get_string("plaintext: "); // p: palintext(açık metin)
    printf("ciphertext: "); // c: kriptolanmış metin
    // Algoritmamız: c(i) = (p(i) + k(j)) % 26
    if (p != NULL)
    {
        
        for (int i = 0, j = 0, n = strlen(p); i < n; i++, j++)
        {
            if (j > strlen(k) - 1)
            {
                j = 0;
            }
                int c = 0;
               
                if (isupper(p[i]))
                {
                    c = (((p[i] - 'A') + (tolower(k[j]) - 'a'))%26) + 'A';
                    printf("%c", (char)c);
                }
                else if (islower(p[i]))
                {
                    c = (((p[i] - 'a') + (tolower(k[j]) - 'a'))%26) + 'a';
                    printf("%c", (char)c);
                }
                else
                {
                    printf("%c", p[i]);
                    j--;
                }
            }
        }
        printf("\n");
    
    return 0;
}
bool beNumber(char txt[],const int size) // sayi kontrol fonksiyonu
{
    for (int i = 0 ; i < size ; i++)
    {
        if (txt[i] >= '0' && txt[i] <= '9')
        {
            return true;
        }
    }
    return false;
}
        


