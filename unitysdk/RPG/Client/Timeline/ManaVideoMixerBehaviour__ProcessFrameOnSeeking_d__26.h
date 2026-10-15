#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
namespace RPG::Client::Timeline { class ManaVideoClip; }
namespace RPG::Client::Timeline { class ManaVideoMixerBehaviour; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR__PROCESSFRAMEONSEEKING_D__26_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xF2E30)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR__PROCESSFRAMEONSEEKING_D__26_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B60)

namespace RPG::Client::Timeline
{
	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26>
	struct alignas(8) ManaVideoMixerBehaviour__ProcessFrameOnSeeking_d__26
	{
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x10
		::RPG::Client::Timeline::ManaVideoClip* clip; // 0x30
		::System::Runtime::CompilerServices::TaskAwaiter __u__1; // 0x38
		::RPG::Client::Timeline::ManaVideoMixerBehaviour* __4__this; // 0x40
		::UnityEngine::Timeline::TimelineClip* activeClip; // 0x48
		::System::Boolean _movieInfoReplaced_5__2; // 0x50
		::System::Byte _padding0[0x3];
		::System::Int32 __1__state; // 0x54
		::System::Double frameTime; // 0x58
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR__PROCESSFRAMEONSEEKING_D__26_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR__PROCESSFRAMEONSEEKING_D__26_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
}
