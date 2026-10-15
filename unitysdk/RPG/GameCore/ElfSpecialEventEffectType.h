#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ElfSpecialEventEffectType : ::System::Int32
	{
		ElfBuff = 0,
		Reward = 1,
		PhoneMessage = 2,
		SuperEvent = 3,
	};
}
