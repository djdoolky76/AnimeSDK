#pragma once
#include "unitysdk/unitysdk.h"
namespace RPGTools::Octree::Common { template <typename T> class PriorityQueue_1; }

namespace RPGTools::Octree::Common
{
	inline static constexpr unsigned int PriorityQueue_1_UnorderedItemsCollection_Enumerator_TypeDefinitionIndex = 48902;

	template <typename T>
	struct alignas(8) PriorityQueue_1_UnorderedItemsCollection_Enumerator
	{
		::RPGTools::Octree::Common::PriorityQueue_1<T>* _queue; // 0x0
		::System::Int32 _version; // 0x0
		::System::Int32 _index; // 0x0
		T _Current_k__BackingField; // 0x0
	};
}
