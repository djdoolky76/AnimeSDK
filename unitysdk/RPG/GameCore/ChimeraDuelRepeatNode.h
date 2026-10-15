#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelNode; }
namespace RPG::GameCore { class BaseChimeraDuelSaveEntitySelectionConfig; }
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }
namespace RPG::GameCore { class ChimeraDuelRepeatNode; }

#define RPG_GAMECORE_CHIMERADUELREPEATNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A9420)
#define RPG_GAMECORE_CHIMERADUELREPEATNODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A9430)
#define RPG_GAMECORE_CHIMERADUELREPEATNODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A93D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelRepeatNode_TypeDefinitionIndex = 15982;

	class ChimeraDuelRepeatNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelNode*>* Nodes; // 0x10
		::RPG::GameCore::BaseChimeraDuelValueGetter* RepeatTimesValueGetter; // 0x18
		::System::Single IntervalTime; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig* SaveSelection; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELREPEATNODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelRepeatNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelRepeatNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELREPEATNODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelRepeatNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelRepeatNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELREPEATNODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
