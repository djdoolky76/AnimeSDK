#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionConfig.h"
class JNKPPLPLFOM;

#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_BOSSSETTLEMENT_CTOR_OFFSET UNITYSDK_OFFSET(0xE475B20)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_BOSSSETTLEMENT_EINKGFCBAJI_OFFSET UNITYSDK_OFFSET(0xE475AA0)

namespace RPG::Client
{
	class WolfBroGunPlayTargetActionConfig_BossSettlement : public ::RPG::Client::WolfBroGunPlayTargetActionConfig
	{
	public:
		::System::Single targetScore; // 0x18
		::System::Single removeDelay; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_BOSSSETTLEMENT_CTOR_OFFSET))(this);
		}

		::JNKPPLPLFOM* EINKGFCBAJI()
		{
			return ((::JNKPPLPLFOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_BOSSSETTLEMENT_EINKGFCBAJI_OFFSET))(this);
		}

	};
}
