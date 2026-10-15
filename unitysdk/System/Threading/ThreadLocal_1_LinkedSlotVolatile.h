#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

namespace System::Threading
{
	inline static constexpr unsigned int ThreadLocal_1_LinkedSlotVolatile_TypeDefinitionIndex = 817;

	template <typename T>
	struct alignas(8) ThreadLocal_1_LinkedSlotVolatile
	{
		::System::Object* Value; // 0x0
	};
}
