#include<stdio.h>
#include<math.h>

int main(int argc, char *argv[]){
int t;
for (t=0;;t++)
putchar(t * ((t>>12|t>>8)&63&t>>4));
}
