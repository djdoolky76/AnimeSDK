#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace LyraSector
{
	inline static constexpr unsigned int CollectionsUtils_PriorityQueue_2_UnorderedItemsCollection_Enumerator_TypeDefinitionIndex = 26702;

	template <typename T1, typename T2>
	struct alignas(8) CollectionsUtils_PriorityQueue_2_UnorderedItemsCollection_Enumerator
	{
		::System::Object* _queue; // 0x0
		::System::Int32 _version; // 0x0
		::System::Int32 _index; // 0x0
		::System::ValueTuple_2<T1, T2> _current; // 0x0
	};
}
