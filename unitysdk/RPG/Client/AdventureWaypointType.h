#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class AdventureWaypointType : ::System::Int32
	{
		Mission = 0,
		MappingInfo = 1,
		Monster = 2,
		MissionAssist = 3,
		Task = 4,
		OptionalMission = 5,
	};
}
