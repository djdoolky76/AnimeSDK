#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class SteerModeV2 : ::System::Int32
	{
		Angle = 0,
		Target = 1,
		Follow = 2,
		RecoverToOrigin = 3,
	};
}
