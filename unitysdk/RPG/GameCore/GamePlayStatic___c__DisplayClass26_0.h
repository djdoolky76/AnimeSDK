#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJDILIJMINH.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class SkillConfig; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define RPG_GAMECORE_GAMEPLAYSTATIC___C__DISPLAYCLASS26_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE6B5230)
#define RPG_GAMECORE_GAMEPLAYSTATIC___C__DISPLAYCLASS26_0__PRECALCSKILLSTANCE_B__0_OFFSET UNITYSDK_OFFSET(0xE6C2190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GamePlayStatic___c__DisplayClass26_0_TypeDefinitionIndex = 59017;

	class GamePlayStatic___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::SkillConfig* pSkillConfig; // 0x10
		::RPG::GameCore::TurnBasedAbilityComponent* pTargetTurnBasedAbility; // 0x18
		::RPG::PoolList_1<::AJDILIJMINH>* addByMaxStanceList; // 0x20
		::RPG::GameCore::TurnBasedAbilityComponent* pAttackerTurnBasedAbility; // 0x28
		::RPG::GameCore::FixPoint totalAddRatio; // 0x30
		::RPG::GameCore::FixPoint totalAddValue; // 0x38
		::RPG::GameCore::FixPoint totalForceAddRatio; // 0x40
		::System::Boolean forceStanceDamage; // 0x48
		::System::Byte _padding0[0x3];
		::RPG::GameCore::AttackDamageType addweaknessList; // 0x4C
		::RPG::GameCore::FixPoint totalMultiplyRatio; // 0x50
		::RPG::GameCore::FixPoint totalForceStanceBreakRatio; // 0x58
		::RPG::GameCore::FixPoint totalStanceBreakAddRatio; // 0x60
		::RPG::GameCore::FixPoint totalForceAddValue; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC___C__DISPLAYCLASS26_0_CTOR_OFFSET))(this);
		}

		::System::Void _PreCalcSkillStance_b__0(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC___C__DISPLAYCLASS26_0__PRECALCSKILLSTANCE_B__0_OFFSET))(this, a1);
		}

	};
}
