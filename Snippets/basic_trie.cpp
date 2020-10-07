#include <bits/stdc++.h>
using namespace std;

struct trie {
	trie* child[26];//we can use unordered_map to make it memory efficient.
	bool isEnd;
	trie()
	{
		memset(child, 0, sizeof(child));
		isEnd = 0;
	}
};

trie *root; // intialize root before use

void insert_(string s)
{
	trie* curr = root;
	for (char ch : s)
	{
		int idx = ch - 'a';
		if (!curr->child[idx])
		{
			curr->child[idx] = new trie;
		}
		curr = curr->child[idx];
	}
	curr->isEnd = 1;
}

bool find_(string s)
{
	trie* curr = root;
	for (char ch : s)
	{
		int idx = ch - 'a';
		if (!curr->child[idx])
			return 0;
		curr = curr->child[idx];
	}
	return curr->isEnd;
}

int main()
{
	root = new trie;
	int q; cin >> q;
	while (q--)
	{
		string s; cin >> s;
		insert_(s);
	}
	cin >> q;
	while (q--)
	{
		string s; cin >> s;
		if (find_(s))
			cout << "Present\n";
		else
			cout << "Not\n";
	}
	return 0;
}
