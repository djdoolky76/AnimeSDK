#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPGTools::Octree::Common { template <typename T> class PriorityQueue_1; }

namespace RPGTools::Octree::Common
{
	inline static constexpr unsigned int PriorityQueue_1_UnorderedItemsCollection_TypeDefinitionIndex = 48901;

	template <typename T>
	class PriorityQueue_1_UnorderedItemsCollection : public ::System::Object
	{
	public:
		::RPGTools::Octree::Common::PriorityQueue_1<T>* _queue; // 0x0
	};
}
