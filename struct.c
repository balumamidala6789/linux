structures using arrays of 4 employee details

#include<stdio.h>
struct employee{
    char eno[5];
    char ename[10];
};
typedef struct employee emp;
emp emply[4];
void main(){
 
 for(int i=0;i<4;i++){
    scanf("%s",emply[i].eno);
    scanf("%s",emply[i].ename);
}
for(int i=0;i<4;i++){
    printf("%s",emply[i].eno);
    printf("%s",emply[i].ename);
}
}
