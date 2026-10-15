#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client::RoadRash { class MonoRoadRashGameRoad; }
namespace RPG::Client::RoadRash { class MonoRoadRashGameRoadObstacle; }

namespace RPG::Client::RoadRash
{
	struct alignas(8) MonoRoadRashGameSettings_RoadObstacleInfo
	{
		::RPG::Client::RoadRash::MonoRoadRashGameRoad* Road; // 0x10
		::System::Single Distance; // 0x18
		::System::Single Offset; // 0x1C
		::System::Single Height; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::RoadRash::MonoRoadRashGameRoadObstacle* ObstaclePrefab; // 0x28
	};
}
