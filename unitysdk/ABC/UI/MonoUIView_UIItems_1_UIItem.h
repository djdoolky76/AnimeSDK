#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace ABC::UI
{
	inline static constexpr unsigned int MonoUIView_UIItems_1_UIItem_TypeDefinitionIndex = 8920;

	template <typename T>
	struct alignas(8) MonoUIView_UIItems_1_UIItem
	{
		::System::String* Name; // 0x0
		T UI; // 0x0
	};
}
