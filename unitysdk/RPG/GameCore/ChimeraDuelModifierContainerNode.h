#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelModifier; }
namespace RPG::GameCore { class ChimeraDuelModifierContainerNode; }

#define RPG_GAMECORE_CHIMERADUELMODIFIERCONTAINERNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A5720)
#define RPG_GAMECORE_CHIMERADUELMODIFIERCONTAINERNODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A5730)
#define RPG_GAMECORE_CHIMERADUELMODIFIERCONTAINERNODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A56D0)

namespace RPG::GameCore
{
	class ChimeraDuelModifierContainerNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraDuelModifier*>* Modifiers; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMODIFIERCONTAINERNODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelModifierContainerNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelModifierContainerNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMODIFIERCONTAINERNODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelModifierContainerNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelModifierContainerNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMODIFIERCONTAINERNODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
