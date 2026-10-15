#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class UltraDistanceGlobalDynamicOffsetMode : ::System::Int32
	{
		None = 0,
		LerpFromStart = 1,
		RestrictByStart = 2,
	};
}
