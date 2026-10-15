#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelSwapPositionNode; }

#define RPG_GAMECORE_CHIMERADUELSWAPPOSITIONNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AB520)
#define RPG_GAMECORE_CHIMERADUELSWAPPOSITIONNODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5AB530)
#define RPG_GAMECORE_CHIMERADUELSWAPPOSITIONNODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5AB4D0)

namespace RPG::GameCore
{
	class ChimeraDuelSwapPositionNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* From; // 0x10
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* To; // 0x18
		::System::Single SwapTime; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSWAPPOSITIONNODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelSwapPositionNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelSwapPositionNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSWAPPOSITIONNODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelSwapPositionNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelSwapPositionNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSWAPPOSITIONNODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
