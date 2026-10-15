#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools
{
	inline static constexpr unsigned int TimeVal_TypeDefinitionIndex = 46929;

	struct alignas(4) TimeVal
	{
		::System::Int64 tv_sec; // 0x10
		::System::Int32 tv_usec; // 0x18
	};
}
