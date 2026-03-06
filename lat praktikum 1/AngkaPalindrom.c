#include <stdio.h>

int main(){
    int angka;
    scanf("%d", &angka);

    int pangkatMax = 0;
    int temp = angka;
    while(temp >= 10){
        temp /= 10;
        pangkatMax++;
    }
    //printf("%d \n", pangkatMax);
    int pangkatKiri = pangkatMax;
    int pangkatKanan = 0;
    int palindrom = 1;
    
    while(pangkatKiri > pangkatKanan){
        int checkKiri = 1, checkKanan = 1;
        int tempKiri = pangkatKiri, tempKanan = pangkatKanan;
        while(tempKiri > 0){
            checkKiri *= 10;
            tempKiri--;
        }
        while(tempKanan > 0){
            checkKanan *= 10;
            tempKanan--;
        }
        if(((angka %(checkKiri * 10))/checkKiri) != ((angka %(checkKanan * 10))/checkKanan)){
            //printf("%d %d\n", ((angka %(checkKiri * 10))/checkKiri), ((angka %(checkKanan * 10))/checkKanan));
            palindrom = 0;
            break;
        }
        pangkatKiri--;
        pangkatKanan++;
    }

    printf("%d", palindrom);

}