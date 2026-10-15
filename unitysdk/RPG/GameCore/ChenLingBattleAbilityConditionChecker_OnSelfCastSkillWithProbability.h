#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityConditionChecker.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleAbilityConditionChecker_OnSelfCastSkillWithProbability; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFCASTSKILLWITHPROBABILITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57EA00)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFCASTSKILLWITHPROBABILITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D57EA10)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFCASTSKILLWITHPROBABILITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D57E9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbilityConditionChecker_OnSelfCastSkillWithProbability_TypeDefinitionIndex = 15729;

	class ChenLingBattleAbilityConditionChecker_OnSelfCastSkillWithProbability : public ::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* SkillID; // 0x10
		::RPG::GameCore::BaseChenLingBattleValueGetter* Probability; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFCASTSKILLWITHPROBABILITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfCastSkillWithProbability* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfCastSkillWithProbability*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFCASTSKILLWITHPROBABILITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfCastSkillWithProbability* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfCastSkillWithProbability*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFCASTSKILLWITHPROBABILITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
