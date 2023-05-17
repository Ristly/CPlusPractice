#pragma once

class Can {
public:
	void RowNumber(long id);
	unsigned long long CanResults();
private:
	long long id = 0;
	long long row = 1;
	bool isKilled = false;
};



