#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class SmartObjectPlayMode : ::System::Int32
	{
		Sequence = 0,
		Loop = 1,
		Random = 2,
	};
}
