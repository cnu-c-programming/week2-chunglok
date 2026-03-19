#include <stdio.h>

int main()
{
    int a, i;
    scanf("%d", &a);
    if(a == 1){
        printf("false");
    }
    else if(a == 2 || a == 3){
        printf("true");
    }else{
        for(i = 2; i < a/2; i++){
            if(a % i == 0){
                printf("false");
                break;
            }
            else if (i == a/2 - 1){
                printf("true");
                break;
            }
        }
    }
    return 0;
}

