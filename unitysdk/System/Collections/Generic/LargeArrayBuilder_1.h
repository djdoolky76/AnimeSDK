#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/ArrayBuilder_1_EA474F2A9254999B.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic
{
	inline static constexpr unsigned int LargeArrayBuilder_1_TypeDefinitionIndex = 3944;

	template <typename T>
	struct alignas(8) LargeArrayBuilder_1
	{
		// static const ::System::Int32 StartingCapacity = 0x4; // 0x0
		// static const ::System::Int32 ResizeLimit = 0x8; // 0x0
		::System::Int32 _maxCapacity; // 0x0
		::Il2CppArray<T>* _first; // 0x0
		::System::Collections::Generic::ArrayBuilder_1_EA474F2A9254999B<::Il2CppArray<T>*> _buffers; // 0x0
		::Il2CppArray<T>* _current; // 0x0
		::System::Int32 _index; // 0x0
		::System::Int32 _count; // 0x0
	};
}
