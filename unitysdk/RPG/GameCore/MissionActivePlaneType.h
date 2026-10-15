#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class MissionActivePlaneType : ::System::Int32
	{
		Default = 0,
		AllFloor = 1,
		SpecifiedPlaneType = 2,
	};
}
