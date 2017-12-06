#ifndef STACK_H
#define STACK_H
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

struct Stack{
	int wierz, *cos, N;

};

void init(struct Stack* s);
void destroy(struct Stack* s);
void push( struct Stack* s,int element);
int pop(struct Stack* s );
void clear(struct Stack* s);
int isEmpty(struct Stack* s);
#endif
