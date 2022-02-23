// Selection Sort // 
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int N ;
    scanf("%d",&N) ;
    int* arr ;
    arr = (int*)malloc(sizeof(int)*N) ;
    int i, j , min ,index,temp ;
    for( i = 0 ; i < N ; i ++)
    {
        scanf("%d",&arr[i]) ;
    }
    for( i = N - 1 ; i > 0 ; i--)
    {
        for( j = 0 ; j < i ; j ++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j] ;
                arr[j] = arr[j+1] ;
                arr[j+1] = temp ;
            }
        }
    }
    for( i = 0 ; i < N ; i ++)
    {
        printf("%d\n",arr[i]) ;
    }
    free(arr) ;
    return 0 ;
}
