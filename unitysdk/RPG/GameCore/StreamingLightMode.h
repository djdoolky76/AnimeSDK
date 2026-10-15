#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class StreamingLightMode : ::System::Int32
	{
		HideLimitLight = 0,
		MainLightGroup = 1,
		HideAllLight = 2,
	};
}
