#include<stdio.h>
#include<string.h>
#include<stdlib.h>
# define MAX 20
      char str[MAX],stack[MAX];
      int top=-1;
      void push(char c) //to push the character in to the stack
            {
               stack[++top]=c;
            }
      char pop()
            {
               return stack[top--];
            }
      void pre_post() //function to convert prefix to postfix
                  {
                     int n,i,j=0; char c[20];
                     char a;
                     printf("Enter the prefix expression\n");
                     gets(str); // used to scan the prefix expression
                     n=strlen(str);
                     for(i=0;i<MAX;i++)
                     stack[i]='\0';
                     printf("Postfix expression is:\t");
                     for(i=0;i<n;i++)
                     {
                        if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/') 
                        {
                           push(str[i]);  //pushing the operator
                        }
                        else
                        { c[j++]=str[i];
                          while((top!=-1)&&(stack[top]=='#'))
                          {
                              a=pop();
                               c[j++]=pop(); //poping to postfix 
                          }
                          push('#');
                        }
                     }
                     c[j]='\0';
                     printf("%s",c); //printing postfix expression
                  }
      int main() //main function
      {
          pre_post(); //function call
      }
