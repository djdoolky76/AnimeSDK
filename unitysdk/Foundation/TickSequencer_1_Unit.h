#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation { template <typename T> class TickFunction_1; }

namespace Foundation
{
	inline static constexpr unsigned int TickSequencer_1_Unit_TypeDefinitionIndex = 8801;

	template <typename T>
	struct alignas(8) TickSequencer_1_Unit
	{
		::Foundation::TickFunction_1<T>* Function; // 0x0
		::System::Int32 TickGroup; // 0x0
		::System::Int32 TickOrder; // 0x0
		::System::Double Time; // 0x0
		::System::Single DeltaTime; // 0x0
	};
}
