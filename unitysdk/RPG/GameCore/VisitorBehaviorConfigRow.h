#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VisitorBehaviorConfigRow; }

#define RPG_GAMECORE_VISITORBEHAVIORCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC90F20)
#define RPG_GAMECORE_VISITORBEHAVIORCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC90BD0)

namespace RPG::GameCore
{
	class VisitorBehaviorConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 PerformanceID; // 0x10
		::System::UInt32 DefaultPerformanceID; // 0x14
		::System::UInt32 DefaultIdleFreeStyleMotionID; // 0x18
		::System::Single NPCRotationYInfo; // 0x1C
		::System::UInt32 RewardID; // 0x20
		::System::UInt32 AnchorID; // 0x24
		::System::UInt32 BehaviorID; // 0x28
		::System::UInt32 NpcBubbleTalkSentenceID; // 0x2C
		::System::UInt32 NPCGroupID; // 0x30
		::System::UInt32 VisitorID; // 0x34
		::System::UInt32 NPCID; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VISITORBEHAVIORCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::VisitorBehaviorConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VisitorBehaviorConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VISITORBEHAVIORCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
