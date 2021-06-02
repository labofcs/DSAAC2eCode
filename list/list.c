#include "list.h"
#include <stdlib.h>
#include "fatal.h"

/* Place in the interface file */
struct Node
{
    ElementType Element;
    Position    Next;
};

int IsEmpty( List L )
{
    return (L->Next == NULL);
}

/* 此处假设线性表非空 */
int IsLast( Position P, List L )
{
    return(P->Next == NULL);
}
/* 此处的List为带表头的即表头的DATA域为空*/
Position Find( ElementType X, List L )
{
    Position tmp = L->Next;
    while ((tmp->Next != NULL) && (tmp->Element != X)) {
        tmp = tmp->Next;
    }
    
}
