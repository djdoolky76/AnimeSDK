#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayRoadMapConfig.h"

#define RPG_CLIENT_WOLFBROGUNPLAYROGUEROADMAPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC968D0)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayRogueRoadMapConfig_TypeDefinitionIndex = 70713;

	class WolfBroGunPlayRogueRoadMapConfig : public ::RPG::Client::WolfBroGunPlayRoadMapConfig
	{
	public:
		::System::Single bossWakeupTime; // 0x38
		::System::Boolean updateTurn; // 0x3C
		::System::Byte _padding0[0x3];
		::System::Single waitCountdownTime; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYROGUEROADMAPCONFIG_CTOR_OFFSET))(this);
		}

	};
}
