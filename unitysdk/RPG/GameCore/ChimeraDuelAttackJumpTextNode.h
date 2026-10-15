#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelAttackJumpTextNode; }

#define RPG_GAMECORE_CHIMERADUELATTACKJUMPTEXTNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D59AE80)
#define RPG_GAMECORE_CHIMERADUELATTACKJUMPTEXTNODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D59AE90)
#define RPG_GAMECORE_CHIMERADUELATTACKJUMPTEXTNODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D59ADF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelAttackJumpTextNode_TypeDefinitionIndex = 15963;

	class ChimeraDuelAttackJumpTextNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELATTACKJUMPTEXTNODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelAttackJumpTextNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelAttackJumpTextNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELATTACKJUMPTEXTNODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelAttackJumpTextNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelAttackJumpTextNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELATTACKJUMPTEXTNODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
