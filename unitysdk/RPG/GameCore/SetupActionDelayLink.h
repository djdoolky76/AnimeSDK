#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActionDelayLinkExtraBehaviorGroup; }
namespace RPG::GameCore { class SetupActionDelayLink; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETUPACTIONDELAYLINK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DACC530)
#define RPG_GAMECORE_SETUPACTIONDELAYLINK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DACC540)
#define RPG_GAMECORE_SETUPACTIONDELAYLINK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DACC500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetupActionDelayLink_TypeDefinitionIndex = 23270;

	class SetupActionDelayLink : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* LinkOwner; // 0x18
		::RPG::GameCore::TargetEvaluator* Follower; // 0x20
		::System::Int32 OrderInLink; // 0x28
		::System::Boolean IsInit; // 0x2C
		::System::Boolean CorrectActionOrder; // 0x2D
		::System::Byte _padding0[0x2];
		::RPG::GameCore::ActionDelayLinkExtraBehaviorGroup* LinkOwnerExtraBehavior; // 0x30
		::RPG::GameCore::ActionDelayLinkExtraBehaviorGroup* FollowerExtraBehavior; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPACTIONDELAYLINK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetupActionDelayLink* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetupActionDelayLink*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPACTIONDELAYLINK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetupActionDelayLink* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetupActionDelayLink*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPACTIONDELAYLINK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
