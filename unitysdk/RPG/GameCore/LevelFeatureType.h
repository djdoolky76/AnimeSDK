#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class LevelFeatureType : ::System::Int32
	{
		Unknown = 0,
		RotatableRegion = 1,
		HeartDial = 2,
		EraFlipper = 3,
	};
}
