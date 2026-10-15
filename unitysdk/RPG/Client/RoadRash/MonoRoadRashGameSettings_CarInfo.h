#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client::RoadRash { class MonoRoadRashGameCar; }

namespace RPG::Client::RoadRash
{
	struct alignas(8) MonoRoadRashGameSettings_CarInfo
	{
		::RPG::Client::RoadRash::MonoRoadRashGameCar* Car; // 0x10
	};
}
