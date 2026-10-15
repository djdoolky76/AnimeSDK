#pragma once
#include "unitysdk/unitysdk.h"
namespace Collections::Pooled { template <typename T> class PooledStack_1; }

namespace Collections::Pooled
{
	template <typename T>
	struct alignas(8) PooledStack_1_Enumerator
	{
		::Collections::Pooled::PooledStack_1<T>* _stack; // 0x0
		::System::Int32 _version; // 0x0
		::System::Int32 _index; // 0x0
		T _currentElement; // 0x0
	};
}
