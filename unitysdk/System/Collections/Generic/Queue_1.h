#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic
{
	inline static constexpr unsigned int Queue_1_TypeDefinitionIndex = 3954;

	template <typename T>
	class Queue_1 : public ::System::Object
	{
	public:
		// static const ::System::Int32 MinimumGrow = 0x4; // 0x0
		// static const ::System::Int32 GrowFactor = 0xC8; // 0x0
		::Il2CppArray<T>* _array; // 0x0
		::System::Int32 _head; // 0x0
		::System::Int32 _tail; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 _version; // 0x0
		::System::Object* _syncRoot; // 0x0
	};
}
