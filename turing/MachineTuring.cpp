#include "MachineTuring.h"


MachineTuring::MachineTuring(void)
{
	for (int i(-100); i <= 100; i++)
		m_mapTape.insert(pair<int, int>(i, 0));
}