#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

namespace ABC::Entity
{
	inline static constexpr unsigned int ColorMaterialBlock_TypeDefinitionIndex = 8234;

	struct alignas(4) ColorMaterialBlock
	{
		::System::Boolean Enable; // 0x10
		::System::Byte _padding0[0x3];
		::UnityEngine::E46B881AA2636190 Value; // 0x14
	};
}
