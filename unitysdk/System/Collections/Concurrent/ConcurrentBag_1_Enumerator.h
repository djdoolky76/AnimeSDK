#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Concurrent
{
	template <typename T>
	class ConcurrentBag_1_Enumerator : public ::System::Object
	{
	public:
		::Il2CppArray<T>* _array; // 0x0
		T _current; // 0x0
		::System::Int32 _index; // 0x0
	};
}
