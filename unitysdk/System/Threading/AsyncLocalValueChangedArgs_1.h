#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Threading
{
	template <typename T>
	struct alignas(8) AsyncLocalValueChangedArgs_1
	{
		T _PreviousValue_k__BackingField; // 0x0
		T _CurrentValue_k__BackingField; // 0x0
		::System::Boolean _ThreadContextChanged_k__BackingField; // 0x0
	};
}
