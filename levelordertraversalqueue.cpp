//level order traversal using queue(bfs)
#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int val;
    Node*left;
    Node*right;
    Node(int val)
    {
       this->val=val;
       this->left=NULL;
       this->right=NULL;
    }
};
void display(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
    
}
void levelorderqueue(Node*root)
{
    queue<Node*>q;
    q.push(root);
    while(q.size()>0)
    {
        Node*temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL)
        q.push(temp->left);
        if(temp->right!=NULL)
        q.push(temp->right);
    }
    cout<<endl;
}
int main()
{
    Node*a=new Node(1);
    Node*b=new Node(2);
    Node*c=new Node(3);
    Node*d=new Node(4);
    Node*e=new Node(5);
    Node*f=new Node(6);
    Node*g=new Node(7);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    display(a);
    cout<<endl;
   levelorderqueue(a);
    
}