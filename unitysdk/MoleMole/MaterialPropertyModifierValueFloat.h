#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int MaterialPropertyModifierValueFloat_TypeDefinitionIndex = 50214;

	struct alignas(4) MaterialPropertyModifierValueFloat
	{
		::System::Boolean active; // 0x10
		::System::Boolean enable; // 0x11
		::System::Byte _padding0[0x2];
		::System::Single value; // 0x14
	};
}
