#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleInitPositionEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleInitPositionEvaluator_Descend; }

#define RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_DESCEND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D586000)
#define RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_DESCEND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D586010)
#define RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_DESCEND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D585F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleInitPositionEvaluator_Descend_TypeDefinitionIndex = 15758;

	class ChenLingBattleInitPositionEvaluator_Descend : public ::RPG::GameCore::BaseChenLingBattleInitPositionEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_DESCEND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Descend* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Descend*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_DESCEND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Descend* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Descend*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_DESCEND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
