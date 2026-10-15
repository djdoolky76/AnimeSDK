#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelBubbleEventType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelTalkNode; }

#define RPG_GAMECORE_CHIMERADUELTALKNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AB670)
#define RPG_GAMECORE_CHIMERADUELTALKNODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5AB680)
#define RPG_GAMECORE_CHIMERADUELTALKNODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5AB620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelTalkNode_TypeDefinitionIndex = 15972;

	class ChimeraDuelTalkNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::RPG::GameCore::ChimeraDuelBubbleEventType EventType; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* TargetSelector; // 0x18
		::System::Boolean IsImmediateFinish; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELTALKNODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelTalkNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelTalkNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELTALKNODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelTalkNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelTalkNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELTALKNODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
