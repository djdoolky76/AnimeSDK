#pragma once
#include "unitysdk/unitysdk.h"
namespace Collections::Pooled { template <typename T> class PooledSet_1; }

namespace Collections::Pooled
{
	template <typename T>
	struct alignas(8) PooledSet_1_Enumerator
	{
		::Collections::Pooled::PooledSet_1<T>* _set; // 0x0
		::System::Int32 _index; // 0x0
		::System::Int32 _version; // 0x0
		T _current; // 0x0
	};
}
