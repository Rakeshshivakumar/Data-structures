#ifndef MMB_H_INCLUDED
#define MMB_H_INCLUDED
#include "sdtint.h"
typedef struct customer Customer;
struct customer {
    char *name;
    char *joint_name;
    uint32_t age[10];
    char *pan;
    char *acc_type;
    uint32_t phone[15];
    uint32_t initial_depo[20];

};

//operations//
Slist slist_new();
Slist* credit();
Slist* debit();
int32_t balance();
int32_t count_credit_debit();
int32_t count_cust();


typedef struct customer_node Node;

struct customer_node {
    Cust data;
    Node *next;
};

typedef struct slist Slist;
struct slist
{
    Node *head;
    Node *tail;
    uint32_t length;
};



#endif // MMB_H_INCLUDED
