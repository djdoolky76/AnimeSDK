#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

namespace System::Threading
{
	template <typename T>
	struct alignas(8) ThreadLocal_1_LinkedSlotVolatile
	{
		::System::Object* Value; // 0x0
	};
}
