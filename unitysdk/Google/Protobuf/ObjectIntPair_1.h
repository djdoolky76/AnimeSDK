#pragma once
#include "unitysdk/unitysdk.h"

namespace Google::Protobuf
{
	template <typename T>
	struct alignas(8) ObjectIntPair_1
	{
		::System::Int32 number; // 0x0
		T obj; // 0x0
	};
}
