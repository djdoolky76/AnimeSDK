#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"
#include "unitysdk/RPG/GameCore/ChenLingTeamSelectorType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_LeapSlamTarget; }

#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_LEAPSLAMTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5887E0)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_LEAPSLAMTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5887F0)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_LEAPSLAMTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D588790)

namespace RPG::GameCore
{
	class ChenLingBattleTargetEvaluator_LeapSlamTarget : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::RPG::GameCore::ChenLingTeamSelectorType TeamSelectorType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_LEAPSLAMTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_LeapSlamTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_LeapSlamTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_LEAPSLAMTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_LeapSlamTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_LeapSlamTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_LEAPSLAMTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
