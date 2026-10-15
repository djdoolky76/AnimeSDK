#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger
{
	template <typename T>
	class CircularBuffer_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* _buffer; // 0x0
		::System::Int32 _end; // 0x0
		::System::Int32 _count; // 0x0
		::System::Int32 _start; // 0x0
	};
}
