#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionConfig.h"
class JNKPPLPLFOM;
namespace RPG::Client { class WolfBroGunTargetProjectile; }
namespace System { class String; }

#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_SCATTERFIRE_CTOR_OFFSET UNITYSDK_OFFSET(0xE475F10)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_SCATTERFIRE_EINKGFCBAJI_OFFSET UNITYSDK_OFFSET(0xE475E90)

namespace RPG::Client
{
	class WolfBroGunPlayTargetActionConfig_ScatterFire : public ::RPG::Client::WolfBroGunPlayTargetActionConfig
	{
	public:
		::RPG::Client::WolfBroGunTargetProjectile* projectile; // 0x18
		::System::String* attachPoint; // 0x20
		::System::Single loopDelay; // 0x28
		::System::Int32 loopCount; // 0x2C
		::System::Single startRotateY; // 0x30
		::System::Single loopOffsetY; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_SCATTERFIRE_CTOR_OFFSET))(this);
		}

		::JNKPPLPLFOM* EINKGFCBAJI()
		{
			return ((::JNKPPLPLFOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_SCATTERFIRE_EINKGFCBAJI_OFFSET))(this);
		}

	};
}
