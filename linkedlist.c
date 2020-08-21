#include <stdio.h>

struct  list_element{
    int* data;
    struct list_element* next;
};



 
struct list_element head;
struct list_element sec;



int main(){
  
    char words[30];
    printf("Type any thing");
    fge(words, sizeof(words), stdin );

    
    sec.data = words;
    sec.next = NULL;
    
    head.data = words;
    head.next = &sec;
    
   
    
    
    struct list_element* current = &head;

    while (current !=NULL)
    {
       puts( (const char*)current->data);
       current = current->next;
    }
    
    
    

   
    

    return 0;
}