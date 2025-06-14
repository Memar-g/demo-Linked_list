#include<iostream>

using namespace std;



struct Node{
    string name;
    //int id;
    Node *next;
    Node *prv;
};
Node *head=nullptr;
void single_link();
void Insert();
void Delete();
void insert_at_the_beg(string name);
void insert_at_any(string name);
void insert_at_the_end(string name);
void  delete_first();
void delete_any();
void delete_last();
void double_link();
void Double_Insert();
void Double_insert_at_the_beg(string name);
void Double_insert_at_any(string name);
void Double_insert_at_the_end(string name);
void Double_Delete();
void Double_delete_first();
void Double_delete_any();
void Double_delete_last();
void circular();
void single_circular();
void single_circular_insert();
void single_circular_insert_at_the_beg(string name);
void single_circular_insert_at_any(string name);
void single_circular_insert_at_the_end(string name);
void single_circular_delete();
void single_circular_delete_first();
void single_circular_delete_any();
void single_circular_delete_last();
void double_circular();
void double_circular_insert();
void double_circular_insert_at_the_beg(string name);
void double_circular_insert_at_any(string name);
void double_circular_insert_at_the_end(string name);
void double_circular_delete();
void double_circular_delete_first();
void double_circular_delete_any();
void double_circular_delete_last();

void Display();
void cDisplay();
int main(){
    char ch;


    cout<< "Linked list"<<endl;
    cout<< "1.single Linked list"<<endl;
    cout<< "2.double Linked list"<<endl;
    cout<< "3.circular Linked list"<<endl;
    cin>>ch;
    cout<<endl;
    switch(ch){
    case '1':{
        single_link();

        break;
    }
    case '2':{
        double_link();
        break;
    }
    case '3':{
        circular();
        break;
    }

    }

}
void single_link(){
    char ch;
    cout<< "1.to insert"<<endl;
    cout<< "2.to delete"<<endl;
    cin>>ch;
    cout<<endl;
    switch(ch){
        case '1':{
            Insert();
            Display();
            break;
        }
        case '2':{
            Delete();
            Display();
            break;
        }

    }




}
void Insert(){
    char ch;
    cout<< "1.insert at the beggining"<<endl;
    cout<< "2.insert at the anyPosition"<<endl;
    cout<< "3.insert at the end"<<endl;
    cin>>ch;
    cout<<endl;
    switch(ch)
    {
        case '1':{
            insert_at_the_beg("Rick");
            insert_at_the_beg("charlie");
            insert_at_the_beg("sophia");
            insert_at_the_beg("adkin");
            break;
        }
        case '2':{
            insert_at_the_beg("Rick");
            insert_at_the_beg("charlie");
            insert_at_the_beg("sophia");
            insert_at_the_beg("adkin");
            insert_at_any("abebe");
            break;
        }
        case '3':{
            insert_at_the_end("Rick");
            insert_at_the_end("charlie");
            insert_at_the_end("sophia");
            insert_at_the_end("adkin");
            insert_at_the_end("abebe");
            break;
        }
    }


}
void insert_at_the_beg(string x){
    Node *temp=new Node;
    temp->name=x;
    temp->next=NULL;
    if(head==NULL)
        head=temp;
    else{
        temp->next=head;
        head=temp;
    }



}
void insert_at_any(string x){

    Node* temp=new Node;
    temp->name=x;
    temp->next=NULL;
    cout<< "where do you want to insert it"<<endl;
    int c;
    cin>>c;
    if(c<=0||c>3)
        cout<< "out of bounds"<<endl;
    else
    {   Node *temp2=head;
        for(int i=0;i<c-1;i++){
            temp2=temp2->next;
        }
        temp->next=temp2->next;
        temp2->next=temp;
    }
}
void  insert_at_the_end(string x){
    Node *temp=new Node;
    temp->name=x;
    temp->next=NULL;
    if(head==NULL)
        head=temp;
    else{
        Node *temp1=head;
        while(temp1->next!=NULL){
         temp1=temp1->next;
        }
        temp1->next=temp;
    }

}
void Delete(){
    char ch;
    cout<< "1.to remove the first value"<<endl;
    cout<< "2.to remove any value"<<endl;
    cout<< "3.to remove the last value"<<endl;
    cin>>ch;
    cout<<endl;
    switch(ch){
        case '1':{
            insert_at_the_end("Rick");
            insert_at_the_end("charlie");
            insert_at_the_end("sophia");
            insert_at_the_end("adkin");
            insert_at_the_end("abebe");
           delete_first();

            break;
        }
        case '2':{
            insert_at_the_end("Rick");
            insert_at_the_end("charlie");
            insert_at_the_end("sophia");
            insert_at_the_end("adkin");
            insert_at_the_end("abebe");
           delete_any();
            break;
        }
        case '3':{
            insert_at_the_end("Rick");
            insert_at_the_end("charlie");
            insert_at_the_end("sophia");
            insert_at_the_end("adkin");
            insert_at_the_end("abebe");
           delete_last();
            break;
        }
    }
}
void  delete_first(){
    Node* temp=head;
    if(head==NULL)
        cout<< "the list is empty"<<endl;
    else
        head=temp->next;
     delete temp;


}

