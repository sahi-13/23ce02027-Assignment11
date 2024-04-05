#include<stdio.h>
#include<stdlib.h>
#include<string.h>


char stack[100];
int top=-1;

void push(char x){
    if (top==99){
        printf("Overflow!\n");
        return;
    }
    top++;
    stack[top]=x;
}

char pop(){
    if(top==-1){
        printf("Empty stack\n");
        return '\0';
    }
    char x=stack[top];
    top--;
    return x;
}

int main(){
    char text[100];
    printf("Input a string:");
    fgets(text,100,stdin);
    text[strcspn(text,"\n")]='\0';
     int len=strlen(text);
     for(int i=0;i<len;i++){
        push(text[i]);
     }
     for (int i=0;i<len;i++){
        text[i]=pop();
     } 
     printf("Reverse string:%s",text);
}