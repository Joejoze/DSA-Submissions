#include<stdio.h> 
int square (int n){
int root = 0;
while (root * root <n) {
root++;
} 
return root*root == n;
}
int fibo (int num) {
return square (5*num*num +4) || square (5*num*num -4);
}
int main() {
int number;

printf("Enter a number to check if its a part of fibonacci series \n");
scanf("%d",&number);

if(fibo(number)) {
printf("%d is a fibonacci number \n",number);
} 
else{
printf("%d is not a fibonacci number \n",number);
}
}

