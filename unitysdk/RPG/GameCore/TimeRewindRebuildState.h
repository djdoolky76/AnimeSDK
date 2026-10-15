#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class TimeRewindRebuildState : ::System::Int32
	{
		BlendOut = 0,
		BlendIn = 1,
		Finish = 2,
	};
}
