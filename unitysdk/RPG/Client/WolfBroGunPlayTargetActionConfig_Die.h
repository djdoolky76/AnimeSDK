#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionConfig.h"
class JNKPPLPLFOM;
namespace RPG::Client { class WolfBroGunPlayTargetActionConfig; }
namespace System { class String; }

#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_DIE_CTOR_OFFSET UNITYSDK_OFFSET(0xE475BB0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_DIE_EINKGFCBAJI_OFFSET UNITYSDK_OFFSET(0xE475B30)

namespace RPG::Client
{
	class WolfBroGunPlayTargetActionConfig_Die : public ::RPG::Client::WolfBroGunPlayTargetActionConfig
	{
	public:
		::System::Boolean addScore; // 0x18
		::System::Byte _padding0[0x7];
		::System::String* overrideAnim; // 0x20
		::System::String* overrideFlipAnim; // 0x28
		::Il2CppArray<::RPG::Client::WolfBroGunPlayTargetActionConfig*>* dieActions; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_DIE_CTOR_OFFSET))(this);
		}

		::JNKPPLPLFOM* EINKGFCBAJI()
		{
			return ((::JNKPPLPLFOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_DIE_EINKGFCBAJI_OFFSET))(this);
		}

	};
}
