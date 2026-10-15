#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleInitPositionEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleInitPositionEvaluator_Ascend; }

#define RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_ASCEND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D585E00)
#define RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_ASCEND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D585E10)
#define RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_ASCEND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D585D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleInitPositionEvaluator_Ascend_TypeDefinitionIndex = 15757;

	class ChenLingBattleInitPositionEvaluator_Ascend : public ::RPG::GameCore::BaseChenLingBattleInitPositionEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_ASCEND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Ascend* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Ascend*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_ASCEND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Ascend* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Ascend*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_ASCEND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
