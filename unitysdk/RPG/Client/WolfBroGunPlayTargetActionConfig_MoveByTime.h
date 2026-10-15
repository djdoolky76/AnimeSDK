#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionConfig.h"
#include "unitysdk/UnityEngine/Vector2.h"
class JNKPPLPLFOM;

#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_MOVEBYTIME_CTOR_OFFSET UNITYSDK_OFFSET(0xE475DF0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_MOVEBYTIME_EINKGFCBAJI_OFFSET UNITYSDK_OFFSET(0xE475D70)

namespace RPG::Client
{
	class WolfBroGunPlayTargetActionConfig_MoveByTime : public ::RPG::Client::WolfBroGunPlayTargetActionConfig
	{
	public:
		::System::Single time; // 0x18
		::UnityEngine::Vector2 target; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_MOVEBYTIME_CTOR_OFFSET))(this);
		}

		::JNKPPLPLFOM* EINKGFCBAJI()
		{
			return ((::JNKPPLPLFOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_MOVEBYTIME_EINKGFCBAJI_OFFSET))(this);
		}

	};
}
