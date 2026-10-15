#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/DelayType.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/TimeSpan.h"
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__TIMEOUTWITHOUTEXCEPTION_D__46_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C5F940)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__TIMEOUTWITHOUTEXCEPTION_D__46_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions__TimeoutWithoutException_d__46_TypeDefinitionIndex = 38426;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46>
	struct alignas(8) UniTaskExtensions__TimeoutWithoutException_d__46
	{
		::System::Threading::CancellationTokenSource* taskCancellationTokenSource; // 0x10
		::Cysharp::Threading::Tasks::UniTask task; // 0x18
		::System::Object* __u__1; // 0x28
		::System::Byte _padding0[0x10];
		::System::Threading::CancellationTokenSource* _delayCancellationTokenSource_5__2; // 0x40
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> __t__builder; // 0x48
		::System::Byte _padding1[0x10];
		::Cysharp::Threading::Tasks::DelayType delayType; // 0x60
		::System::Byte _padding2[0x4];
		::System::TimeSpan timeout; // 0x68
		::System::Int32 __1__state; // 0x70
		::Cysharp::Threading::Tasks::PlayerLoopTiming timeoutCheckTiming; // 0x74
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__TIMEOUTWITHOUTEXCEPTION_D__46_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__TIMEOUTWITHOUTEXCEPTION_D__46_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
}
