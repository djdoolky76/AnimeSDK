#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Threading
{
	inline static constexpr unsigned int AsyncLocalValueChangedArgs_1_TypeDefinitionIndex = 809;

	template <typename T>
	struct alignas(8) AsyncLocalValueChangedArgs_1
	{
		T _PreviousValue_k__BackingField; // 0x0
		T _CurrentValue_k__BackingField; // 0x0
		::System::Boolean _ThreadContextChanged_k__BackingField; // 0x0
	};
}
