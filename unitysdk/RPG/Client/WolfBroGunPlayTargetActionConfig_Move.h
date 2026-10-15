#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionConfig.h"
#include "unitysdk/UnityEngine/Vector2.h"
class JNKPPLPLFOM;

#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_MOVE_CTOR_OFFSET UNITYSDK_OFFSET(0xE475D60)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_MOVE_EINKGFCBAJI_OFFSET UNITYSDK_OFFSET(0xE475CE0)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTargetActionConfig_Move_TypeDefinitionIndex = 68708;

	class WolfBroGunPlayTargetActionConfig_Move : public ::RPG::Client::WolfBroGunPlayTargetActionConfig
	{
	public:
		::System::Single speed; // 0x18
		::UnityEngine::Vector2 target; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_MOVE_CTOR_OFFSET))(this);
		}

		::JNKPPLPLFOM* EINKGFCBAJI()
		{
			return ((::JNKPPLPLFOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_MOVE_EINKGFCBAJI_OFFSET))(this);
		}

	};
}
