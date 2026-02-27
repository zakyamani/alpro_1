#include <stdio.h>

int main(){
    int choice_1;
    int choice_2;
    int score_1 = 0;
    int score_2 = 0;

    while(score_1 < 3 && score_2 < 3){
        printf("--SKOR SEMENTARA--\nPLAYER 1: %d\nPLAYER 2: %d", score_1, score_2);
        printf("\n");
        printf("Pilihan Player 1 (1: Rock, 2: Paper, 3: Scissors): ");
        scanf("%d", &choice_1);
        printf("Pilihan Player 2 (1: Rock, 2: Paper, 3: Scissors): ");
        scanf("%d", &choice_2);

        if((choice_1 == 1 && choice_2 == 3) || (choice_1 == 2 && choice_2 == 1) || (choice_1 == 3 && choice_2 == 2)){
            score_1++;
            printf("\nPLAYER 1 MENDAPATKAN SKOR");
        }else if((choice_1 == 3 && choice_2 == 1) || (choice_1 == 1 && choice_2 == 2) || (choice_1 == 2 && choice_2 == 3)){
            score_2++;
            printf("\nPLAYER 2 MENDAPATKAN SKOR");
        }else{
            printf("\nSERI");
        }
        printf("\n");
    }

    if(score_1 == 3){
        printf("\nPLAYER 1 MENANG!");
    }else{
        printf("\nPLAYER 2 MENANG!");
    }


}