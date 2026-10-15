#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class RaidEnterType : ::System::Int32
	{
		Default = 0,
		SkipUI = 1,
		Performance = 2,
	};
}
