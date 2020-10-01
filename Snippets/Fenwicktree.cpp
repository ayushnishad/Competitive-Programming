struct FenwickTree {
	int n;
	vector<int> fren;

	FenwickTree(int n) // pass n+1 for 1 index
	{
		this->n = n;
		fren.assign(n, 0);
	}

	FenwickTree(vector<int> a) : FenwickTree(a.size() + 1) {
		for (size_t i = 0; i < a.size(); i++)
			add(i + 1, a[i]);
	}
	// all 1 indexing
	int sum(int idx)
	{
		int ans = 0;
		while (idx > 0)
		{
			ans += fren[idx];
			idx -= (idx & (-idx));
		}
		return ans;
	}

	int sum(int l, int r) {
		return sum(r) - sum(l - 1);
	}

	void add(int idx, int val)
	{
		while (idx <= n )
		{
			fren[idx] += val;
			idx += (idx & (-idx));
		}
	}
};
