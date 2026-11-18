#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Mono
{
	inline static constexpr unsigned int RuntimeRemoteClassHandle_TypeDefinitionIndex = 9;

	struct alignas(8) RuntimeRemoteClassHandle
	{
		::PVOID value; // 0x10
	};
}
