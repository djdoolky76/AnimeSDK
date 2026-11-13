#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JNKPPLPLFOM;

#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC9B760)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_EEFMMMJEBJG_OFFSET UNITYSDK_OFFSET(0x1BC9B5F0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_EINKGFCBAJI_OFFSET UNITYSDK_OFFSET(0x1BC9B720)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTargetActionConfig_TypeDefinitionIndex = 70657;

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
