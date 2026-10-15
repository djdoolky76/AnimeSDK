#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelCustomTalkNode; }

#define RPG_GAMECORE_CHIMERADUELCUSTOMTALKNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D570B40)
#define RPG_GAMECORE_CHIMERADUELCUSTOMTALKNODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D570B50)
#define RPG_GAMECORE_CHIMERADUELCUSTOMTALKNODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D570AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelCustomTalkNode_TypeDefinitionIndex = 15973;

	class ChimeraDuelCustomTalkNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::System::UInt32 CustomTalkID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* TargetSelector; // 0x18
		::System::Boolean IsImmediateFinish; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCUSTOMTALKNODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelCustomTalkNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelCustomTalkNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCUSTOMTALKNODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelCustomTalkNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelCustomTalkNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCUSTOMTALKNODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
