#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class FiveDimSimpleProjectileMoveType : ::System::Int32
	{
		None = 0,
		Parabola = 1,
		Line = 2,
		Direct = 3,
	};
}
