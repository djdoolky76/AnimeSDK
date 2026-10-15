#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System
{
	template <typename T>
	class ArraySegment_1_ArraySegmentEnumerator : public ::System::Object
	{
	public:
		::Il2CppArray<T>* _array; // 0x0
		::System::Int32 _start; // 0x0
		::System::Int32 _end; // 0x0
		::System::Int32 _current; // 0x0
	};
}
