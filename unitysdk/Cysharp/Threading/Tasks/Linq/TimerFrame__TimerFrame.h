#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/MoveNextSource.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"

#define CYSHARP_THREADING_TASKS_LINQ_TIMERFRAME__TIMERFRAME_CTOR_OFFSET UNITYSDK_OFFSET(0x203C1470)
#define CYSHARP_THREADING_TASKS_LINQ_TIMERFRAME__TIMERFRAME_DISPOSEASYNC_OFFSET UNITYSDK_OFFSET(0x203C17E0)
#define CYSHARP_THREADING_TASKS_LINQ_TIMERFRAME__TIMERFRAME_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x203C16F0)
#define CYSHARP_THREADING_TASKS_LINQ_TIMERFRAME__TIMERFRAME_MOVENEXTASYNC_OFFSET UNITYSDK_OFFSET(0x203C1700)
#define CYSHARP_THREADING_TASKS_LINQ_TIMERFRAME__TIMERFRAME_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x203C1830)

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int TimerFrame__TimerFrame_TypeDefinitionIndex = 46754;

	class TimerFrame__TimerFrame : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration; // 0x30
		::System::Threading::CancellationToken cancellationToken; // 0x48
		::System::Int32 dueTimeFrameCount; // 0x50
		::System::Boolean dueTimePhase; // 0x54
		::System::Boolean disposed; // 0x55
		::System::Boolean completed; // 0x56
		::System::Byte _padding0[0x1];
		::System::Nullable_1<::System::Int32> periodFrameCount; // 0x58
		::System::Int32 currentFrame; // 0x60
		::System::Int32 initialFrame; // 0x64
		::System::Void _ctor(::System::Int32 a1, ::System::Nullable_1<::System::Int32> a2, ::Cysharp::Threading::Tasks::PlayerLoopTiming a3, ::System::Threading::CancellationToken a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Int32>, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_TIMERFRAME__TIMERFRAME_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Cysharp::Threading::Tasks::AsyncUnit get_Current()
		{
			return ((::Cysharp::Threading::Tasks::AsyncUnit(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_TIMERFRAME__TIMERFRAME_GET_CURRENT_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> MoveNextAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_TIMERFRAME__TIMERFRAME_MOVENEXTASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask DisposeAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_TIMERFRAME__TIMERFRAME_DISPOSEASYNC_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_TIMERFRAME__TIMERFRAME_MOVENEXT_OFFSET))(this);
		}

	};
}
