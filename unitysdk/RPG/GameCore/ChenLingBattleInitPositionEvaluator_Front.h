#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleInitPositionEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleInitPositionEvaluator_Front; }

#define RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_FRONT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D586100)
#define RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_FRONT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D586110)
#define RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_FRONT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D586070)

namespace RPG::GameCore
{
	class ChenLingBattleInitPositionEvaluator_Front : public ::RPG::GameCore::BaseChenLingBattleInitPositionEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_FRONT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Front* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Front*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_FRONT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Front* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Front*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_FRONT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
