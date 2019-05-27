#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char *argv[]){
        int bou = 0;
        if(argv[1] == NULL){
                bou = 1;
        }else{
                bou = atoi(argv[1]);
        }

        printf("にゃ");
        for(int i = 0;i < bou;i++){
                printf("ー");
        }
        printf("ん\n");
        return 0;
}