void delete_any(){
    Node* temp=head;
    cout<< "which index of value you want remove"<<endl;
    int n;
    cin>>n;
    cout<<endl;
    if(head==NULL)
        cout<< "the list is empty";
    else{
    Node *temp1;

    for(int i=0;i<n;i++){
        temp1=temp;
        temp=temp->next;
    }
    temp1->next=temp->next;
    delete temp;
    }

}
void delete_last(){
    Node* temp=head;
    if(head==NULL)
        cout<< "the list is empty"<<endl;
    else{
            Node* temp1;
        while(temp->next!=NULL){
            temp1=temp;
            temp=temp->next;
        }
      temp1->next=NULL;
      delete temp;
    }
}
void double_link(){
    char ch;
    cout<< "1.to insert"<<endl;
    cout<< "2.to delete"<<endl;
    cin>>ch;
    cout<<endl;
    switch(ch){
        case '1':{
            Double_Insert();
            Display();
            break;
        }
        case '2':{
          Double_Delete();
          Display();
            break;
        }

    }
}
void Double_Insert(){
    char ch;
    cout<< "1.insert at the beggining(double)"<<endl;
    cout<< "2.insert at the anyPosition(double)"<<endl;
    cout<< "3.insert at the end(double)"<<endl;
    cin>>ch;
    cout<<endl;
    switch(ch)
    {
        case '1':{
            Double_insert_at_the_beg("Rick");
            Double_insert_at_the_beg("charlie");
            Double_insert_at_the_beg("sophia");
            Double_insert_at_the_beg("adkin");
            break;
        }
        case '2':{
            Double_insert_at_the_beg("Rick");
            Double_insert_at_the_beg("charlie");
            Double_insert_at_the_beg("sophia");
            Double_insert_at_the_beg("adkin");
            Double_insert_at_any("abebe");
            break;

     }
        case '3':{
            Double_insert_at_the_end("Rick");
            Double_insert_at_the_end("charlie");
            Double_insert_at_the_end("sophia");
            Double_insert_at_the_end("adkin");
            Double_insert_at_the_end("abebe");
            break;
        }
    }


}

