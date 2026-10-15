#pragma once
#include "unitysdk/unitysdk.h"
namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }

namespace Collections::Pooled
{
	template <typename T1, typename T2>
	struct alignas(8) PooledDictionary_2_ValueCollection_Enumerator
	{
		::Collections::Pooled::PooledDictionary_2<T1, T2>* _dictionary; // 0x0
		::System::Int32 _index; // 0x0
		::System::Int32 _version; // 0x0
		T2 _currentValue; // 0x0
	};
}
