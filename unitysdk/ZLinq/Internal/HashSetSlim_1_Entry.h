#pragma once
#include "unitysdk/unitysdk.h"

namespace ZLinq::Internal
{
	template <typename T>
	struct alignas(8) HashSetSlim_1_Entry
	{
		::System::UInt32 HashCode; // 0x0
		T Value; // 0x0
		::System::Int32 Next; // 0x0
	};
}
