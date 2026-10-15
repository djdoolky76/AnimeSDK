#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class MuseumRandomEventType : ::System::Int32
	{
		None = 0,
		Operate = 1,
		ExhibitMission = 2,
		StuffMission = 3,
		Market = 4,
		Count = 5,
	};
}
