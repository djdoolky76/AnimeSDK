#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Decimal.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CYSHARP_THREADING_TASKS_LINQ_SUM__SUMASYNC_D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C5E650)
#define CYSHARP_THREADING_TASKS_LINQ_SUM__SUMASYNC_D__16_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B0)

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Sum__SumAsync_d__16_TypeDefinitionIndex = 45614;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16>
	struct alignas(8) Sum__SumAsync_d__16
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Decimal> __t__builder; // 0x10
		::System::Byte _padding0[0x18];
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::Decimal>* _e_5__3; // 0x30
		::System::Object* __u__1; // 0x38
		::System::Byte _padding1[0x8];
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x48
		::System::Object* __7__wrap3; // 0x58
		::System::Threading::CancellationToken cancellationToken; // 0x60
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>* source; // 0x68
		::System::Decimal _sum_5__2; // 0x70
		::System::Int32 __1__state; // 0x80
		::System::Int32 __7__wrap4; // 0x84
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_SUM__SUMASYNC_D__16_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_SUM__SUMASYNC_D__16_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
}
