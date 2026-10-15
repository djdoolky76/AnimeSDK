#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Decimal.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CYSHARP_THREADING_TASKS_LINQ_AVERAGE__AVERAGEASYNC_D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C5E470)
#define CYSHARP_THREADING_TASKS_LINQ_AVERAGE__AVERAGEASYNC_D__16_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B0)

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Average__AverageAsync_d__16_TypeDefinitionIndex = 45233;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16>
	struct alignas(8) Average__AverageAsync_d__16
	{
		::System::Threading::CancellationToken cancellationToken; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x18
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x28
		::System::Byte _padding0[0x18];
		::System::Object* __u__1; // 0x48
		::System::Byte _padding1[0x8];
		::System::Object* __7__wrap4; // 0x58
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::Decimal>* _e_5__4; // 0x60
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>* source; // 0x68
		::System::Int64 _count_5__2; // 0x70
		::System::Int32 __1__state; // 0x78
		::System::Decimal _sum_5__3; // 0x7C
		::System::Int32 __7__wrap5; // 0x8C
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_AVERAGE__AVERAGEASYNC_D__16_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_AVERAGE__AVERAGEASYNC_D__16_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
}
