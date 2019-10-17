#include <stdio.h>

int main(){
    int n = 0;
    printf("Enter number of values to find average of:");
    scanf("%i", &n);
    double sum = 0;
    int a = 0;
    printf("Enter the numbers:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &a);
        sum += a;
    }
    printf("Average of the given numbers is %.2f", (double)sum/n);

}