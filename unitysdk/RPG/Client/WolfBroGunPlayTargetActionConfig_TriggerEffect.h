#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionConfig.h"
#include "unitysdk/UnityEngine/Vector3.h"
class JNKPPLPLFOM;
namespace System { class String; }

#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_TRIGGEREFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xE476030)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_TRIGGEREFFECT_EINKGFCBAJI_OFFSET UNITYSDK_OFFSET(0xE475FB0)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTargetActionConfig_TriggerEffect_TypeDefinitionIndex = 68712;

	class WolfBroGunPlayTargetActionConfig_TriggerEffect : public ::RPG::Client::WolfBroGunPlayTargetActionConfig
	{
	public:
		::System::String* effectPath; // 0x18
		::System::String* attachPoint; // 0x20
		::System::Boolean followPoint; // 0x28
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 direction; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_TRIGGEREFFECT_CTOR_OFFSET))(this);
		}

		::JNKPPLPLFOM* EINKGFCBAJI()
		{
			return ((::JNKPPLPLFOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_TRIGGEREFFECT_EINKGFCBAJI_OFFSET))(this);
		}

	};
}
