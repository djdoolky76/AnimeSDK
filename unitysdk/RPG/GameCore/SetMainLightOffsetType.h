#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class SetMainLightOffsetType : ::System::Int32
	{
		Unknown = 0,
		ResetDefault = 1,
		ResetLevelVal = 2,
		SetTartgetVal = 3,
		SetTartgetPreset = 4,
	};
}
