#include <stdio.h>

int number = 10 ;
int data[10] = {1,10,5,8,7,6,4,3,2,9} ;

void show()
{
    int i ;
    for( i = 0 ; i < number ; i ++)
    {
        printf("%d ",data[i]) ;
    }
}

void quickSort(int* data,int start,int end)
{
    if(start >= end)
    {
        return;
    }

    int key = start ;
    int i = start + 1 ;
    int j = end ; 
    int temp = 0 ;

    while( i <= j )
    {
        while((i <= end) && (data[i] <= data[key]))
        {
            i ++ ;
        }
        while((j > start ) && (data[j] >= data[key]))
        {
            j -- ;
        }
        if(i > j)
        {
            temp = data[j] ;
            data[j] = data[key] ;
            data[key] =temp ;
        }
        else
        {
            temp = data[j] ;
            data[j] = data[i] ;
            data[i] = temp ;
        }
    }
    show() ;
    printf("\n") ;
    quickSort(data,start,j-1) ;
    quickSort(data,j+1,end) ;
}

int main(void)
{
    quickSort(data,0,number - 1) ;
    show() ;
    return 0 ;
}
