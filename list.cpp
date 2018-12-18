#include <stdlib.h>
#include "list.h"

struct _node{
  void* data;
  Node* next;
};

struct _list{
  Node* _head;
};

List* list_create(){
  List* list = (List *)malloc(sizeof(struct _list));
  return list;
}


void list_delete(List *list){

}

void list_add(List *list, void *data){
  Node newNode = (Node)malloc(sizeof(Node));
  if (list._head == NULL) {
    list->_head = newNode;
  }
  Node curr = list._head;

  while (curr.next != NULL) {
    curr = cur.next;
  }
  curr.next = newNode;
}

void list_insert_after(Node *node, void *data){

}


Node* list_get_first(List *list){
  return list._head;
}



Node* list_get_next(Node *node){

}

void* list_get_data(Node *node){
  return 0;
}
