#pragma once
#include "unitysdk/unitysdk.h"
namespace Cysharp::Threading::Tasks::Internal { template <typename T> class ArrayPool_1; }

namespace Cysharp::Threading::Tasks::Internal
{
	template <typename T>
	struct alignas(8) ArrayPoolUtil_RentArray_1
	{
		::Il2CppArray<T>* Array; // 0x0
		::System::Int32 Length; // 0x0
		::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>* pool; // 0x0
	};
}
