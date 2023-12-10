//
//  main.c
//  exercise_14
//
//  Created by 추서연 on 2023/12/10.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char *pc = NULL;
    int i = 0;

    pc = (char*)malloc(100*sizeof(char));
    if(pc == NULL){
        printf("¸Þ¸ð¸® ÇÒ´ç ¿À·ù\n");
        exit(1);
    }

    for(i=0;i<26;i++){
        pc[i] = 'a'+i;
    }
    pc[i] = 0;
    printf("%s\n",pc);
    free(pc);
    return 0;
}
