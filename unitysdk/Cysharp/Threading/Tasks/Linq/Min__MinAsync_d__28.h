#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Nullable_1.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CYSHARP_THREADING_TASKS_LINQ_MIN__MINASYNC_D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C5ED30)
#define CYSHARP_THREADING_TASKS_LINQ_MIN__MINASYNC_D__28_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B0)

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Min__MinAsync_d__28_TypeDefinitionIndex = 45480;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28>
	struct alignas(8) Min__MinAsync_d__28
	{
		::System::Object* __u__1; // 0x10
		::System::Byte _padding0[0x8];
		::System::Object* __7__wrap3; // 0x20
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int64>>* source; // 0x28
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::Nullable_1<::System::Int64>>* _e_5__3; // 0x30
		::System::Threading::CancellationToken cancellationToken; // 0x38
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Nullable_1<::System::Int64>> __t__builder; // 0x40
		::System::Byte _padding1[0x18];
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x60
		::System::Nullable_1<::System::Int64> __7__wrap5; // 0x70
		::System::Byte _padding2[0x8];
		::System::Nullable_1<::System::Int64> _value_5__2; // 0x80
		::System::Byte _padding3[0x8];
		::System::Int32 __7__wrap4; // 0x90
		::System::Int32 __1__state; // 0x94
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_MIN__MINASYNC_D__28_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_MIN__MINASYNC_D__28_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
}
