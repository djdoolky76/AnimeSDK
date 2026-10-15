#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelNode; }
namespace RPG::GameCore { class ChimeraDuelBranchNode; }
namespace RPG::GameCore { class ChimeraDuelPredicateBase; }

#define RPG_GAMECORE_CHIMERADUELBRANCHNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D59B3C0)
#define RPG_GAMECORE_CHIMERADUELBRANCHNODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D59B3D0)
#define RPG_GAMECORE_CHIMERADUELBRANCHNODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D59B370)

namespace RPG::GameCore
{
	class ChimeraDuelBranchNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::RPG::GameCore::ChimeraDuelPredicateBase* Condition; // 0x10
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelNode*>* TrueNode; // 0x18
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelNode*>* FalseNode; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBRANCHNODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelBranchNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelBranchNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBRANCHNODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelBranchNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelBranchNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBRANCHNODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
