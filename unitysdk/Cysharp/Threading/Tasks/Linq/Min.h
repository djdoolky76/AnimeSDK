#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Nullable_1.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }

#define CYSHARP_THREADING_TASKS_LINQ_MIN_MINASYNC_10_OFFSET UNITYSDK_OFFSET(0x1F104B60)
#define CYSHARP_THREADING_TASKS_LINQ_MIN_MINASYNC_12_OFFSET UNITYSDK_OFFSET(0x1F104C00)
#define CYSHARP_THREADING_TASKS_LINQ_MIN_MINASYNC_14_OFFSET UNITYSDK_OFFSET(0x1F104C90)
#define CYSHARP_THREADING_TASKS_LINQ_MIN_MINASYNC_16_OFFSET UNITYSDK_OFFSET(0x1F104D40)
#define CYSHARP_THREADING_TASKS_LINQ_MIN_MINASYNC_18_OFFSET UNITYSDK_OFFSET(0x1F104DD0)
#define CYSHARP_THREADING_TASKS_LINQ_MIN_MINASYNC_20_OFFSET UNITYSDK_OFFSET(0x1F104E80)
#define CYSHARP_THREADING_TASKS_LINQ_MIN_MINASYNC_2_OFFSET UNITYSDK_OFFSET(0x1F104900)
#define CYSHARP_THREADING_TASKS_LINQ_MIN_MINASYNC_4_OFFSET UNITYSDK_OFFSET(0x1F104990)
#define CYSHARP_THREADING_TASKS_LINQ_MIN_MINASYNC_6_OFFSET UNITYSDK_OFFSET(0x1F104A30)
#define CYSHARP_THREADING_TASKS_LINQ_MIN_MINASYNC_8_OFFSET UNITYSDK_OFFSET(0x1F104AC0)

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Min_TypeDefinitionIndex = 45469;

	class Min : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Int32> MinAsync_2(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_MIN_MINASYNC_2_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Int64> MinAsync_4(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int64>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int64>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int64>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_MIN_MINASYNC_4_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Single> MinAsync_6(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Single>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_MIN_MINASYNC_6_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Double> MinAsync_8(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Double>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Double>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Double>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_MIN_MINASYNC_8_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal> MinAsync_10(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_MIN_MINASYNC_10_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Int32>> MinAsync_12(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int32>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Int32>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int32>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_MIN_MINASYNC_12_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Int64>> MinAsync_14(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int64>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Int64>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int64>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_MIN_MINASYNC_14_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Single>> MinAsync_16(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Single>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Single>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Single>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_MIN_MINASYNC_16_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Double>> MinAsync_18(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Double>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Double>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Double>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_MIN_MINASYNC_18_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>> MinAsync_20(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_MIN_MINASYNC_20_OFFSET))(a1, a2);
		}

	};
}
