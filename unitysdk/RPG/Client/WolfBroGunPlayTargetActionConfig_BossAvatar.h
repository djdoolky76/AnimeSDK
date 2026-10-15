#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionConfig.h"
class JNKPPLPLFOM;

#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_BOSSAVATAR_CTOR_OFFSET UNITYSDK_OFFSET(0xE475A90)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_BOSSAVATAR_EINKGFCBAJI_OFFSET UNITYSDK_OFFSET(0xE475A10)

namespace RPG::Client
{
	class WolfBroGunPlayTargetActionConfig_BossAvatar : public ::RPG::Client::WolfBroGunPlayTargetActionConfig
	{
	public:
		::System::Boolean isRed; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_BOSSAVATAR_CTOR_OFFSET))(this);
		}

		::JNKPPLPLFOM* EINKGFCBAJI()
		{
			return ((::JNKPPLPLFOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_BOSSAVATAR_EINKGFCBAJI_OFFSET))(this);
		}

	};
}
