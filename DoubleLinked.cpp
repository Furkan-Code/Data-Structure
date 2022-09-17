#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
  struct Node *prev;
  int data;
  struct Node *next;
}*first = NULL;
void create(int A[], int n)
{
  struct Node *t, *last;
  int i;
  first =(struct Node*) malloc(sizeof(struct Node));
  first->data=A[0];
  first->prev=first->next=NULL;
  last=first;
  for(i=1; i <n; i++)
  {
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=A[i];
    t->next=last->next;
    t->prev=last;
    last->next=t;
    last=t;
  }
}
void Display(struct Node *p)
{
  while(p)
  {
    printf("%d ", p->data);
    p=p->next;
  }
  printf("\n");
}

int main() {
  int A[]={10,20,30,40,50};
  create(A,5);
  
  Display(first);

  return 0;
}
