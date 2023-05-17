#include "Can.h"

unsigned long long Can::CanResults()
{
	unsigned long long result;

	if (!this->isKilled) {
		result = this->id * this->id;
		this->isKilled = true;
	}
	else {
		return 0;
	}

	if (this->id == 1)
		return result;	

	if ((this - row + 1)->row == this->row)
		return result + (this - row)->CanResults();
	else if (this->row - (this - row)->row  > 1 || this->id == 2)
		return result + (this - row + 1)->CanResults();

	return result + (this - row)->CanResults() + (this - row + 1)->CanResults();
}

void Can::RowNumber(long id) 
{
	this->id = id;
	long lastRowCan = 1;

	while (lastRowCan < this->id) {
		this->row++;
		lastRowCan += this->row;
		
	}
}
