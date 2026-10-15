#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client::RoadRash { class MonoRoadRashGameRoad; }

namespace RPG::Client::RoadRash
{
	struct alignas(8) MonoRoadRashGameRoad_Link
	{
		::System::UInt32 LinkPointIndex; // 0x10
		::System::UInt32 LinkRoadPointIndex; // 0x14
		::RPG::Client::RoadRash::MonoRoadRashGameRoad* Road; // 0x18
	};
}
