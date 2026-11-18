#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorAirHitType.h"
#include "unitysdk/MoleMole/Config/AnimatorGroundHitType.h"
#include "unitysdk/MoleMole/Config/AnimatorHitEffect.h"
#include "unitysdk/MoleMole/Config/CharacterAnimatorStateType.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITDATA_SPECIALHITEFFECTMAPITEM_MATCHANIMATORSTATE_OFFSET UNITYSDK_OFFSET(0x1653F110)
#define MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITDATA_SPECIALHITEFFECTMAPITEM_MATCH_OFFSET UNITYSDK_OFFSET(0x1653F040)
#define MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITDATA_SPECIALHITEFFECTMAPITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1653F160)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSpecialEffectHitData_SpecialHitEffectMapItem_TypeDefinitionIndex = 55951;

	class ConfigSpecialEffectHitData_SpecialHitEffectMapItem : public ::System::Object
	{
	public:
		::MoleMole::Config::AnimatorAirHitType specialHitAirHitType; // 0x10
		::MoleMole::Config::AnimatorHitEffect specialHitEffect; // 0x14
		::MoleMole::Config::AnimatorGroundHitType attackFrameGroundHitType; // 0x18
		::MoleMole::Config::CharacterAnimatorStateType animatorState; // 0x1C
		::MoleMole::Config::AnimatorGroundHitType specialHitGroundHitType; // 0x20
		::MoleMole::Config::AnimatorHitEffect attackFrameHitEffect; // 0x24
		::MoleMole::Config::AnimatorAirHitType attackFrameAirHitType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITDATA_SPECIALHITEFFECTMAPITEM__CTOR_OFFSET))(this);
		}

		::System::Boolean Match(::MoleMole::Config::AnimatorHitEffect hitEffect, ::MoleMole::Config::AnimatorGroundHitType groundHitType, ::MoleMole::Config::AnimatorAirHitType airHitType, ::MoleMole::Config::CharacterAnimatorStateType attackeeAnimState)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorHitEffect, ::MoleMole::Config::AnimatorGroundHitType, ::MoleMole::Config::AnimatorAirHitType, ::MoleMole::Config::CharacterAnimatorStateType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITDATA_SPECIALHITEFFECTMAPITEM_MATCH_OFFSET))(this, hitEffect, groundHitType, airHitType, attackeeAnimState);
		}

		::System::Boolean MatchAnimatorState(::MoleMole::Config::CharacterAnimatorStateType animStateType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::CharacterAnimatorStateType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITDATA_SPECIALHITEFFECTMAPITEM_MATCHANIMATORSTATE_OFFSET))(this, animStateType);
		}
	};
}