void Double_insert_at_the_beg(string x){
    Node* temp=new Node;
    temp->name=x;
    temp->next=NULL;
    temp->prv=NULL;
    if(head==NULL)
        head=temp;
    else{
        temp->next=head;
        head->prv=temp;
        head=temp;

    }
}
void Double_insert_at_any(string x){
    Node* temp=new Node;
    temp->name=x;
    temp->next=NULL;
    temp->prv=NULL;
    cout<< "where do you want to add an element"<<endl;
    int n;
    cin>>n;
    cout<<endl;
    if(head==NULL)
        cout<< "empty list"<<endl;
    else{
    if(n<=0||n>3)
        cout<< "out of bounds"<<endl;
    else{
    Node* temp2=head;
    Node* temp1;
    for(int i=0;i<n;i++){
        temp1=temp2;
        temp2=temp2->next;
    }
    temp->next=temp2;
    temp->prv=temp2->prv;
    temp2->prv=temp;
    temp1->next=temp;
    }
    }
}
void Double_insert_at_the_end(string x){
    Node *temp=new Node;
    temp->name=x;
    temp->next=NULL;
    temp->prv=NULL;
    if(head==NULL)
        head=temp;
    else{
      Node* temp2=head;
        while(temp2->next!=NULL){
            temp2=temp2->next;
        }
        temp->prv=temp2;
        temp2->next=temp;
    }

}
void Double_Delete(){
     char ch;
    cout<< "1.to remove the first value(double)"<<endl;
    cout<< "2.to remove any value(double)"<<endl;
    cout<< "3.to remove the last value(double)"<<endl;
    cin>>ch;
    cout<<endl;
    switch(ch){
        case '1':{
            Double_insert_at_the_end("Rick");
            Double_insert_at_the_end("charlie");
            Double_insert_at_the_end("sophia");
            Double_insert_at_the_end("adkin");
            Double_insert_at_the_end("abebe");
           Double_delete_first();
            break;
        }
        case '2':{
            Double_insert_at_the_end("Rick");
            Double_insert_at_the_end("charlie");
            Double_insert_at_the_end("sophia");
            Double_insert_at_the_end("adkin");
            Double_insert_at_the_end("abebe");
          Double_delete_any();
            break;
        }
        case '3':{
            Double_insert_at_the_end("Rick");
            Double_insert_at_the_end("charlie");
            Double_insert_at_the_end("sophia");
            Double_insert_at_the_end("adkin");
            Double_insert_at_the_end("abebe");
           Double_delete_last();
            break;
        }
    }
}
void Double_delete_first(){
    Node *temp=head;
    if(head==NULL)
        cout<< "the list is empty"<<endl;
    else{
        head=head->next;
        delete temp;
    }
}
void Double_delete_any(){
    Node* temp=head;
    cout<< "which index of value you want to remove"<<endl;
    int n;
    cin>>n;
    cout<<endl;
    if(head==NULL)
        cout<< "the list is empty";
    else{
      if(n<=0||n>3)
      cout<< "out of bounds"<<endl;
      else{
            Node* temp1;
        for(int i=0;i<n;i++){
            temp1=temp;
            temp=temp->next;
        }
          Node* temp2=temp->next;
          temp1->next=temp2;
          temp2->prv=temp1;
        delete temp;
   // }
    }
}

}
void Double_delete_last(){
    Node* temp=head;
    if(head==NULL)
        cout<< "the list is empty";
    else{
            Node* temp1;
        while(temp->next!=NULL){
            temp1=temp;
            temp=temp->next;
        }
        temp1->next=NULL;
        delete temp;
    }


}
void circular(){
    char ch;
    cout<< "1.single circular linked list"<<endl;
    cout<< "2.double circular linked list"<<endl;
    cin>>ch;
    cout<<endl;
    switch(ch){
        case '1':{
            single_circular();
            break;
        }
        case '2':{
           double_circular();
           break;
        }
    }
}
void single_circular(){
    //cout<< "1.insert_at_the_beg"<<endl;
    char ch;
    cout<< "1.to insert"<<endl;
    cout<< "2.to delete"<<endl;
    cin>>ch;
    cout<<endl;
    switch(ch){
        case '1':{
            single_circular_insert();
            cDisplay();
            break;
        }
        case '2':{
          single_circular_delete();
          cDisplay();
            break;
        }

    }
}

