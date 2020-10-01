// *For rooted tree or pick  an arbitary root

// used when we have to answer some query in subtree
// or update (one or every node) in subtree

// we can apply segtree or BIT on a tree
// but SegTree or BIT works on an array!
// we can convert tree into array and operate on it.

// we can euler tour the tree and maintain in-time and  out-time

vector<int> v[10005];
vector<int> in(1005), out(1005);
int timer = 0;
void dfs(int idx, int par)
{
    in[idx] = ++timer;
    for (int a : v[idx])
        if (a != par)
            dfs(a, idx);
    out[idx] = timer;
}
// suppose we have to count no of prime in subtree
int main() {
    FenwickTree ft;
    for (int i = 1; i <= n; i++) // all node in the tree
        if (prime[arr[i]])
            ft.add(in[i], 1);
    // find no. of prime in subtree of 3?
    cout << ft.sum(in[3], out[3]);
    // simlarly we can update a node
    // update node 2 to 7
    if (prime[arr[2]])
        ft.add(in[2], -1);
    arr[2] = 7;
    if (prime[arr[2]])
        ft.add(in[2], 1);
}
// practice problem https://www.codechef.com/problems/AVVST
