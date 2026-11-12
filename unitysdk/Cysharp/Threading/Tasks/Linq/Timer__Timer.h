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
#include "unitysdk/System/TimeSpan.h"

#define CYSHARP_THREADING_TASKS_LINQ_TIMER__TIMER_CTOR_OFFSET UNITYSDK_OFFSET(0x203C0B00)
#define CYSHARP_THREADING_TASKS_LINQ_TIMER__TIMER_DISPOSEASYNC_OFFSET UNITYSDK_OFFSET(0x203C0F00)
#define CYSHARP_THREADING_TASKS_LINQ_TIMER__TIMER_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x203C0E10)
#define CYSHARP_THREADING_TASKS_LINQ_TIMER__TIMER_MOVENEXTASYNC_OFFSET UNITYSDK_OFFSET(0x203C0E20)
#define CYSHARP_THREADING_TASKS_LINQ_TIMER__TIMER_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x203C0F50)

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Timer__Timer_TypeDefinitionIndex = 46751;

	class Timer__Timer : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		::System::Threading::CancellationToken cancellationToken; // 0x30
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration; // 0x38
		::System::Single elapsed; // 0x50
		::System::Single dueTime; // 0x54
		::System::Int32 initialFrame; // 0x58
		::System::Nullable_1<::System::Single> period; // 0x5C
		::Cysharp::Threading::Tasks::PlayerLoopTiming updateTiming; // 0x64
		::System::Boolean completed; // 0x68
		::System::Boolean disposed; // 0x69
		::System::Boolean dueTimePhase; // 0x6A
		::System::Boolean ignoreTimeScale; // 0x6B
		::System::Void _ctor(::System::TimeSpan a1, ::System::Nullable_1<::System::TimeSpan> a2, ::Cysharp::Threading::Tasks::PlayerLoopTiming a3, ::System::Boolean a4, ::System::Threading::CancellationToken a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan, ::System::Nullable_1<::System::TimeSpan>, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Boolean, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_TIMER__TIMER_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::Cysharp::Threading::Tasks::AsyncUnit get_Current()
		{
			return ((::Cysharp::Threading::Tasks::AsyncUnit(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_TIMER__TIMER_GET_CURRENT_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> MoveNextAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_TIMER__TIMER_MOVENEXTASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask DisposeAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_TIMER__TIMER_DISPOSEASYNC_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_TIMER__TIMER_MOVENEXT_OFFSET))(this);
		}

	};
}
