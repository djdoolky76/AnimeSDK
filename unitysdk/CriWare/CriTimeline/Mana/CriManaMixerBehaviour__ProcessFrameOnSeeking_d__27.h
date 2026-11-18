#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare::CriTimeline::Mana { class CriManaClipBase; }
namespace CriWare::CriTimeline::Mana { class CriManaMixerBehaviour; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR__PROCESSFRAMEONSEEKING_D__27_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x98DFD0)
#define CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR__PROCESSFRAMEONSEEKING_D__27_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x4B0120)

namespace CriWare::CriTimeline::Mana
{
	inline static constexpr unsigned int CriManaMixerBehaviour__ProcessFrameOnSeeking_d__27_TypeDefinitionIndex = 34585;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27>
	struct alignas(8) CriManaMixerBehaviour__ProcessFrameOnSeeking_d__27
	{
		::System::Runtime::CompilerServices::TaskAwaiter __u__1; // 0x10
		::UnityEngine::Timeline::TimelineClip* activeClip; // 0x18
		::CriWare::CriTimeline::Mana::CriManaClipBase* clip; // 0x20
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x28
		::CriWare::CriTimeline::Mana::CriManaMixerBehaviour* __4__this; // 0x48
		::System::Double frameTime; // 0x50
		::System::Int32 __1__state; // 0x58
		::System::Boolean _movieInfoReplaced_5__2; // 0x5C
		::System::Boolean _whileBreaker_5__3; // 0x5D

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR__PROCESSFRAMEONSEEKING_D__27_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR__PROCESSFRAMEONSEEKING_D__27_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
