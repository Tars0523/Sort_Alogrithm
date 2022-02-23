#include <stdio.h>

int main(void)
{
    int i,j,temp ;
    int arr[10] = {10,1,2,3,4,5,7,6,9,8} ;
    for( i =  0 ; i < 10 ; i ++)
    {
        j = i ;
        while(1)
        {
            if(arr[j]<arr[j+1])
            {
                break ;
            }
            else
            {
            	temp = arr[j] ;
               arr[j] = arr[j+1] ;
               arr[j+1] = temp ;
               j-- ;	
				}
            
        }
    }
    
    for(i = 0 ; i < 10 ; i++)
    {
        printf("%d ",arr[i]) ;
    }

    return 0 ;
}
