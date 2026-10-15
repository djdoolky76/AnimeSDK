#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_Attacker; }

#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_ATTACKER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D55A430)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_ATTACKER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D55A440)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_ATTACKER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D55A3A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleTargetEvaluator_Attacker_TypeDefinitionIndex = 15771;

	class ChenLingBattleTargetEvaluator_Attacker : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_ATTACKER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_Attacker* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_Attacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_ATTACKER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_Attacker* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_Attacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_ATTACKER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
