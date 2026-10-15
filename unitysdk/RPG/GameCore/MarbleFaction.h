#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class MarbleFaction : ::System::Int32
	{
		All = 0,
		Enemy = 1,
		Ally = 2,
		Field = 3,
	};
}
