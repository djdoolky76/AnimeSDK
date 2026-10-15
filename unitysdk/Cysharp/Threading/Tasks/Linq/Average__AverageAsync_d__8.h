#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CYSHARP_THREADING_TASKS_LINQ_AVERAGE__AVERAGEASYNC_D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C5EC40)
#define CYSHARP_THREADING_TASKS_LINQ_AVERAGE__AVERAGEASYNC_D__8_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B0)

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Average__AverageAsync_d__8_TypeDefinitionIndex = 45247;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
	struct alignas(8) Average__AverageAsync_d__8
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x10
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::Single>* _e_5__4; // 0x20
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>* source; // 0x28
		::System::Object* __u__1; // 0x30
		::System::Byte _padding0[0x8];
		::System::Threading::CancellationToken cancellationToken; // 0x40
		::System::Object* __7__wrap4; // 0x48
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Single> __t__builder; // 0x50
		::System::Byte _padding1[0x10];
		::System::Int32 __1__state; // 0x68
		::System::Single _sum_5__3; // 0x6C
		::System::Int32 __7__wrap5; // 0x70
		::System::Byte _padding2[0x4];
		::System::Int64 _count_5__2; // 0x78
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_AVERAGE__AVERAGEASYNC_D__8_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_AVERAGE__AVERAGEASYNC_D__8_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
}
