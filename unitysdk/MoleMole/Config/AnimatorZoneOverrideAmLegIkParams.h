#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x11E7D500)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x11E7D2C0)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x11E7D7E0)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x11E7D7F0)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x11E7D8B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneOverrideAmLegIkParams_TypeDefinitionIndex = 78043;

	class AnimatorZoneOverrideAmLegIkParams : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Single StateOverrideFootUpVelocityLimit; // 0x50
		::System::Single StateOverridePelvisUpVelocityLimit; // 0x54
		::System::Single StateOverrideFootDownVelocityLimit; // 0x58
		::System::Single StateOverridePelvisDownVelocityLimit; // 0x5C
		::System::Single StateOverrideFootOffGroundHeight; // 0x60
		::System::Boolean StateOverrideEnableStrideWrapping; // 0x64
		::System::Byte _padding0[0x3];
		::System::Single StateOverrideFootOnGroundHeight; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
