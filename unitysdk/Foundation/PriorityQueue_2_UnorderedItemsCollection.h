#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T1, typename T2> class PriorityQueue_2; }

namespace Foundation
{
	inline static constexpr unsigned int PriorityQueue_2_UnorderedItemsCollection_TypeDefinitionIndex = 8567;

	template <typename T1, typename T2>
	class PriorityQueue_2_UnorderedItemsCollection : public ::System::Object
	{
	public:
		::Foundation::PriorityQueue_2<T1, T2>* _queue; // 0x0
	};
}
