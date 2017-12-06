#include "stack.h"

void init(struct Stack* s)
{
	s->wierz = 0;
	s ->N =1;
	s->cos =0;
	s->cos=(int*) malloc(s->N*sizeof(int));


}

void destroy(struct Stack* s) {
  free(s->cos);
  s->cos = 0;
}

void clear(struct Stack* s) {
  s->wierz=0;
}

void push(struct Stack* s, int x) {
  if (s->wierz>=s->N)
  {
    int noweN = ((s->N+1)*2);
    int* nowecos=(int*)realloc(s->cos,noweN*sizeof(int));
    if (nowecos)
	{
      s->cos=nowecos;
    }
	else
	{
      free(s->cos);
      abort();
    }
    fprintf(stderr, "\nRozmiar stosu: %d -> %d\n",s->N, noweN);
    s->N=noweN;
  }
  s->cos[s->wierz++]=x;
}

int pop(struct Stack* s) {
  assert(s->wierz>0);
  return s->cos[--s->wierz];
}

int isEmpty(struct Stack* s) {
  if (s->wierz==0) {
    return 1;
  }
    return 0;
}
