#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelWaitAnimationNormalizedTimeNode; }

#define RPG_GAMECORE_CHIMERADUELWAITANIMATIONNORMALIZEDTIMENODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AC0D0)
#define RPG_GAMECORE_CHIMERADUELWAITANIMATIONNORMALIZEDTIMENODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5AC0E0)
#define RPG_GAMECORE_CHIMERADUELWAITANIMATIONNORMALIZEDTIMENODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5AC000)

namespace RPG::GameCore
{
	class ChimeraDuelWaitAnimationNormalizedTimeNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::System::Single NormalizedTime; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELWAITANIMATIONNORMALIZEDTIMENODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelWaitAnimationNormalizedTimeNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelWaitAnimationNormalizedTimeNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELWAITANIMATIONNORMALIZEDTIMENODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelWaitAnimationNormalizedTimeNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelWaitAnimationNormalizedTimeNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELWAITANIMATIONNORMALIZEDTIMENODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
