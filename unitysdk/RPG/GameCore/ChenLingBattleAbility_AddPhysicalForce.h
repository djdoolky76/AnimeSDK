#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleAbility_AddPhysicalForce; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITY_ADDPHYSICALFORCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57F170)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_ADDPHYSICALFORCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D57F180)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_ADDPHYSICALFORCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D57F120)

namespace RPG::GameCore
{
	class ChenLingBattleAbility_AddPhysicalForce : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* Targets; // 0x10
		::RPG::GameCore::BaseChenLingBattleValueGetter* Force; // 0x18
		::RPG::GameCore::BaseChenLingBattleValueGetter* Duration; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_ADDPHYSICALFORCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbility_AddPhysicalForce* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbility_AddPhysicalForce*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_ADDPHYSICALFORCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbility_AddPhysicalForce* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbility_AddPhysicalForce*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_ADDPHYSICALFORCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
