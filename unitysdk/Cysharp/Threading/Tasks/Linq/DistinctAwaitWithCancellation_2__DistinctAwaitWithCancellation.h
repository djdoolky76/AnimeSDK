#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	template <typename T1, typename T2>
	class DistinctAwaitWithCancellation_2__DistinctAwaitWithCancellation
	{
	public:
		::System::Collections::Generic::HashSet_1<T1>* set; // 0x0
		::System::Func_3<T2, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* keySelector; // 0x0
	};
}
