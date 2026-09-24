#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MONSTER_NAME_LEN 30
#define MAX_ELEMENT_LEN 30

typedef struct monster{
    char * name;
    char element [MAX_ELEMENT_LEN + 1];
}monster;

typedef struct constraint{
    char command[30];
    // position is 1 based index is 0
    int first_monster_index;
    
    int second_monster_index;

    char first_element[30];
    char second_element[30];

}constraint;


monster monsters [12];
constraint constraints [30];


void constraint_permutation(int perm[], int used[], int k, int monsterCount){
    

}


int main (void){

    int monsterCount;
    scanf("%d", &monsterCount);

    for (int i = 0; i < monsterCount; i++){
        char tempName[MAX_MONSTER_NAME_LEN + 1];
        scanf("%30s, %30s", tempName, monsters[i].element);
        // Mallocing string space for each monster name
        monsters[i].name = malloc((strlen(tempName) + 1)* sizeof(char));
        strcpy(monsters[i].name, tempName);
    }

    
    int constraintCount;
    scanf("%d", &constraintCount);
    for (int i = 0; i < constraintCount; i++){
        // read constraints 
        
    }



    // Freeing each DMA monster name
    for (int i = 0; i < monsterCount; i++){
        free(monsters[i].name);
    }
    return 0;
}