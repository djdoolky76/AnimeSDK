#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityConditionChecker.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleAbilityConditionChecker_OnSelfDeadWithProbability; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFDEADWITHPROBABILITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57ED80)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFDEADWITHPROBABILITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D57ED90)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFDEADWITHPROBABILITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D57ECC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbilityConditionChecker_OnSelfDeadWithProbability_TypeDefinitionIndex = 15726;

	class ChenLingBattleAbilityConditionChecker_OnSelfDeadWithProbability : public ::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Probability; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFDEADWITHPROBABILITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfDeadWithProbability* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfDeadWithProbability*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFDEADWITHPROBABILITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfDeadWithProbability* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfDeadWithProbability*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFDEADWITHPROBABILITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
