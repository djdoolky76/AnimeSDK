#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }
namespace System::Threading { class SemaphoreSlim; }
namespace System::Threading { class SemaphoreSlim_TaskNode; }

#define SYSTEM_THREADING_SEMAPHORESLIM__WAITUNTILCOUNTORTIMEOUTASYNC_D__31_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C175C0)
#define SYSTEM_THREADING_SEMAPHORESLIM__WAITUNTILCOUNTORTIMEOUTASYNC_D__31_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B80)

namespace System::Threading
{
	inline static constexpr unsigned int SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__31_TypeDefinitionIndex = 811;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31>
	struct alignas(8) SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__31
	{
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Boolean> __t__builder; // 0x10
		::System::Byte _padding0[0x10];
		::System::Object* __7__wrap1; // 0x28
		::System::Threading::SemaphoreSlim* __4__this; // 0x30
		::System::Object* __u__1; // 0x38
		::System::Byte _padding1[0x8];
		::System::Object* __u__2; // 0x48
		::System::Byte _padding2[0x8];
		::System::Threading::CancellationToken cancellationToken; // 0x58
		::System::Threading::CancellationTokenSource* _cts_5__1; // 0x60
		::System::Threading::SemaphoreSlim_TaskNode* asyncWaiter; // 0x68
		::System::Int32 millisecondsTimeout; // 0x70
		::System::Int32 __1__state; // 0x74
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM__WAITUNTILCOUNTORTIMEOUTASYNC_D__31_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM__WAITUNTILCOUNTORTIMEOUTASYNC_D__31_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
}
