#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace Foundation
{
	inline static constexpr unsigned int TickCollector_1_TimeListHeader_TypeDefinitionIndex = 8741;

	template <typename T>
	struct alignas(8) TickCollector_1_TimeListHeader
	{
		::System::Int64 Key; // 0x0
		::System::Double Time; // 0x0
		::System::Object* _First_k__BackingField; // 0x0
		::System::Object* _Next_k__BackingField; // 0x0
	};
}
