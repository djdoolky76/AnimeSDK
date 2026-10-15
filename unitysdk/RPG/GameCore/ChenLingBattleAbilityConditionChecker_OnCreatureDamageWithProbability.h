#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityConditionChecker.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleAbilityConditionChecker_OnCreatureDamageWithProbability; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONCREATUREDAMAGEWITHPROBABILITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D550D80)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONCREATUREDAMAGEWITHPROBABILITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D550D90)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONCREATUREDAMAGEWITHPROBABILITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D550CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbilityConditionChecker_OnCreatureDamageWithProbability_TypeDefinitionIndex = 15730;

	class ChenLingBattleAbilityConditionChecker_OnCreatureDamageWithProbability : public ::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Probability; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONCREATUREDAMAGEWITHPROBABILITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnCreatureDamageWithProbability* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnCreatureDamageWithProbability*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONCREATUREDAMAGEWITHPROBABILITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnCreatureDamageWithProbability* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnCreatureDamageWithProbability*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONCREATUREDAMAGEWITHPROBABILITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
