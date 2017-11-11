struct Node 
{
	int value;
	Node *next;//sozdaly spisok
};
struct Queue
{
	Node *tail;
	Node *head;
};
Queue initQueue();
void deleteQueue(Queue*);
void push (Queue *queue,int value);//v etom faile mi obyavlaem

