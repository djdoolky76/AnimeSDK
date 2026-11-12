#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelSummonNode; }

#define RPG_GAMECORE_CHIMERADUELSUMMONNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7BB920)
#define RPG_GAMECORE_CHIMERADUELSUMMONNODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E7BB930)
#define RPG_GAMECORE_CHIMERADUELSUMMONNODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E7BB830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelSummonNode_TypeDefinitionIndex = 16125;

	class ChimeraDuelSummonNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::System::Boolean IsDefaultLightWeightActive; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSUMMONNODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelSummonNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelSummonNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSUMMONNODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelSummonNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelSummonNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSUMMONNODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
