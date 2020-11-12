/* THIS IS A HEADER FILES THAT CONTAINS ALL THE STRUCTURES AND FUNCTION DECLARATION

     Author: RAKESH D S
     Reg no: 201051024
     Department: ME MACHINE LEARNING
*/


#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED
#include<stdint.h>


typedef struct _node_ Node;
typedef struct _slist_ Slist;


struct _node_{
int32_t data;
Node *next,*prev;
};


struct _slist_{
Node *head;
Node *tail;
uint32_t length;
};


Slist slist_new();
uint32_t slist_length(Slist *list);
uint32_t slist_lookup(Slist *list,int32_t key);
Slist* slist_add_tail(Slist *list,int32_t element);
Slist* slist_add_head(Slist *list,int32_t element);
Slist* slist_delete_tail(Slist *list);
Slist* slist_delete_head(Slist *list);
Slist* slist_display(Slist *list);


#endif // DLL_H_INCLUDED
