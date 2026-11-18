#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }

namespace MoleMole::Utils
{
	inline static constexpr unsigned int TypeErasedCompletionSourceImpl_1_TypeDefinitionIndex = 89729;

	template <typename T>
	struct alignas(8) TypeErasedCompletionSourceImpl_1
	{
		::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>* _next; // 0x0
		::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>* _last; // 0x0
	};
}
