//
//  main.c
//  exercise_14
//
//  Created by 추서연 on 2023/12/10.
//

#include <stdio.h>
#include <stdlib.h>

struct Book{
    int number;
    char title[10];
};

int main(int argc, char *argv[]) {
    int i;
    struct Book **bookshelf;
    
    bookshelf = (struct Book**)malloc( 3*sizeof(struct Book*)); //구조체 포인터 변수 3개 할당
    for(i=0;i<3;i++)
        bookshelf[i] = (struct Book *)malloc(10*sizeof(struct Book));//구조체 10개 할당
    
    bookshelf[1][3].number = 5;
    strcpy(bookshelf[1][3].title, "C++Programming");
    
    (bookshelf[2]+4)->number = 3;
    strcpy((bookshelf[2]+4)->title,"Communications Theory") ;
    
    printf("book(1,3) : %i, %s\n", (bookshelf[1]+3)->number, (bookshelf[1]+3)->title);
    printf("book(2,4) : %i, %s\n", bookshelf[2][4].number,bookshelf[2][4].title);
    
    //구조체 포인터 3개가 각각 가리키는 주소 해제
    for(i=0;i<3;i++)
        free(bookshelf[i]);
    //구조체 이중 포인터가 가리키는 주소 해제
    free(bookshelf);
    
    
    return 0;
}
