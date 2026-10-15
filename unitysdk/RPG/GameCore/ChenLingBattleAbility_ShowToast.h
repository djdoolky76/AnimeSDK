#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleAbility_ShowToast; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITY_SHOWTOAST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D581530)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_SHOWTOAST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D581540)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_SHOWTOAST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5814E0)

namespace RPG::GameCore
{
	class ChenLingBattleAbility_ShowToast : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* EffectTargets; // 0x10
		::RPG::Client::TextID Text; // 0x18
		::RPG::GameCore::BaseChenLingBattleValueGetter* Param; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_SHOWTOAST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbility_ShowToast* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbility_ShowToast*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_SHOWTOAST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbility_ShowToast* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbility_ShowToast*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_SHOWTOAST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
