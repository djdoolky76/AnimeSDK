#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic
{
	inline static constexpr unsigned int ArrayBuilder_1_TypeDefinitionIndex = 3941;

	template <typename T>
	struct alignas(8) ArrayBuilder_1
	{
		// static const ::System::Int32 DefaultCapacity = 0x4; // 0x0
		// static const ::System::Int32 MaxCoreClrArrayLength = 0x7FEFFFFF; // 0x0
		::Il2CppArray<T>* _array; // 0x0
		::System::Int32 _count; // 0x0
	};
}
