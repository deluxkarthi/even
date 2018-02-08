# include <stdio.h>
# include <conio.h>
int main() 
{ 
 int i, m, d ; 
 clrscr() ; 
 printf("Enter the limit : ") ; 
 scanf("%d", &m) ; 
 printf("\nEnter the number : ") ; 
 scanf("%d", &d) ; 
 printf("\nThe numbers divisible by %d are :\n\n", d) ; 
 for(i = 1 ; i <= m ; i++) 
  if(i % d == 0) 
   printf("%d\t", i) ; 
 return0; 
}
}
