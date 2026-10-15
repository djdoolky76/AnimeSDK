#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_LastAttacker; }

#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_LASTATTACKER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D588620)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_LASTATTACKER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D588630)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_LASTATTACKER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D588590)

namespace RPG::GameCore
{
	class ChenLingBattleTargetEvaluator_LastAttacker : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_LASTATTACKER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_LastAttacker* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_LastAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_LASTATTACKER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_LastAttacker* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_LastAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_LASTATTACKER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
