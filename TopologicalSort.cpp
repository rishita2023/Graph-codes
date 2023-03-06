/*Linear ordering list- if there is an edge btw u & v, u appears before v in that ordering*/
void dfs(int node, int vis[],stack<int>s, vector<int>adj[]){
  vis[node]=1;
  for(auto it: adj[node]){
    if(!vis[it])
    dfs(it,vis,s,adj);
  }
  s.push(node);
}

vector<int>toposort(int V, vector<int>adj[])
{
  int vis[V] ={0};
  stack<int>s;
  for(int i=0;i<V;i++){
    if(!vis[i]){
      dfs(i,vis,s,adj);
    }
  }
  
  vector<int> result;
  while(!s.empty()){
    result.push_back(st.top());
    s.pop();
  }
  return result;
}
    
  /* real life examples - Operation System deadlock detection, data serialization */
