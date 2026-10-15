#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Decimal.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class Nullable; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CYSHARP_THREADING_TASKS_LINQ_AVERAGE__AVERAGEASYNC_D__36_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C5E4C0)
#define CYSHARP_THREADING_TASKS_LINQ_AVERAGE__AVERAGEASYNC_D__36_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B0)

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Average__AverageAsync_d__36_TypeDefinitionIndex = 45243;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36>
	struct alignas(8) Average__AverageAsync_d__36
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x20
		::System::Byte _padding0[0x20];
		::System::Object* __u__1; // 0x48
		::System::Byte _padding1[0x8];
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>* source; // 0x58
		::System::Threading::CancellationToken cancellationToken; // 0x60
		::System::Object* __7__wrap4; // 0x68
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::Nullable*>* _e_5__4; // 0x70
		::System::Int32 __1__state; // 0x78
		::System::Nullable* _sum_5__3; // 0x7C
		::System::Byte _padding2[0xC];
		::System::Int32 __7__wrap5; // 0x90
		::System::Byte _padding3[0x4];
		::System::Int64 _count_5__2; // 0x98
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_AVERAGE__AVERAGEASYNC_D__36_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_AVERAGE__AVERAGEASYNC_D__36_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
}