void single_circular_insert(){
      char ch;
    cout<< "1.insert at the beggining(single circular)"<<endl;
    cout<< "2.insert at the anyPosition(single circular)"<<endl;
    cout<< "3.insert at the end(single circular)"<<endl;
    cin>>ch;
    cout<<endl;
    switch(ch)
    {
        case '1':{
            single_circular_insert_at_the_beg("Rick");
            single_circular_insert_at_the_beg("charlie");
            single_circular_insert_at_the_beg("sophia");
            single_circular_insert_at_the_beg("adkin");


            break;
        }
        case '2':{
            single_circular_insert_at_the_beg("Rick");
            single_circular_insert_at_the_beg("charlie");
            single_circular_insert_at_the_beg("sophia");
            single_circular_insert_at_the_beg("adkin");
            single_circular_insert_at_any("abebe");

            break;

     }
        case '3':{
            single_circular_insert_at_the_end("Rick");
            single_circular_insert_at_the_end("charlie");
            single_circular_insert_at_the_end("sophia");
            single_circular_insert_at_the_end("adkin");
            single_circular_insert_at_the_end("abebe");

            break;
        }
    }
}
void single_circular_insert_at_the_beg(string x){
    Node* temp=new Node;
    temp->name=x;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        head->next=head;
    }
    else{
       Node* temp2=head;
       temp->next=head;
       while(temp2->next!=head)
            temp2=temp2->next;
       temp2->next=temp;
       head=temp;
    }

}
void single_circular_insert_at_any(string x){
    Node* temp=new Node;
    temp->name=x;
    temp->next=NULL;
    if(head==NULL)
        cout<< "empty list"<<endl;
    else{
            int c;
        cout<< "in which location do you want to add"<<endl;
        cin>>c;
        cout<<endl;
        if(c<=0||c>3)
            cout<< "out of bounds";
        else{
            Node* temp2=head;
            for(int i=0;i<c-1;i++)
                temp2=temp2->next;
            temp->next=temp2->next;
            temp2->next=temp;
        }
    }
}
void single_circular_insert_at_the_end(string x){
    Node* temp=new Node;
    temp->name=x;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        head->next=head;
    }
    else{
        Node* temp2=head;
        while(temp2->next!=head){
            temp2=temp2->next;
        }
        temp2->next=temp;
        temp->next=head;
    }
}
void single_circular_delete(){
     char ch;
    cout<< "1.to remove the first value(single circular)"<<endl;
    cout<< "2.to remove any value(single circular)"<<endl;
    cout<< "3.to remove the last value(single circular)"<<endl;
    cin>>ch;
    cout<<endl;
    switch(ch){
        case '1':{
            single_circular_insert_at_the_end("Rick");
            single_circular_insert_at_the_end("charlie");
            single_circular_insert_at_the_end("sophia");
            single_circular_insert_at_the_end("adkin");
            single_circular_insert_at_the_end("abebe");
           single_circular_delete_first();
            break;
        }
        case '2':{
            single_circular_insert_at_the_end("Rick");
            single_circular_insert_at_the_end("charlie");
            single_circular_insert_at_the_end("sophia");
            single_circular_insert_at_the_end("adkin");
            single_circular_insert_at_the_end("abebe");
         single_circular_delete_any();
            break;
        }
        case '3':{
            single_circular_insert_at_the_end("Rick");
            single_circular_insert_at_the_end("charlie");
            single_circular_insert_at_the_end("sophia");
            single_circular_insert_at_the_end("adkin");
            single_circular_insert_at_the_end("abebe");
         single_circular_delete_last();
            break;
        }
    }
}
void  single_circular_delete_first(){
    Node* temp=head;
    Node* temp2=head;
    if(head==NULL)
        cout<< "the list is empty"<<endl;
    else

      while(temp2->next!=head){
        temp2=temp2->next;
    }
    head=head->next;
    temp2->next=head;
    delete temp;
}
 void single_circular_delete_any(){
    Node* temp=head;
    int c;
      if(head==NULL)
        cout<< "the list is empty"<<endl;
    else{
            Node* temp1;
        cout<< "which lndex of value is to be removed"<<endl;
        cin>>c;
        cout<<endl;
        for(int i=0;i<c;i++){
            temp1=temp;
            temp=temp->next;
        }
        temp1->next=temp->next;
        delete temp;

    }
 }

