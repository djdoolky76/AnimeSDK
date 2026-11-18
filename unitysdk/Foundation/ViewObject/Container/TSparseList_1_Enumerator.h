#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::ViewObject::Container { template <typename T> class TSparseList_1; }

namespace Foundation::ViewObject::Container
{
	inline static constexpr unsigned int TSparseList_1_Enumerator_TypeDefinitionIndex = 86332;

	template <typename T>
	struct alignas(8) TSparseList_1_Enumerator
	{
		::Foundation::ViewObject::Container::TSparseList_1<T>* _list; // 0x0
		::System::Int32 __index_k__BackingField; // 0x0
		T current; // 0x0
	};
}
