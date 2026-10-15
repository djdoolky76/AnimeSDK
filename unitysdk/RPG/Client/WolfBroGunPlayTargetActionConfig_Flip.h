#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionConfig.h"
class JNKPPLPLFOM;

#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_FLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE475CD0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_FLIP_EINKGFCBAJI_OFFSET UNITYSDK_OFFSET(0xE475C50)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTargetActionConfig_Flip_TypeDefinitionIndex = 68710;

	class WolfBroGunPlayTargetActionConfig_Flip : public ::RPG::Client::WolfBroGunPlayTargetActionConfig
	{
	public:
		::System::Boolean waitFinish; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single speed; // 0x1C
		::System::Single loopDelay; // 0x20
		::System::Int32 loopCount; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_FLIP_CTOR_OFFSET))(this);
		}

		::JNKPPLPLFOM* EINKGFCBAJI()
		{
			return ((::JNKPPLPLFOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_FLIP_EINKGFCBAJI_OFFSET))(this);
		}

	};
}
