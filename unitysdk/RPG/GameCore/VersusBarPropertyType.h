#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class VersusBarPropertyType : ::System::Int32
	{
		CurValue = 0,
		ExRatio = 1,
		MaxValue = 2,
		TotalBarCapacity = 3,
	};
}
