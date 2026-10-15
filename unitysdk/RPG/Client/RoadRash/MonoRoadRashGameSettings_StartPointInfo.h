#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client::RoadRash { class MonoRoadRashGameRoad; }

namespace RPG::Client::RoadRash
{
	struct alignas(8) MonoRoadRashGameSettings_StartPointInfo
	{
		::RPG::Client::RoadRash::MonoRoadRashGameRoad* Road; // 0x10
		::System::Single Distance; // 0x18
		::System::Single Offset; // 0x1C
	};
}
