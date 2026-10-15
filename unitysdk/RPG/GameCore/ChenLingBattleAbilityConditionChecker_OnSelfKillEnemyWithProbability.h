#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityConditionChecker.h"
#include "unitysdk/RPG/GameCore/ChenLingDamageType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleAbilityConditionChecker_OnSelfKillEnemyWithProbability; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFKILLENEMYWITHPROBABILITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57EE60)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFKILLENEMYWITHPROBABILITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D57EE70)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFKILLENEMYWITHPROBABILITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D57EE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbilityConditionChecker_OnSelfKillEnemyWithProbability_TypeDefinitionIndex = 15724;

	class ChenLingBattleAbilityConditionChecker_OnSelfKillEnemyWithProbability : public ::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Probability; // 0x10
		::Il2CppArray<::RPG::GameCore::ChenLingDamageType>* ForbidDamageType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFKILLENEMYWITHPROBABILITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfKillEnemyWithProbability* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfKillEnemyWithProbability*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFKILLENEMYWITHPROBABILITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfKillEnemyWithProbability* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfKillEnemyWithProbability*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFKILLENEMYWITHPROBABILITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
