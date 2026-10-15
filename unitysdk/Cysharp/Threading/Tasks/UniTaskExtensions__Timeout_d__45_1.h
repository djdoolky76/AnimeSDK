#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/DelayType.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/TimeSpan.h"
namespace System { class Object; }
namespace System::Threading { class CancellationTokenSource; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions__Timeout_d__45_1_TypeDefinitionIndex = 38425;

	template <typename T>
	struct alignas(8) UniTaskExtensions__Timeout_d__45_1
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x0
		::System::TimeSpan timeout; // 0x0
		::Cysharp::Threading::Tasks::DelayType delayType; // 0x0
		::Cysharp::Threading::Tasks::PlayerLoopTiming timeoutCheckTiming; // 0x0
		::Cysharp::Threading::Tasks::UniTask task; // 0x0
		::System::Threading::CancellationTokenSource* taskCancellationTokenSource; // 0x0
		::System::Threading::CancellationTokenSource* _delayCancellationTokenSource_5__2; // 0x0
		::Cysharp::Threading::Tasks::UniTask _memorizedTask_5__3; // 0x0
		::System::Object* __u__1; // 0x0
		::System::Object* __u__2; // 0x0
	};
}
