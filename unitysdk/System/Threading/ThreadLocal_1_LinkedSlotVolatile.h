#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace System::Threading
{
	inline static constexpr unsigned int ThreadLocal_1_LinkedSlotVolatile_TypeDefinitionIndex = 802;

	template <typename T>
	struct alignas(8) ThreadLocal_1_LinkedSlotVolatile
	{
		::System::Object* Value; // 0x0
	};
}
