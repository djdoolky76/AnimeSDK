#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleAbility_SelfKill; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITY_SELFKILL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5812D0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_SELFKILL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5812E0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_SELFKILL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D581240)

namespace RPG::GameCore
{
	class ChenLingBattleAbility_SelfKill : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_SELFKILL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbility_SelfKill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbility_SelfKill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_SELFKILL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbility_SelfKill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbility_SelfKill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_SELFKILL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
