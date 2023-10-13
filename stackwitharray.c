#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int count =0;
    struct stack{
        int array[MAX];
        int top;
    };
    typedef struct stack st;
void createstack(st*s){
    s->top=-1;
}

int isfull(st*s){
    if(s->top== MAX-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isempty(st*s){
    if (s->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(st*s,int item){

    if(isfull(s)){
        printf("Stack is full");
    }
    else{
        s->top++;
        s->array[s->top]=item;
    }
    count++;
}
void pop(st*s){
    if(isempty(s)){
        printf("Stack is Empty");
    }
    else{
        printf("Item deleted:%d",s->array[s->top]);
        s->top--;
    }
    count--;
    printf("\n");
}

void display(st*s){
    printf("Items:\n");
    for(int i=0;i<count;i++){
        printf("%d\n",s->array[i]);
    }
    printf("\n");
}
int main(){
    st*s=(st*)malloc(sizeof(st));
    createstack(s);
    push(s,4);
    push(s,5);
    push(s,6);
    push(s,7);
    display(s);
    pop(s);
    printf("\nAfter poping one item\n");
    display(s);

}