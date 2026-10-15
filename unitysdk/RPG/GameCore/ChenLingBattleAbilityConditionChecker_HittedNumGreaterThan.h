#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityConditionChecker.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleAbilityConditionChecker_HittedNumGreaterThan; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_HITTEDNUMGREATERTHAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5509E0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_HITTEDNUMGREATERTHAN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5509F0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_HITTEDNUMGREATERTHAN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D550920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbilityConditionChecker_HittedNumGreaterThan_TypeDefinitionIndex = 15721;

	class ChenLingBattleAbilityConditionChecker_HittedNumGreaterThan : public ::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* HittedNum; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_HITTEDNUMGREATERTHAN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_HittedNumGreaterThan* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_HittedNumGreaterThan*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_HITTEDNUMGREATERTHAN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_HittedNumGreaterThan* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_HittedNumGreaterThan*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_HITTEDNUMGREATERTHAN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
