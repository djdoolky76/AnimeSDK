#pragma once
#include "unitysdk/unitysdk.h"
class BJIACBNKCCJ;

namespace RPG::Client::LittleGame::RoadRash
{
	inline static constexpr unsigned int RoadRashMapStartLine_TypeDefinitionIndex = 42921;

	struct alignas(8) RoadRashMapStartLine
	{
		::BJIACBNKCCJ* Road; // 0x10
		::System::Single Distance; // 0x18
	};
}
