#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

namespace Foundation
{
	inline static constexpr unsigned int LinkedHashMap_2_ValueEnumerable_TypeDefinitionIndex = 8237;

	template <typename T1, typename T2>
	struct alignas(8) LinkedHashMap_2_ValueEnumerable
	{
		::System::Collections::Generic::LinkedList_1<::System::Object*>* _order; // 0x0
	};
}
