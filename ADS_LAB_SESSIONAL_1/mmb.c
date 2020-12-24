#include<stdio.h>
#include<string.h>
#include <stdint.h>
#include "MMB.h"
#include<assert.h>



Slist slist_new()
{
    Slist s1 = {NULL,NULL,0};
    return s1;
}
uint32_t count_cust(const Slist *list){
    assert(list != NULL);
    return list->length;
}

static Node* get_new_node(char32_t *name,char32_t joint_name,int32_t age,char32_t *pan,char32_t *acc_type,char32_t *phone,int32_t initial_depo)
{

        Node newnode = (Node)malloc(sizeof(Node));
        if (strcmp(acc_type,"SB")==0 && initial_depo >= 2000){
        newnode->data.name = name;
        newnode->data.joint_name = "";
        newnode->data.age = age;
        newnode->data.pan = pan;
        newnode->data.acc_type = acc_type;
        newnode->data.phone = phone;
        newnode->data.initial_depo = initial_depo;
        newnode->next = NULL;
        }
        return newnode;
}

Slist* open_acc(Slist *list,char32_t *name,char32_t *joint_name,int32_t age,char32_t *pan,char32_t *acc_type,char32_t *phone,int32_t initial_depo){
    assert(list != NULL);
    Node* newnode = get_new_node(name,joint_name,age,pan,acc_type,phone,initial_depo);

    newnode->next = list->head;
    list->head=newnode;

    if(list->tail == NULL)
    {
        list->tail = newnode;
    }
    ++list->length;

    assert( (list->length == 1 && list->head == list->tail) ||
            (list->length > 1 && list->head != list->tail)
          );

    return list;

}
