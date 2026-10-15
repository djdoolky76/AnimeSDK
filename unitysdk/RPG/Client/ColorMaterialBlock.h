#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ColorMaterialBlock_TypeDefinitionIndex = 69928;

	struct alignas(4) ColorMaterialBlock
	{
		::System::Boolean Enable; // 0x10
		::System::Byte _padding0[0x3];
		::UnityEngine::Color Value; // 0x14
	};
}
