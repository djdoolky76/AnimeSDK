#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class OrbitAreaState : ::System::Int32
	{
		Normal = 0,
		CrossLeftDeathArea = 1,
		CrossRightDeathArea = 2,
	};
}
