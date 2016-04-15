#pragma once

#include <map>

using namespace std;

class MachineTuring
{
public:
	map<int,int> m_mapTape;

public:
	MachineTuring(void);

	void SetValueMap(int key, int value);
	int GetValueMap(int key) const;
};

