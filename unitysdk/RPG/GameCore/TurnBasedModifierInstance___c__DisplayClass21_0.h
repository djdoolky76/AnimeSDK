#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EAPGFKLGCDH.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE___C__DISPLAYCLASS21_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1A9F2660)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE___C__DISPLAYCLASS21_0___TRYHIDEEFFECTINSKILLUSE_B__0_OFFSET UNITYSDK_OFFSET(0x1AA05CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedModifierInstance___c__DisplayClass21_0_TypeDefinitionIndex = 56018;

	class TurnBasedModifierInstance___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedModifierInstance* __4__this; // 0x10
		::EAPGFKLGCDH effect; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE___C__DISPLAYCLASS21_0_CTOR_OFFSET))(this);
		}

		::System::Void __TryHideEffectInSkillUse_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE___C__DISPLAYCLASS21_0___TRYHIDEEFFECTINSKILLUSE_B__0_OFFSET))(this);
		}

	};
}
