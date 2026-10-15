#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionConfig.h"
#include "unitysdk/UnityEngine/Vector2.h"
class JNKPPLPLFOM;

#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_SETPOS_CTOR_OFFSET UNITYSDK_OFFSET(0xE46B510)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_SETPOS_EINKGFCBAJI_OFFSET UNITYSDK_OFFSET(0xE46B490)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTargetActionConfig_SetPos_TypeDefinitionIndex = 68706;

	class WolfBroGunPlayTargetActionConfig_SetPos : public ::RPG::Client::WolfBroGunPlayTargetActionConfig
	{
	public:
		::UnityEngine::Vector2 pos; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_SETPOS_CTOR_OFFSET))(this);
		}

		::JNKPPLPLFOM* EINKGFCBAJI()
		{
			return ((::JNKPPLPLFOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_SETPOS_EINKGFCBAJI_OFFSET))(this);
		}

	};
}
