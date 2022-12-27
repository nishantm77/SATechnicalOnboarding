#include<stdio.h>
#include<math.h>

int main(void) {
    float a,b,c;
    float root1, root2;

    scanf("%f %f %f",&amp;a,&amp;b,&amp;c);

    root1 = (-b + sqrt(b*b-4*a*c))/(2*a);
    root2 = (-b - sqrt(b*b-4*a*c))/(2*a);

    printf("%8.1f %8.1f\n",root1,root2);
    return 0;
}


