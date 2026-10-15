#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class WeaknessState : ::System::Int32
	{
		Default = 0,
		Normal = 1,
		Protected = 2,
		Secret = 3,
	};
}
