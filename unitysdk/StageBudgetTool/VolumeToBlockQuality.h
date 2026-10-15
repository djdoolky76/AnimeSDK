#pragma once
#include "unitysdk/unitysdk.h"

namespace StageBudgetTool
{
	enum class VolumeToBlockQuality : ::System::Int32
	{
		Full = 0,
		Low = 1,
		HLOD = 2,
		Hide = 3,
	};
}
