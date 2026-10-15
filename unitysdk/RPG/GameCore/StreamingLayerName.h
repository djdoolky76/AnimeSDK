#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class StreamingLayerName : ::System::Int32
	{
		None = 0,
		Prop = 1,
		StandAloneProp = 2,
		StandAloneObjects = 3,
		Building = 4,
		BuildingLarge = 5,
		Landmark = 6,
		MiddleDistantView = 7,
		DistantView = 8,
	};
}
