#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client::RoadRash { class MonoRoadRashGameRoad; }

namespace RPG::Client::RoadRash
{
	struct alignas(8) MonoRoadRashGameSettings_AccelerationRingInfo
	{
		::RPG::Client::RoadRash::MonoRoadRashGameRoad* Road; // 0x10
		::System::Single Distance; // 0x18
	};
}
