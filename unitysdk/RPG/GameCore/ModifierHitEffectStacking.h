#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ModifierHitEffectStacking : ::System::Int32
	{
		Unknow = 0,
		HighestPriority = 1,
		Multiple = 2,
	};
}
