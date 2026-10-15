#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleInitPositionEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleInitPositionEvaluator_All; }

#define RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_ALL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D585D00)
#define RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_ALL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D585D10)
#define RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_ALL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D585C70)

namespace RPG::GameCore
{
	class ChenLingBattleInitPositionEvaluator_All : public ::RPG::GameCore::BaseChenLingBattleInitPositionEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_ALL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_All* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_All*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_ALL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_All* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_All*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_ALL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
