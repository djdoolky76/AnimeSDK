#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleInitPositionEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleInitPositionEvaluator_Back; }

#define RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_BACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5584B0)
#define RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_BACK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5584C0)
#define RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_BACK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D558420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleInitPositionEvaluator_Back_TypeDefinitionIndex = 15755;

	class ChenLingBattleInitPositionEvaluator_Back : public ::RPG::GameCore::BaseChenLingBattleInitPositionEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_BACK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Back* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Back*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_BACK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Back* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Back*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_BACK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
