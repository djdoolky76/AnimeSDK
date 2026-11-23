#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ABC::Entity
{
	inline static constexpr unsigned int FloatMaterialBlock_TypeDefinitionIndex = 8493;

	struct alignas(4) FloatMaterialBlock
	{
		::System::Boolean Enable; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single Value; // 0x14
	};
}
