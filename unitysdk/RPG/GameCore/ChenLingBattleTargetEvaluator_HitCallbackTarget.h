#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_HitCallbackTarget; }

#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_HITCALLBACKTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D588420)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_HITCALLBACKTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D588430)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_HITCALLBACKTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D588390)

namespace RPG::GameCore
{
	class ChenLingBattleTargetEvaluator_HitCallbackTarget : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_HITCALLBACKTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_HitCallbackTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_HitCallbackTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_HITCALLBACKTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_HitCallbackTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_HitCallbackTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_HITCALLBACKTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
