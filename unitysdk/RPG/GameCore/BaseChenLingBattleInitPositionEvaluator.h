#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleInitPositionEvaluator; }

#define RPG_GAMECORE_BASECHENLINGBATTLEINITPOSITIONEVALUATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D43AA10)
#define RPG_GAMECORE_BASECHENLINGBATTLEINITPOSITIONEVALUATOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D43A9B0)
#define RPG_GAMECORE_BASECHENLINGBATTLEINITPOSITIONEVALUATOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D43A740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseChenLingBattleInitPositionEvaluator_TypeDefinitionIndex = 15752;

	class BaseChenLingBattleInitPositionEvaluator : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEINITPOSITIONEVALUATOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseChenLingBattleInitPositionEvaluator* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseChenLingBattleInitPositionEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEINITPOSITIONEVALUATOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseChenLingBattleInitPositionEvaluator* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseChenLingBattleInitPositionEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEINITPOSITIONEVALUATOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
