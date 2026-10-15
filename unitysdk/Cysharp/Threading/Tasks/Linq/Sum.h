#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Nullable_1.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }

#define CYSHARP_THREADING_TASKS_LINQ_SUM_SUMASYNC_10_OFFSET UNITYSDK_OFFSET(0x1F10B3F0)
#define CYSHARP_THREADING_TASKS_LINQ_SUM_SUMASYNC_12_OFFSET UNITYSDK_OFFSET(0x1F10B480)
#define CYSHARP_THREADING_TASKS_LINQ_SUM_SUMASYNC_14_OFFSET UNITYSDK_OFFSET(0x1F10B510)
#define CYSHARP_THREADING_TASKS_LINQ_SUM_SUMASYNC_16_OFFSET UNITYSDK_OFFSET(0x1F10B5B0)
#define CYSHARP_THREADING_TASKS_LINQ_SUM_SUMASYNC_18_OFFSET UNITYSDK_OFFSET(0x1F10B650)
#define CYSHARP_THREADING_TASKS_LINQ_SUM_SUMASYNC_2_OFFSET UNITYSDK_OFFSET(0x1F10B1A0)
#define CYSHARP_THREADING_TASKS_LINQ_SUM_SUMASYNC_4_OFFSET UNITYSDK_OFFSET(0x1F10B240)
#define CYSHARP_THREADING_TASKS_LINQ_SUM_SUMASYNC_6_OFFSET UNITYSDK_OFFSET(0x1F10B2C0)
#define CYSHARP_THREADING_TASKS_LINQ_SUM_SUMASYNC_8_OFFSET UNITYSDK_OFFSET(0x1F10B350)
#define CYSHARP_THREADING_TASKS_LINQ_SUM_SUMASYNC_OFFSET UNITYSDK_OFFSET(0x1F10B120)

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Sum_TypeDefinitionIndex = 45609;

	class Sum : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Int32> SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_SUM_SUMASYNC_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Int64> SumAsync_2(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int64>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int64>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int64>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_SUM_SUMASYNC_2_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Single> SumAsync_4(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Single>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_SUM_SUMASYNC_4_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Double> SumAsync_6(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Double>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Double>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Double>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_SUM_SUMASYNC_6_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal> SumAsync_8(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_SUM_SUMASYNC_8_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Int32>> SumAsync_10(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int32>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Int32>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int32>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_SUM_SUMASYNC_10_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Int64>> SumAsync_12(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int64>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Int64>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int64>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_SUM_SUMASYNC_12_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Single>> SumAsync_14(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Single>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Single>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Single>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_SUM_SUMASYNC_14_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Double>> SumAsync_16(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Double>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Double>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Double>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_SUM_SUMASYNC_16_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>> SumAsync_18(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_SUM_SUMASYNC_18_OFFSET))(a1, a2);
		}

	};
}
