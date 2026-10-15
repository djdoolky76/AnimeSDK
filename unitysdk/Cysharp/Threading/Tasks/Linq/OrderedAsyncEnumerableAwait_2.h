#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
namespace Cysharp::Threading::Tasks::Linq { template <typename T> class OrderedAsyncEnumerable_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	template <typename T1, typename T2>
	class OrderedAsyncEnumerableAwait_2
	{
	public:
		::System::Func_2<T1, ::Cysharp::Threading::Tasks::UniTask>* keySelector; // 0x0
		::System::Collections::Generic::IComparer_1<T2>* comparer; // 0x0
		::System::Boolean descending; // 0x0
		::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<T1>* parent; // 0x0
	};
}
