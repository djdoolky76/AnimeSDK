#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Generic
{
	template <typename T>
	struct alignas(4) SortedSet_1_ElementCount
	{
		::System::Int32 UniqueCount; // 0x0
		::System::Int32 UnfoundCount; // 0x0
	};
}
