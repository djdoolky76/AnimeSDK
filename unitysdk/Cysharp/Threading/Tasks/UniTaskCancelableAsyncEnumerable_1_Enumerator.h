#pragma once
#include "unitysdk/unitysdk.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskCancelableAsyncEnumerable_1_Enumerator_TypeDefinitionIndex = 38168;

	template <typename T>
	struct alignas(8) UniTaskCancelableAsyncEnumerable_1_Enumerator
	{
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* enumerator; // 0x0
	};
}
