#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"

#define RPG_CLIENT_TIMELINECONTROLTARGETSTATEMARK_CTOR_OFFSET UNITYSDK_OFFSET(0xE2ABD80)

namespace RPG::Client
{
	class TimelineControlTargetStateMark : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::System::Boolean EnableRedo; // 0x18
		::System::Boolean LoopState; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINECONTROLTARGETSTATEMARK_CTOR_OFFSET))(this);
		}

	};
}
