//program for DFS using array as stack
#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter number of nodes";
cin>>n;
int adj[10][10];
cout<<"Enter adjacency matrix";
for(int i=0;i<n;i++)
   for(int j=0;j<n;j++)
   cin>>adj[i][j];

char s;
cout<<"Enter starting nodes";
cin>>s;
int start=s-'A';
int visited[10]={0};
int stack[10];
int top=-1
stack[++top]=start;
cout<<"DFS Traversal";
while(top!=-1)
{
int node=stack[top--];
if(!visited[node]){
cout<<char(node+'A')<<"";
visited[node]=1;
}
for(int i=n-1;i>=0;--){
if(adj[node][i]==1&&!visited[i]){
stack[++top]=i;
}
}
}
return 0;
}
