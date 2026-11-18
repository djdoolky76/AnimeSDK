#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace Foundation
{
	inline static constexpr unsigned int TickSequencer_1_Scheduler_Header_TypeDefinitionIndex = 8804;

	template <typename T>
	struct alignas(8) TickSequencer_1_Scheduler_Header
	{
		::System::Int32 _Indegree_k__BackingField; // 0x0
		::System::Object* _Subsequent_k__BackingField; // 0x0
		::System::Object* Index; // 0x0
	};
}
