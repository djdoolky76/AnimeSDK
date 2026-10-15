#pragma once
#include "unitysdk/unitysdk.h"
namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace System::Collections::Generic
{
	template <typename T>
	struct alignas(8) Stack_1_Enumerator
	{
		::System::Collections::Generic::Stack_1<T>* _stack; // 0x0
		::System::Int32 _version; // 0x0
		::System::Int32 _index; // 0x0
		T _currentElement; // 0x0
	};
}
