#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityConditionChecker.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleAbilityConditionChecker_OnSelfDeadEffectFinish; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFDEADEFFECTFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57EC50)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFDEADEFFECTFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D57EC60)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFDEADEFFECTFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D57EBC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbilityConditionChecker_OnSelfDeadEffectFinish_TypeDefinitionIndex = 15727;

	class ChenLingBattleAbilityConditionChecker_OnSelfDeadEffectFinish : public ::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFDEADEFFECTFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfDeadEffectFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfDeadEffectFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFDEADEFFECTFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfDeadEffectFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfDeadEffectFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFDEADEFFECTFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
