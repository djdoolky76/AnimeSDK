#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JNKPPLPLFOM;

#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xE46AF70)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_EEFMMMJEBJG_OFFSET UNITYSDK_OFFSET(0xE46AE00)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_EINKGFCBAJI_OFFSET UNITYSDK_OFFSET(0xE46AF30)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTargetActionConfig_TypeDefinitionIndex = 68705;

	class WolfBroGunPlayTargetActionConfig : public ::System::Object
	{
	public:
		::System::Single delay; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_CTOR_OFFSET))(this);
		}

		::JNKPPLPLFOM* EEFMMMJEBJG()
		{
			return ((::JNKPPLPLFOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_EEFMMMJEBJG_OFFSET))(this);
		}

		::JNKPPLPLFOM* EINKGFCBAJI()
		{
			return ((::JNKPPLPLFOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_EINKGFCBAJI_OFFSET))(this);
		}

	};
}
