#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class RogueMagicEffectType : ::System::Int32
	{
		None = 0,
		Stack = 1,
		Turn = 2,
		Field = 4,
	};
}
