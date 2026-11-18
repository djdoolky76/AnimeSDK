#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace Foundation
{
	inline static constexpr unsigned int MultiCyclicQueue_1_ItemInfo_TypeDefinitionIndex = 8361;

	template <typename T>
	struct alignas(8) MultiCyclicQueue_1_ItemInfo
	{
		::System::Object* Flag; // 0x0
		T Value; // 0x0
	};
}
