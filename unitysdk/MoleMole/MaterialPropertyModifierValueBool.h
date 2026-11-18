#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int MaterialPropertyModifierValueBool_TypeDefinitionIndex = 89425;

	struct alignas(4) MaterialPropertyModifierValueBool
	{
		::System::Boolean active; // 0x10
		::System::Boolean enable; // 0x11
		::System::Boolean value; // 0x12
	};
}
