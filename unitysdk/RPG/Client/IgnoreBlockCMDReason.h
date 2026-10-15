#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class IgnoreBlockCMDReason : ::System::Int32
	{
		None = 0,
		Battle = 1,
		Loading = 2,
		PerformanceReplay = 4,
		GameLogin = 8,
	};
}
