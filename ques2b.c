//  calculate the volume of a cylinder given its radius and height.

#include <stdio.h>
int main(){
    float radius, height, volume;
    printf("Enter the radius of cyclinder: ");
    scanf("%f",&radius);
    printf("Enter the height of cyclinder: ");
    scanf("%f", &height);
    volume = 3.14*radius*radius*height;
    printf("Volume of cyclinder is: %f",volume);
    return 0;    
}
