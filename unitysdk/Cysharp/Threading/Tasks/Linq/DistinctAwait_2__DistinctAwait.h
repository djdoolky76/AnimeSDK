#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int DistinctAwait_2__DistinctAwait_TypeDefinitionIndex = 45341;

	template <typename T1, typename T2>
	class DistinctAwait_2__DistinctAwait
	{
	public:
		::System::Collections::Generic::HashSet_1<T1>* set; // 0x0
		::System::Func_2<T2, ::Cysharp::Threading::Tasks::UniTask_1<T1>>* keySelector; // 0x0
	};
}