void single_circular_delete_last(){

    Node* temp=head;
      if(head==NULL)
        cout<< "the list is empty"<<endl;
    else{
        Node* temp1;
        while(temp->next!=head){
            temp1=temp;
            temp=temp->next;
        }
        temp1->next=head;
        delete temp;

    }

}
void double_circular(){
        char ch;
    cout<< "1.to insert"<<endl;
    cout<< "2.to delete"<<endl;
    cin>>ch;
    cout<<endl;
    switch(ch){
        case '1':{
            double_circular_insert();
            cDisplay();
            break;
        }
        case '2':{
          double_circular_delete();
          cDisplay();
            break;
        }

    }
}
void double_circular_insert(){
    char ch;
    cout<< "1.insert at the beggining(double circular)"<<endl;
    cout<< "2.insert at the anyPosition(double  circular)"<<endl;
    cout<< "3.insert at the end(double circular)"<<endl;
    cin>>ch;
    cout<<endl;
    switch(ch)
    {
        case '1':{
            double_circular_insert_at_the_beg("Rick");
            double_circular_insert_at_the_beg("charlie");
            double_circular_insert_at_the_beg("sophia");
            double_circular_insert_at_the_beg("adkin");


            break;
        }
        case '2':{
            double_circular_insert_at_the_beg("Rick");
            double_circular_insert_at_the_beg("charlie");
            double_circular_insert_at_the_beg("sophia");
            double_circular_insert_at_the_beg("adkin");
            double_circular_insert_at_any("abebe");

            break;

     }
        case '3':{
            double_circular_insert_at_the_end("Rick");
            double_circular_insert_at_the_end("charlie");
            double_circular_insert_at_the_end("sophia");
            double_circular_insert_at_the_end("adkin");
            double_circular_insert_at_the_end("abebe");

            break;
        }
    }
}
void double_circular_insert_at_the_beg(string x){
    Node* temp=new Node;
    temp->name=x;
    temp->next=NULL;
    temp->prv=NULL;
    if(head==NULL){
        head=temp;
        head->next=head;
        head->prv=head;
    }
    else{

        Node* temp2=head;
        temp->next=head;
        head->prv=temp;
       // temp2=head->prv;
        ///*
        while(temp2->next!=head){
            temp2=temp2->next;
        }
       // */
        temp2->next=temp;
        temp->prv=temp2;
        head=temp;
       // head->prv=temp2;
    }

}
void double_circular_insert_at_any(string x){
      Node* temp=new Node;
    temp->name=x;
    temp->next=NULL;
    temp->prv=NULL;
    int c;
    cout<< "in which location you wanna add"<<endl;
    cin>>c;
    cout<<endl;
    if(c<=0||c>3)
        cout<< "out of bounds"<<endl;
    else{
        Node* temp2=head;
        Node* temp1;
        for(int i=0;i<c;i++){
            temp1=temp2;
            temp2=temp2->next;
        }
        temp->next=temp2;
        temp->prv=temp1;
        temp1->next=temp;
        temp2->prv=temp;
    }

}
void double_circular_insert_at_the_end(string x){
     Node* temp=new Node;
    temp->name=x;
    temp->next=NULL;
    temp->prv=NULL;
    if(head==NULL){
        head=temp;
        head->next=head;
        head->prv=head;
    }
    else{
     Node* temp2=head->prv;
        /*
        while(temp2->next!=head){
            temp2=temp2->next;
        }
        */
        temp2->next=temp;
        temp->next=head;
        temp->prv=temp2;
        head->prv=temp;
    }
}
void double_circular_delete(){
    char ch;
    cout<< "1.to remove the first value(double circular)"<<endl;
    cout<< "2.to remove any value(double circular)"<<endl;
    cout<< "3.to remove the last value(double circular)"<<endl;
    cin>>ch;
    cout<<endl;
    switch(ch){
        case '1':{
            double_circular_insert_at_the_end("Rick");
            double_circular_insert_at_the_end("charlie");
            double_circular_insert_at_the_end("sophia");
            double_circular_insert_at_the_end("adkin");
            double_circular_insert_at_the_end("abebe");
           double_circular_delete_first();
            break;
        }
        case '2':{
            double_circular_insert_at_the_end("Rick");
            double_circular_insert_at_the_end("charlie");
            double_circular_insert_at_the_end("sophia");
            double_circular_insert_at_the_end("adkin");
            double_circular_insert_at_the_end("abebe");
         double_circular_delete_any();
            break;
        }
        case '3':{
            double_circular_insert_at_the_end("Rick");
            double_circular_insert_at_the_end("charlie");
            double_circular_insert_at_the_end("sophia");
            double_circular_insert_at_the_end("adkin");
            double_circular_insert_at_the_end("abebe");
         double_circular_delete_last();
            break;
        }
    }
}
void double_circular_delete_first(){
    Node* temp=head;
    if(head==NULL)
        cout<< "empty list"<<endl;
    else{
        Node* temp2=head->prv;
       /* while(temp2->next!=head)
            temp2=temp2->next;
            */
        head=head->next;
        head->prv=temp2;
        temp2->next=head;
        delete temp;
    }
}
void double_circular_delete_any(){
     Node* temp=head;
     int c;
    if(head==NULL)
        cout<< "empty list"<<endl;
    else{
            Node* temp1;
            Node* temp2;
        cout<< "which index of value is to be removed"<<endl;
        cin>>c;
        cout<<endl;
        for(int i=0;i<c;i++){
                temp1=temp;
            temp=temp->next;
        }
        temp2=temp->next;
        temp1->next=temp2;
        temp2->prv=temp1;
        delete temp;
    }
}
void double_circular_delete_last(){
    Node* temp=head;
    if(head==NULL)
        cout<< "empty list"<<endl;
    else{
        Node* temp1;
        while(temp->next!=head){
            temp1=temp;
            temp=temp->next;
        }
        temp1->next=temp->next;
        head->prv=temp1;
        delete temp;
    }
}
void cDisplay(){
    Node* temp=head;
    char ch;
    cout<<"which way do you want to display"<<endl;
    cout<<"1.forward"<<endl;
    cout<< "2.backward(single circular linked)"<<endl;
    cout<< "3.backward(double circular linked)"<<endl;
    cin>>ch;
    cout<<endl;
    switch(ch){
        case '1':{
            while(temp->next!=head){
                cout<<temp->name<<" "<<endl;
                temp=temp->next;
            }
            cout<<temp->name<<" "<<endl;
            break;
        }
        case '2':{
            Node* p=head;
            Node* q;
            while(p->next!=head){
                q=p;
                p=p->next;
            }

            while(p!=head){
                 cout<<p->name<< " ";
                  p=q;
                q=head;
                while(q->next!=p){
                    q=q->next;
                }
            }
            cout<<p->name<<endl;
            break;
        }
        case '3':{
           // Node* p;
            while(temp->next!=head)
                temp=temp->next;
            //p=temp;
            while(temp->prv!=head->prv){
                cout<<temp->name<< " ";
                temp=temp->prv;
            }
             cout<<temp->name<< " ";
            break;
        }
}
}

