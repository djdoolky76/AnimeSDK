#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace RPG::GameCore { class ChenLingBattleAbility_Attack; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITY_ATTACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D551850)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_ATTACK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D551860)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_ATTACK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D551800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbility_Attack_TypeDefinitionIndex = 15745;

	class ChenLingBattleAbility_Attack : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* Attacker; // 0x10
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* Targets; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_ATTACK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbility_Attack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbility_Attack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_ATTACK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbility_Attack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbility_Attack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_ATTACK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
