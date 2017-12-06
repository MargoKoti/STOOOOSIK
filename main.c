#include "stack.h"

int main (void)

{
  struct Stack x1;
  struct Stack *y1=&x1;
  struct Stack x2;
  int i,k;
  printf("Co masz do wyboru:\n");
  printf("1.Init\n");
  printf("2.Destroy\n");
  printf("3.Clear\n");
  printf("4.Push\n");
  printf("5.Pop\n");
  printf("6.IsEmpty\n");
  printf("7.Koniec programu\n");
  do {
  printf("Powiedz mi co chcesz zrobic?\n");
  scanf("%d",&i);
  switch(i)
  {
    case 1:
    init(y1);
    printf("Rozpoczęto pracę na stosie\n");
    break;
    case 2:
    destroy(y1);
    printf("Zniszczyles stos :(\n");
    break;
    case 3:
    clear(y1);
    printf("Oczysciles stos \n");
    break;
    case 4:
    printf("wprowadz wartosc na stos\n");
    scanf("%d", &k);
    push(y1,k);
    break;
    case 5:
    printf("Zdjeto ze stosu: %d\n", pop(y1));
				break;
    case 6:
    if (isEmpty(y1)) {
					printf("Ten stos jest pusty\n");
				} else {
					printf("Ten stos nie jest pusty\n");
				}
				break;
    case 7:
    printf("Zakonczenie programu!");
				destroy(y1);
				break;
        default:printf("wprowadzono zla wartosc!\n");
  }
} while(i !=0);


  init(&x1);
  init(&x2);
  push(&x1,1);
  push(&x1,2);
  push(&x1,3);
  push(&x2,5);
  push(&x2,6);
  printf("%d %d\n",pop(&x1),pop(&x2));
  printf("%d\n",pop(&x1));
  destroy(&x1);
  destroy(&x2);
  return 0;
}
