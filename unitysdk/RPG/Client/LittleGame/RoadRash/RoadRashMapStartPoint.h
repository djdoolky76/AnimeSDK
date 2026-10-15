#pragma once
#include "unitysdk/unitysdk.h"
class BJIACBNKCCJ;

namespace RPG::Client::LittleGame::RoadRash
{
	inline static constexpr unsigned int RoadRashMapStartPoint_TypeDefinitionIndex = 42922;

	struct alignas(8) RoadRashMapStartPoint
	{
		::BJIACBNKCCJ* Road; // 0x10
		::System::Single Distance; // 0x18
		::System::Single Offset; // 0x1C
	};
}
