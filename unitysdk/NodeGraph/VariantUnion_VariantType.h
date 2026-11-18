#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeGraph
{
	inline static constexpr unsigned int VariantUnion_VariantType_TypeDefinitionIndex = 76620;

	enum class VariantUnion_VariantType : ::System::Int32
	{
		Double = 5,
		Float = 4,
		Bool = 1,
		Int32 = 2,
		Int64 = 3,
		String = 6,
		Object = 7,
		Nullable = 0,
	};
}
