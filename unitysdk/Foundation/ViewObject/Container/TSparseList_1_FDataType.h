#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::ViewObject::Container
{
	inline static constexpr unsigned int TSparseList_1_FDataType_TypeDefinitionIndex = 86331;

	template <typename T>
	struct alignas(8) TSparseList_1_FDataType
	{
		::System::Int32 UnionNumber; // 0x0
		T Value; // 0x0
	};
}
