#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace Foundation
{
	inline static constexpr unsigned int TickSequencer_1_Scheduler_Node_TypeDefinitionIndex = 8808;

	template <typename T>
	struct alignas(8) TickSequencer_1_Scheduler_Node
	{
		::System::Object* Index; // 0x0
		::System::Object* Next; // 0x0
	};
}
