#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation { template <typename T1, typename T2> class PriorityQueue_2; }

namespace Foundation
{
	inline static constexpr unsigned int PriorityQueue_2_UnorderedItemsCollection_Enumerator_TypeDefinitionIndex = 8568;

	template <typename T1, typename T2>
	struct alignas(8) PriorityQueue_2_UnorderedItemsCollection_Enumerator
	{
		::Foundation::PriorityQueue_2<T1, T2>* _queue; // 0x0
		::System::Int32 _version; // 0x0
		::System::Int32 _index; // 0x0
		::System::ValueTuple_2<T1, T2> _current; // 0x0
	};
}
