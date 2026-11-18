#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AggregateComponentAssignableInterface.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace Foundation
{
	inline static constexpr unsigned int AggregateObject_1_ComponentData_TypeDefinitionIndex = 8862;

	template <typename T>
	struct alignas(8) AggregateObject_1_ComponentData
	{
		::Foundation::AggregateComponentAssignableInterface Interfaces; // 0x0
		::Il2CppArray<::System::Object*>* Dependencies; // 0x0
	};
}
