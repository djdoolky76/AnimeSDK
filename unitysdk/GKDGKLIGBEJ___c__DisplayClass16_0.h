#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class GameEntity; }

#define GKDGKLIGBEJ___C__DISPLAYCLASS16_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1A8CE270)
#define GKDGKLIGBEJ___C__DISPLAYCLASS16_0___ONBATTLEABILITYCURRENTHPCHANGE_B__0_OFFSET UNITYSDK_OFFSET(0x1A8CEA60)

inline static constexpr unsigned int GKDGKLIGBEJ___c__DisplayClass16_0_TypeDefinitionIndex = 74078;

	class GKDGKLIGBEJ___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::AbilityCurrentHPChange* evt; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDGKLIGBEJ___C__DISPLAYCLASS16_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __OnBattleAbilityCurrentHPChange_b__0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GKDGKLIGBEJ___C__DISPLAYCLASS16_0___ONBATTLEABILITYCURRENTHPCHANGE_B__0_OFFSET))(this, a1);
		}

	};
