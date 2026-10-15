#pragma once
#include "unitysdk/unitysdk.h"
class BJIACBNKCCJ;

namespace RPG::Client::LittleGame::RoadRash
{
	struct alignas(8) RoadRashMapStartPoint
	{
		::BJIACBNKCCJ* Road; // 0x10
		::System::Single Distance; // 0x18
		::System::Single Offset; // 0x1C
	};
}
