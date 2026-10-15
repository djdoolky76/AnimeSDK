#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class MarbleItemType : ::System::Int32
	{
		Static = 0,
		Trigger = 1,
		Dynamic = 2,
	};
}
