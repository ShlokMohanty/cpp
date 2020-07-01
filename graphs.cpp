#include<bits/stdc++.h>
uisng namespace std;
void addEdge(vector<int> adj[],int u,int v)
{
u.push_back(v);
v.push_back(u);
}
void printgraph(vector<int> adj[],int V)
{
for(int v=0;v<V;v++)
{
cout<<"adjacency list of vertexes"<<endl<<v<<"\n head"<<endl;
for(auto x:adj[v])
{
cout<<"->"<<x;

}
cout<<endl;
}
}
int main()
{
int V=5;
vector<int> adj[v];
addEdge(adj,0,1);
addEdge(adj,0,4);
addEdge(adj,1,2);
addEdge(adj,1,3);
addEdge(adj,1,4);
addEdge(adj,2,3);
addEdge(adj,3,4);
printgraph(adj,V);
return 0;
}

