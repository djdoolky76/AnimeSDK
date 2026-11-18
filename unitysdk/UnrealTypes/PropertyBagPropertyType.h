#pragma once
#include "unitysdk/unitysdk.h"

namespace UnrealTypes
{
	inline static constexpr unsigned int PropertyBagPropertyType_TypeDefinitionIndex = 27837;

	enum class PropertyBagPropertyType : ::System::Byte
	{
		None = 0,
		Bool = 1,
		Byte = 2,
		Int32 = 3,
		Int64 = 4,
		Float = 5,
		Double = 6,
		Name = 7,
		String = 8,
		Text = 9,
		Enum = 10,
		Struct = 11,
		Object = 12,
		SoftObject = 13,
		Class = 14,
		SoftClass = 15,
		UInt32 = 16,
		UInt64 = 17,
	};
}
