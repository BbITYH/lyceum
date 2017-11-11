#include <stdio.h> 
#include "queue.h"

Queue initQueue()
{
	Queue queue;
	queue.head=NULL;
	queue.tail=NULL;
	return queue;
}
void deleteQueue(Queue*);
void push (Queue *queue,int value)
{
	Node* node = new Node();//sozdali novuu zapic node(eto zerno)
	node->value = value;
	node->next = NULL;
	if(queue->head == NULL);
	{
		queue->tail = queue->head = node;
	}
	else
	{	
		queue->tail->next = node;
		queue->tail = node;
		
	}
}


