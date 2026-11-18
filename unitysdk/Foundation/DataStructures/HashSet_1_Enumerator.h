#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::DataStructures { template <typename T> class HashSet_1; }

namespace Foundation::DataStructures
{
	inline static constexpr unsigned int HashSet_1_Enumerator_TypeDefinitionIndex = 8592;

	template <typename T>
	struct alignas(8) HashSet_1_Enumerator
	{
		::Foundation::DataStructures::HashSet_1<T>* set; // 0x0
		::System::Int32 index; // 0x0
		::System::Int32 version; // 0x0
		T current; // 0x0
	};
}
