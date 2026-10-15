#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_LastDefender; }

#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_LASTDEFENDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D55ACD0)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_LASTDEFENDER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D55ACE0)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_LASTDEFENDER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D55AC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleTargetEvaluator_LastDefender_TypeDefinitionIndex = 15769;

	class ChenLingBattleTargetEvaluator_LastDefender : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_LASTDEFENDER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_LastDefender* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_LastDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_LASTDEFENDER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_LastDefender* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_LastDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_LASTDEFENDER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
