#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelNpcAnimatorControlNode; }
namespace RPG::GameCore { class ChimeraDuelNpcSelectorConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELNPCANIMATORCONTROLNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A5E20)
#define RPG_GAMECORE_CHIMERADUELNPCANIMATORCONTROLNODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A5E30)
#define RPG_GAMECORE_CHIMERADUELNPCANIMATORCONTROLNODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A5DD0)

namespace RPG::GameCore
{
	class ChimeraDuelNpcAnimatorControlNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::RPG::GameCore::ChimeraDuelNpcSelectorConfig* Npc; // 0x10
		::System::String* AnimatorTrigger; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNPCANIMATORCONTROLNODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelNpcAnimatorControlNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelNpcAnimatorControlNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNPCANIMATORCONTROLNODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelNpcAnimatorControlNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelNpcAnimatorControlNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNPCANIMATORCONTROLNODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
