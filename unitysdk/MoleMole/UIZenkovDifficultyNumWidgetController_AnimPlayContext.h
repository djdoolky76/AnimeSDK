#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovDifficultyNumWidgetController_AnimPlayContext_TypeDefinitionIndex = 75730;

	struct alignas(4) UIZenkovDifficultyNumWidgetController_AnimPlayContext
	{
		::System::Int32 TargetDigit; // 0x10
		::System::Boolean HasValue; // 0x14
		::System::Byte _padding0[0x3];
		::System::Int32 index; // 0x18
	};
}
