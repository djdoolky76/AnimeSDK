#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class DashOverrideCalcMode : ::System::Int32
	{
		KeepInitSpeed = 0,
		KeepAcceleration = 1,
	};
}
