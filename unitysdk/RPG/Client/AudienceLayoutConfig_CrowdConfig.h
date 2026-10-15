#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"

namespace RPG::Client
{
	struct alignas(4) AudienceLayoutConfig_CrowdConfig
	{
		::RPG::GameCore::NPCBodySize bodySize; // 0x10
		::System::Single weight; // 0x14
	};
}
