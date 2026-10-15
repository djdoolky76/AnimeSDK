#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionConfig.h"
class JNKPPLPLFOM;
namespace RPG::Client { class WolfBroGunTargetProjectile; }
namespace System { class String; }

#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_FIRE_CTOR_OFFSET UNITYSDK_OFFSET(0xE475C40)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_FIRE_EINKGFCBAJI_OFFSET UNITYSDK_OFFSET(0xE475BC0)

namespace RPG::Client
{
	class WolfBroGunPlayTargetActionConfig_Fire : public ::RPG::Client::WolfBroGunPlayTargetActionConfig
	{
	public:
		::RPG::Client::WolfBroGunTargetProjectile* projectile; // 0x18
		::System::String* attachPoint; // 0x20
		::System::Single loopDelay; // 0x28
		::System::Int32 loopCount; // 0x2C
		::System::Boolean aimPlayer; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_FIRE_CTOR_OFFSET))(this);
		}

		::JNKPPLPLFOM* EINKGFCBAJI()
		{
			return ((::JNKPPLPLFOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_FIRE_EINKGFCBAJI_OFFSET))(this);
		}

	};
}
