#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ActionBarUIStatus : ::System::Int32
	{
		Invalid = 0,
		Action = 1,
		Normal = 2,
		Insert = 3,
		Ultra = 4,
		OneMore = 5,
	};
}
