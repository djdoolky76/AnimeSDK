#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionConfig.h"
class JNKPPLPLFOM;
namespace System { class String; }

#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_PLAYANIMSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0xE46B3F0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_PLAYANIMSTATE_EINKGFCBAJI_OFFSET UNITYSDK_OFFSET(0xE46B370)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTargetActionConfig_PlayAnimState_TypeDefinitionIndex = 68716;

	class WolfBroGunPlayTargetActionConfig_PlayAnimState : public ::RPG::Client::WolfBroGunPlayTargetActionConfig
	{
	public:
		::System::String* state; // 0x18
		::System::Int32 layerIndex; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_PLAYANIMSTATE_CTOR_OFFSET))(this);
		}

		::JNKPPLPLFOM* EINKGFCBAJI()
		{
			return ((::JNKPPLPLFOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_PLAYANIMSTATE_EINKGFCBAJI_OFFSET))(this);
		}

	};
}
