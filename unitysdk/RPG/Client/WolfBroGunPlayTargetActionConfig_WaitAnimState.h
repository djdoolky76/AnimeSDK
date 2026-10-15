#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionConfig.h"
class JNKPPLPLFOM;
namespace System { class String; }

#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_WAITANIMSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0xE4760D0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_WAITANIMSTATE_EINKGFCBAJI_OFFSET UNITYSDK_OFFSET(0xE476050)

namespace RPG::Client
{
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
