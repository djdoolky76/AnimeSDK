#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class InfiniteWaveState : ::System::Int32
	{
		Ready = 0,
		Used = 1,
		Using = 2,
	};
}
