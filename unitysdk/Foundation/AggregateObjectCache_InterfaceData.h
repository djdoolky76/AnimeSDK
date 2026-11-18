#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int AggregateObjectCache_InterfaceData_TypeDefinitionIndex = 8734;

	struct alignas(4) AggregateObjectCache_InterfaceData
	{
		::System::Int64 TypeHash; // 0x10
		::System::UInt64 ComponentMask; // 0x18
	};
}
