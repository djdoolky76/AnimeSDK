#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AggregateComponentAssignableInterface.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int AggregateObjectCache_ComponentData_TypeDefinitionIndex = 8735;

	struct alignas(4) AggregateObjectCache_ComponentData
	{
		::System::Int64 TypeHash; // 0x10
		::Foundation::AggregateComponentAssignableInterface Interfaces; // 0x18
	};
}
