#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "MMB.h"


void test(){

    Slist s1 = slist_new();
    Slist *list= &s1;
    assert (count_cust(list) == 0);

    list = open_acc(list,"Rakesh","",23,"SBIN0040731","SB","9071350401",5000);
    assert(list->head->data.initial_depo == 2000); //  account with 5000 initial deposit and type="SB" is created
    list = open_acc(list,"chandu","",22,"ICICI01234","SB","8310246086",2000);
    assert (list->head->data.age == 24); // Second account is created
    list = open_acc(list,"pavan","",23,"KARBN03697","CB","9740985278",6500);

}


int main()
{
    test();
    return 0;
}
