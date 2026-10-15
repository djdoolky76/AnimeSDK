#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class MinimapAreaType : ::System::Int32
	{
		Normal = 0,
		RotatableRegion = 1,
		AnotherFloor = 2,
		EraFlipperRegion = 3,
		FiveDim = 4,
	};
}
