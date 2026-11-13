#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionConfig.h"
class JNKPPLPLFOM;
namespace System { class String; }

#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_WAITANIMSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC9BE30)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_WAITANIMSTATE_EINKGFCBAJI_OFFSET UNITYSDK_OFFSET(0x1BC9BDB0)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTargetActionConfig_WaitAnimState_TypeDefinitionIndex = 70659;

	class WolfBroGunPlayTargetActionConfig_WaitAnimState : public ::RPG::Client::WolfBroGunPlayTargetActionConfig
	{
	public:
		::System::String* stateName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_WAITANIMSTATE_CTOR_OFFSET))(this);
		}

		::JNKPPLPLFOM* EINKGFCBAJI()
		{
			return ((::JNKPPLPLFOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_WAITANIMSTATE_EINKGFCBAJI_OFFSET))(this);
		}

	};
}
