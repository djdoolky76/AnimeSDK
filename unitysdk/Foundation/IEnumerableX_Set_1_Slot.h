#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int IEnumerableX_Set_1_Slot_TypeDefinitionIndex = 8108;

	template <typename T>
	struct alignas(8) IEnumerableX_Set_1_Slot
	{
		::System::Int32 hashCode; // 0x0
		T value; // 0x0
		::System::Int32 next; // 0x0
	};
}
