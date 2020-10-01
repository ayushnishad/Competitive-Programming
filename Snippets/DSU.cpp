struct DSU {
	// Disjoint Set DataStructure
	// unordered_map<int, int>m;
	// unordered_map<int, int>sz;
	static const int N = 1e5 + 1;
	int par[N];
	int sz[N];

	void make_set(int a)
	{
		par[a] = a;
		sz[a] = 1;
	}
	int find_set(int a)
	{
		if (par[a] == a)
			return a;
		return par[a] = find_set(par[a]); // path compression
	}
	void merge_set(int A, int B)
	{
		int a = find_set(A);
		int b = find_set(B);

		if (a == b) {
			// cout << "cannot merge : " << A << ' ' << B << endl;
			return;
		}
		if (sz[a] < sz[b])
			swap(a, b);
		par[b] = a;
		sz[a] += sz[b]; // union by rank/size.
	}
	/*
	    DSU *ob = new DSU();
	    delete ob; // heap allocation
	*/
};
