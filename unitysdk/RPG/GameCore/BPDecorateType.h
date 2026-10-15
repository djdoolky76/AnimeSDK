#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class BPDecorateType : ::System::Int32
	{
		All = 0,
		OnlyWhenGain = 1,
		OnlyWhenCost = 2,
	};
}
