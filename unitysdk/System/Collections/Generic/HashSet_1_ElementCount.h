#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Generic
{
	template <typename T>
	struct alignas(4) HashSet_1_ElementCount
	{
		::System::Int32 uniqueCount; // 0x0
		::System::Int32 unfoundCount; // 0x0
	};
}
