/*
    Date: 28/05/2019
    Author: Jay Lee
    Version: 1.0
    Purpose: To find the amount of weekly pay
*/
#include <stdio.h>
#include <stlib.h>
int Gcd(int x, int y){
    //hardcoding in arrays for divisors for both x and y
    int xdivisors[50] = {0};
    int ydivisors[50] = {0};
    int gcd;
    int xIndex = 0;
    int yIndex = 0;
    int i, j;
    
    //get the divisors for x
    for (i = 1; i <= x/2; i++){
        
        if (x%i==0){
            
            xdivisors[xIndex] = i;
            xIndex++;
            
            
            xdivisors[xIndex] = x/i;
            xIndex++;
            
            
        }
    }
    printf("\n");
    //get the divisors for y
    for (j = 1; j <= y/2; j++){
        
        if (y%j==0){
            ydivisors[yIndex] = j;
            yIndex++;
           
            
            ydivisors[yIndex] = y/j;
            yIndex++;
                
        }
    }

    //compare commone values in both x-divisors and y-divisors
    for (i = xIndex; i>=0; i--){
        for (j = yIndex;j>=0; j--){
            
            if (xdivisors[i] == ydivisors[j]){
                gcd = xdivisors[i];
                break;
            }
        }
    }
    return gcd;
}

int main(){
    printf("%d",Gcd(2,4));
    return 0;
}
