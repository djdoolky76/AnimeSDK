#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole
{
	inline static constexpr unsigned int MaterialPropertyModifierValueVector_TypeDefinitionIndex = 57723;

	struct alignas(4) MaterialPropertyModifierValueVector
	{
		::System::Boolean active; // 0x10
		::System::Boolean enable; // 0x11
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector4 value; // 0x14
		::System::Byte maskType; // 0x24
	};
}
