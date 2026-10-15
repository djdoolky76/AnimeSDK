#pragma once
#include "unitysdk/unitysdk.h"
namespace Collections::Pooled { template <typename T> class PooledQueue_1; }

namespace Collections::Pooled
{
	template <typename T>
	struct alignas(8) PooledQueue_1_Enumerator
	{
		::Collections::Pooled::PooledQueue_1<T>* _q; // 0x0
		::System::Int32 _version; // 0x0
		::System::Int32 _index; // 0x0
		T _currentElement; // 0x0
	};
}
