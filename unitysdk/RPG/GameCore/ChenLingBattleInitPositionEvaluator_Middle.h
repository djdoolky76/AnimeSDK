#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleInitPositionEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleInitPositionEvaluator_Middle; }

#define RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_MIDDLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D586200)
#define RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_MIDDLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D586210)
#define RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_MIDDLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D586170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleInitPositionEvaluator_Middle_TypeDefinitionIndex = 15754;

	class ChenLingBattleInitPositionEvaluator_Middle : public ::RPG::GameCore::BaseChenLingBattleInitPositionEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_MIDDLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Middle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Middle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_MIDDLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Middle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Middle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_MIDDLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
