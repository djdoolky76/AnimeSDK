#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Generic
{
	template <typename T1, typename T2>
	struct alignas(8) Dictionary_2_Entry
	{
		::System::Int32 hashCode; // 0x0
		::System::Int32 next; // 0x0
		T1 key; // 0x0
		T2 value; // 0x0
	};
}
