#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/TimeSpan.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }

#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_10_OFFSET UNITYSDK_OFFSET(0x203C20F0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_12_OFFSET UNITYSDK_OFFSET(0x203C21D0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_14_OFFSET UNITYSDK_OFFSET(0x203C22C0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_16_OFFSET UNITYSDK_OFFSET(0x203C23A0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_18_OFFSET UNITYSDK_OFFSET(0x203C2490)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_2_OFFSET UNITYSDK_OFFSET(0x203C1D70)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_4_OFFSET UNITYSDK_OFFSET(0x203C1E50)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_6_OFFSET UNITYSDK_OFFSET(0x203C1F20)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_8_OFFSET UNITYSDK_OFFSET(0x203C2000)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_OFFSET UNITYSDK_OFFSET(0x203C1C90)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_EVERYUPDATE_OFFSET UNITYSDK_OFFSET(0x203C40F0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_INTERVALFRAME_OFFSET UNITYSDK_OFFSET(0x203C4420)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_INTERVAL_OFFSET UNITYSDK_OFFSET(0x203C4210)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_10_OFFSET UNITYSDK_OFFSET(0x203C31C0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_12_OFFSET UNITYSDK_OFFSET(0x203C32A0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_14_OFFSET UNITYSDK_OFFSET(0x203C3380)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_16_OFFSET UNITYSDK_OFFSET(0x203C3470)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_18_OFFSET UNITYSDK_OFFSET(0x203C3550)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_20_OFFSET UNITYSDK_OFFSET(0x203C3640)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_2_OFFSET UNITYSDK_OFFSET(0x203C2E60)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_4_OFFSET UNITYSDK_OFFSET(0x203C2F30)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_6_OFFSET UNITYSDK_OFFSET(0x203C3010)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_8_OFFSET UNITYSDK_OFFSET(0x203C30E0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_10_OFFSET UNITYSDK_OFFSET(0x203C28E0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_12_OFFSET UNITYSDK_OFFSET(0x203C29D0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_14_OFFSET UNITYSDK_OFFSET(0x203C2AB0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_16_OFFSET UNITYSDK_OFFSET(0x203C2BA0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_18_OFFSET UNITYSDK_OFFSET(0x203C2C80)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_20_OFFSET UNITYSDK_OFFSET(0x203C2D70)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_2_OFFSET UNITYSDK_OFFSET(0x203C2580)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_4_OFFSET UNITYSDK_OFFSET(0x203C2650)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_6_OFFSET UNITYSDK_OFFSET(0x203C2730)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_8_OFFSET UNITYSDK_OFFSET(0x203C2800)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_RANGE_OFFSET UNITYSDK_OFFSET(0x203C3740)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_10_OFFSET UNITYSDK_OFFSET(0x203C3C80)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_12_OFFSET UNITYSDK_OFFSET(0x203C3D60)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_14_OFFSET UNITYSDK_OFFSET(0x203C3E40)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_16_OFFSET UNITYSDK_OFFSET(0x203C3F20)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_18_OFFSET UNITYSDK_OFFSET(0x203C4000)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_2_OFFSET UNITYSDK_OFFSET(0x203C3900)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_4_OFFSET UNITYSDK_OFFSET(0x203C39E0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_6_OFFSET UNITYSDK_OFFSET(0x203C3AB0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_8_OFFSET UNITYSDK_OFFSET(0x203C3B90)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_OFFSET UNITYSDK_OFFSET(0x203C3830)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_TIMERFRAME_1_OFFSET UNITYSDK_OFFSET(0x203C4320)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_TIMERFRAME_OFFSET UNITYSDK_OFFSET(0x203C4280)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_TIMER_1_OFFSET UNITYSDK_OFFSET(0x203C4190)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_TIMER_OFFSET UNITYSDK_OFFSET(0x203C4130)

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int UniTaskAsyncEnumerable_TypeDefinitionIndex = 46213;

	class UniTaskAsyncEnumerable : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Double> AverageAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Double>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Double> AverageAsync_2(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int64>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Double>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int64>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_2_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Single> AverageAsync_4(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Single>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_4_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Double> AverageAsync_6(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Double>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Double>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Double>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_6_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal> AverageAsync_8(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_8_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Double>> AverageAsync_10(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int32>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Double>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int32>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_10_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Double>> AverageAsync_12(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int64>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Double>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int64>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_12_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Single>> AverageAsync_14(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Single>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Single>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Single>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_14_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Double>> AverageAsync_16(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Double>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Double>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Double>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_16_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>> AverageAsync_18(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_18_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Int32> MinAsync_2(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_2_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Int64> MinAsync_4(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int64>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int64>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int64>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_4_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Single> MinAsync_6(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Single>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_6_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Double> MinAsync_8(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Double>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Double>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Double>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_8_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal> MinAsync_10(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_10_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Int32>> MinAsync_12(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int32>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Int32>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int32>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_12_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Int64>> MinAsync_14(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int64>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Int64>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int64>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_14_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Single>> MinAsync_16(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Single>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Single>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Single>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_16_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Double>> MinAsync_18(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Double>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Double>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Double>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_18_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>> MinAsync_20(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_20_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Int32> MaxAsync_2(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_2_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Int64> MaxAsync_4(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int64>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int64>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int64>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_4_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Single> MaxAsync_6(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Single>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_6_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Double> MaxAsync_8(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Double>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Double>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Double>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_8_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal> MaxAsync_10(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_10_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Int32>> MaxAsync_12(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int32>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Int32>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int32>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_12_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Int64>> MaxAsync_14(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int64>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Int64>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int64>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_14_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Single>> MaxAsync_16(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Single>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Single>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Single>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_16_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Double>> MaxAsync_18(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Double>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Double>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Double>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_18_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>> MaxAsync_20(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_20_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>* Range(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_RANGE_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Int32> SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Int64> SumAsync_2(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int64>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int64>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int64>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_2_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Single> SumAsync_4(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Single>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_4_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Double> SumAsync_6(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Double>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Double>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Double>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_6_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal> SumAsync_8(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_8_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Int32>> SumAsync_10(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int32>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Int32>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int32>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_10_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Int64>> SumAsync_12(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int64>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Int64>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int64>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_12_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Single>> SumAsync_14(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Single>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Single>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Single>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_14_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Double>> SumAsync_16(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Double>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Double>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Double>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_16_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>> SumAsync_18(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_18_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* EveryUpdate(::Cysharp::Threading::Tasks::PlayerLoopTiming a1, ::System::Boolean a2)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*(*)(::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_EVERYUPDATE_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* Timer(::System::TimeSpan a1, ::Cysharp::Threading::Tasks::PlayerLoopTiming a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*(*)(::System::TimeSpan, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_TIMER_OFFSET))(a1, a2, a3, a4);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* Timer_1(::System::TimeSpan a1, ::System::TimeSpan a2, ::Cysharp::Threading::Tasks::PlayerLoopTiming a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*(*)(::System::TimeSpan, ::System::TimeSpan, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_TIMER_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* Interval(::System::TimeSpan a1, ::Cysharp::Threading::Tasks::PlayerLoopTiming a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*(*)(::System::TimeSpan, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_INTERVAL_OFFSET))(a1, a2, a3, a4);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* TimerFrame(::System::Int32 a1, ::Cysharp::Threading::Tasks::PlayerLoopTiming a2, ::System::Boolean a3)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*(*)(::System::Int32, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_TIMERFRAME_OFFSET))(a1, a2, a3);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* TimerFrame_1(::System::Int32 a1, ::System::Int32 a2, ::Cysharp::Threading::Tasks::PlayerLoopTiming a3, ::System::Boolean a4)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*(*)(::System::Int32, ::System::Int32, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_TIMERFRAME_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* IntervalFrame(::System::Int32 a1, ::Cysharp::Threading::Tasks::PlayerLoopTiming a2, ::System::Boolean a3)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*(*)(::System::Int32, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_INTERVALFRAME_OFFSET))(a1, a2, a3);
		}

	};
}
