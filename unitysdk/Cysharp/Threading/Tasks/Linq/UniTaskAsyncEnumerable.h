#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/TimeSpan.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace System { class Nullable; }

#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_10_OFFSET UNITYSDK_OFFSET(0x1F111130)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_12_OFFSET UNITYSDK_OFFSET(0x1F111210)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_14_OFFSET UNITYSDK_OFFSET(0x1F111300)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_16_OFFSET UNITYSDK_OFFSET(0x1F1113E0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_18_OFFSET UNITYSDK_OFFSET(0x1F1114D0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_2_OFFSET UNITYSDK_OFFSET(0x1F110DB0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_4_OFFSET UNITYSDK_OFFSET(0x1F110E90)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_6_OFFSET UNITYSDK_OFFSET(0x1F110F60)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_8_OFFSET UNITYSDK_OFFSET(0x1F111040)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_OFFSET UNITYSDK_OFFSET(0x1F110CD0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_EVERYUPDATE_OFFSET UNITYSDK_OFFSET(0x1F113130)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_INTERVALFRAME_OFFSET UNITYSDK_OFFSET(0x1F113460)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_INTERVAL_OFFSET UNITYSDK_OFFSET(0x1F113250)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_10_OFFSET UNITYSDK_OFFSET(0x1F112200)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_12_OFFSET UNITYSDK_OFFSET(0x1F1122F0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_14_OFFSET UNITYSDK_OFFSET(0x1F1123C0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_16_OFFSET UNITYSDK_OFFSET(0x1F1124B0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_18_OFFSET UNITYSDK_OFFSET(0x1F112590)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_20_OFFSET UNITYSDK_OFFSET(0x1F112680)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_2_OFFSET UNITYSDK_OFFSET(0x1F111EA0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_4_OFFSET UNITYSDK_OFFSET(0x1F111F70)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_6_OFFSET UNITYSDK_OFFSET(0x1F112050)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_8_OFFSET UNITYSDK_OFFSET(0x1F112120)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_10_OFFSET UNITYSDK_OFFSET(0x1F111920)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_12_OFFSET UNITYSDK_OFFSET(0x1F111A10)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_14_OFFSET UNITYSDK_OFFSET(0x1F111AF0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_16_OFFSET UNITYSDK_OFFSET(0x1F111BE0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_18_OFFSET UNITYSDK_OFFSET(0x1F111CC0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_20_OFFSET UNITYSDK_OFFSET(0x1F111DB0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_2_OFFSET UNITYSDK_OFFSET(0x1F1115C0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_4_OFFSET UNITYSDK_OFFSET(0x1F111690)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_6_OFFSET UNITYSDK_OFFSET(0x1F111770)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_8_OFFSET UNITYSDK_OFFSET(0x1F111840)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_RANGE_OFFSET UNITYSDK_OFFSET(0x1F112780)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_10_OFFSET UNITYSDK_OFFSET(0x1F112CB0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_12_OFFSET UNITYSDK_OFFSET(0x1F112D90)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_14_OFFSET UNITYSDK_OFFSET(0x1F112E70)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_16_OFFSET UNITYSDK_OFFSET(0x1F112F50)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_18_OFFSET UNITYSDK_OFFSET(0x1F113040)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_2_OFFSET UNITYSDK_OFFSET(0x1F112940)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_4_OFFSET UNITYSDK_OFFSET(0x1F112A20)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_6_OFFSET UNITYSDK_OFFSET(0x1F112AF0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_8_OFFSET UNITYSDK_OFFSET(0x1F112BD0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_OFFSET UNITYSDK_OFFSET(0x1F112870)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_TIMERFRAME_1_OFFSET UNITYSDK_OFFSET(0x1F113360)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_TIMERFRAME_OFFSET UNITYSDK_OFFSET(0x1F1132C0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_TIMER_1_OFFSET UNITYSDK_OFFSET(0x1F1131D0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_TIMER_OFFSET UNITYSDK_OFFSET(0x1F113170)

namespace Cysharp::Threading::Tasks::Linq
{
	class UniTaskAsyncEnumerable : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::UniTask AverageAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask AverageAsync_2(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int64>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int64>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_2_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask AverageAsync_4(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_4_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask AverageAsync_6(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Double>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Double>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_6_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask AverageAsync_8(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_8_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask AverageAsync_10(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_10_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask AverageAsync_12(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_12_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask AverageAsync_14(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_14_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask AverageAsync_16(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_16_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask AverageAsync_18(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_18_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask MinAsync_2(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_2_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask MinAsync_4(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int64>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int64>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_4_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask MinAsync_6(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_6_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask MinAsync_8(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Double>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Double>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_8_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask MinAsync_10(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_10_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask MinAsync_12(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_12_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask MinAsync_14(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_14_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask MinAsync_16(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_16_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask MinAsync_18(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_18_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask MinAsync_20(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_20_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask MaxAsync_2(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_2_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask MaxAsync_4(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int64>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int64>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_4_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask MaxAsync_6(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_6_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask MaxAsync_8(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Double>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Double>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_8_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask MaxAsync_10(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_10_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask MaxAsync_12(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_12_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask MaxAsync_14(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_14_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask MaxAsync_16(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_16_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask MaxAsync_18(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_18_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask MaxAsync_20(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_20_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>* Range(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_RANGE_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask SumAsync_2(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int64>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int64>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_2_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask SumAsync_4(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_4_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask SumAsync_6(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Double>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Double>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_6_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask SumAsync_8(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_8_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask SumAsync_10(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_10_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask SumAsync_12(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_12_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask SumAsync_14(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_14_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask SumAsync_16(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_16_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask SumAsync_18(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_18_OFFSET))(a1, a2);
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
