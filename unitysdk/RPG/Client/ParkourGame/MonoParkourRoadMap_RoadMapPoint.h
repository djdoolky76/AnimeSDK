#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace RPG::Client::ParkourGame
{
	struct alignas(8) MonoParkourRoadMap_RoadMapPoint
	{
		::System::String* RoadUniqueName; // 0x10
		::System::Single Distance; // 0x18
	};
}
