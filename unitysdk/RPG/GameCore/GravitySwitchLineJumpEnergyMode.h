#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class GravitySwitchLineJumpEnergyMode : ::System::Int32
	{
		NoEffect = 0,
		FillJumpEnergy = 1,
		ClearJumpEnergy = 2,
	};
}
