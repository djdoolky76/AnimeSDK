#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraBattleSwapPosition; }
namespace RPG::GameCore { class ChimeraBattleTargetEvaluator; }

#define RPG_GAMECORE_CHIMERABATTLESWAPPOSITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D56B310)
#define RPG_GAMECORE_CHIMERABATTLESWAPPOSITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D56B320)
#define RPG_GAMECORE_CHIMERABATTLESWAPPOSITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D56C220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattleSwapPosition_TypeDefinitionIndex = 15878;

	class ChimeraBattleSwapPosition : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::RPG::GameCore::ChimeraBattleTargetEvaluator* From; // 0x18
		::RPG::GameCore::ChimeraBattleTargetEvaluator* To; // 0x20
		::System::Single Time; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESWAPPOSITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraBattleSwapPosition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraBattleSwapPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESWAPPOSITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraBattleSwapPosition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraBattleSwapPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESWAPPOSITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
