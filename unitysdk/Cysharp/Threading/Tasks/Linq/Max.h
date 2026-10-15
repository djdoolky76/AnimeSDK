#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Decimal.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace System { class Nullable; }

#define CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_10_OFFSET UNITYSDK_OFFSET(0x1F0FE6B0)
#define CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_12_OFFSET UNITYSDK_OFFSET(0x1F0FE750)
#define CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_14_OFFSET UNITYSDK_OFFSET(0x1F0FE7E0)
#define CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_16_OFFSET UNITYSDK_OFFSET(0x1F0FE890)
#define CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_18_OFFSET UNITYSDK_OFFSET(0x1F0FE920)
#define CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_20_OFFSET UNITYSDK_OFFSET(0x1F0FE9D0)
#define CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_2_OFFSET UNITYSDK_OFFSET(0x1F0FE460)
#define CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_4_OFFSET UNITYSDK_OFFSET(0x1F0FE4F0)
#define CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_6_OFFSET UNITYSDK_OFFSET(0x1F0FE580)
#define CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_8_OFFSET UNITYSDK_OFFSET(0x1F0FE610)

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Max_TypeDefinitionIndex = 45420;

	class Max : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::UniTask MaxAsync_2(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_2_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask MaxAsync_4(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int64>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int64>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_4_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask MaxAsync_6(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_6_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask MaxAsync_8(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Double>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Double>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_8_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask MaxAsync_10(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_10_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask MaxAsync_12(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_12_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask MaxAsync_14(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_14_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask MaxAsync_16(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_16_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask MaxAsync_18(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_18_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask MaxAsync_20(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable*>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_20_OFFSET))(a1, a2);
		}

	};
}
