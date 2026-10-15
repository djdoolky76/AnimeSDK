#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class PhotoGraphModeType : ::System::Int32
	{
		None = 0,
		CommonShotFirstPerson = 1,
		CommonShotThirdPerson = 2,
		Identify = 3,
		IdentifyUAV = 4,
		ShotUAV = 5,
		EntityTimeline = 6,
	};
}
