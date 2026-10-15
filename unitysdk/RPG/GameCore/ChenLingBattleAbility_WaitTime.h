#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleAbility_WaitTime; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITY_WAITTIME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D581EE0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_WAITTIME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D581EF0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_WAITTIME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D581E20)

namespace RPG::GameCore
{
	class ChenLingBattleAbility_WaitTime : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* WaitTime; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_WAITTIME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbility_WaitTime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbility_WaitTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_WAITTIME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbility_WaitTime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbility_WaitTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_WAITTIME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
