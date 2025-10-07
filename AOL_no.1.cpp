#include <stdio.h>
#include <string.h>

void reverseAndInvertCapitalize(char *str){
    int length = strlen(str);

    // Melakukan reversing pada string
    for (int i = 0; i < length / 2; i++){
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    // Melakukan invert capital pada setiap karakter
    for (int i = 0; i < length; i++){
        if (str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 'a' + 'A'; // Mengonversi huruf kecil menjadi huruf besar
        }else if (str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] - 'A' + 'a'; // Mengonversi huruf besar menjadi huruf kecil
        }
    }
}

int main(){
    char input[101]; // panjang maksimum string input

    // Input string
    printf("Input a String: ");
    scanf("%s", input);
    
    // Memeriksa apakah panjang string input sesuai dengan batasan yang diberikan atau tidak, kalo tidak dia bakalan print Error
    if (strlen(input) < 1 || strlen(input) > 100){
        printf("Error.\n");
        return 1;
    }

    // Melakukan konversi string
    reverseAndInvertCapitalize(input);

    // Menampilkan hasil dari inputan 
    printf("After Reversing: %s\n", input);

    return 0;
}

