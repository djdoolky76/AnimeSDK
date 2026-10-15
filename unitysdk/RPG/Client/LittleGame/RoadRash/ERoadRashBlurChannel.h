#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::RoadRash
{
	enum class ERoadRashBlurChannel : ::System::Int32
	{
		Default = 0,
		OtherAccel = 1,
		ReleaseCharge = 2,
		Slam = 3,
		Ultimate = 4,
		SlamImpact = 5,
		UltimateBlueFire = 6,
		Count = 7,
	};
}
