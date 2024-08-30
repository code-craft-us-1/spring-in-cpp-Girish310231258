#include "stats.h"

/// <summary>
/// Compute statistics for a bunch of numbers
/// </summary>
Stats Statistics::ComputeStatistics(const std::vector<float>& data)
{
	float sum = 0.0;
	Stats tempObj;

	if (data.size() == 0)
	{
		tempObj.average = NAN;
		tempObj.max = NAN;
		tempObj.min = NAN;
	}
	else
	{
		tempObj.min = tempObj.max = sum = data[0];

		for (int i = 1; i < data.size(); i++)
		{
			if (data[i] < tempObj.min)
				tempObj.min = data[i];
			if (data[i] > tempObj.max)
				tempObj.max = data[i];

			sum = sum + data[i];
		}

		tempObj.average = sum / data.size();
	}
	return tempObj;
}
