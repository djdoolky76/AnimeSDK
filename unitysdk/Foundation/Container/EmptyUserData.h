#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int EmptyUserData_TypeDefinitionIndex = 8742;

	struct alignas(4) EmptyUserData
	{
	};
}
