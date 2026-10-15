#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	enum class SplineMoveStopMode : ::System::Int32
	{
		None = 0,
		StopAtNextPoint = 1,
		StopAtSpecificPoint = 2,
	};
}
