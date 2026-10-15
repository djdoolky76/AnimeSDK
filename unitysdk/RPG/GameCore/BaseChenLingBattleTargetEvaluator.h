#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }

#define RPG_GAMECORE_BASECHENLINGBATTLETARGETEVALUATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D43B730)
#define RPG_GAMECORE_BASECHENLINGBATTLETARGETEVALUATOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D43B6D0)
#define RPG_GAMECORE_BASECHENLINGBATTLETARGETEVALUATOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D43B000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseChenLingBattleTargetEvaluator_TypeDefinitionIndex = 15759;

	class BaseChenLingBattleTargetEvaluator : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLETARGETEVALUATOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseChenLingBattleTargetEvaluator* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseChenLingBattleTargetEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLETARGETEVALUATOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseChenLingBattleTargetEvaluator* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseChenLingBattleTargetEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLETARGETEVALUATOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
