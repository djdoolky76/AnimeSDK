#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class WolfBroGunPlayRoadMapConfig; }

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayEndLess_EndLessTimelineConfig_TypeDefinitionIndex = 68738;

	struct alignas(8) WolfBroGunPlayEndLess_EndLessTimelineConfig
	{
		::System::Single weight; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::WolfBroGunPlayRoadMapConfig* config; // 0x18
	};
}