void Display(){
    char ch;
    cout<<"which way do you want to display"<<endl;
    cout<< "1.forward"<<endl;
    cout<< "2.backward(single_linked)"<<endl;
    cout<< "3.backward(double_linked)"<<endl;
    cin>>ch;
    cout<<endl;
    switch(ch){
        case '1':{
    Node* temp=head;
   /* if(temp==NULL)
        cout<< "the list is empty";
    else{*/
    while(temp!=NULL){
        cout<<temp->name<< "  ";
        temp=temp->next;
    }
    break;
    }
        case '2':
        {
          Node* p=head;
          Node* q;
          while(p->next!=NULL){
            q=p;
            p=p->next;
          }
          while(p!=NULL){
            cout<<p->name<< " ";
            //if(p==head)
            //   break;
            //else{

            q=head;
            while(q->next!=p){
              // p=q;
               q=q->next;
          }
             p=q;
       // }
          }
           //cout<<p->name<< " ";
          //cout<<p->name<< " ";
        break;
        }
        case '3':{
            Node* p=head;
            while(p->next!=NULL){
                p=p->next;
            }
            while(p!=NULL){
                cout<<p->name<< " ";
                p=p->prv;
            }
          //   cout<<p->name<< " ";
        }


}

    }

/*

 Node *temp=new Node;
    temp->name=nam;
    temp->next=start;
    start=temp;
  Display(start);
*/
