#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovResultNumWidgetController_AnimPlayContext_TypeDefinitionIndex = 57408;

	struct alignas(4) UIZenkovResultNumWidgetController_AnimPlayContext
	{
		::System::Boolean Empty; // 0x10
		::System::Boolean Victory; // 0x11
		::System::Byte _padding0[0x2];
		::System::Int32 TargetDigit; // 0x14
		::System::Int32 StartDigit; // 0x18
		::System::Single StartOffsetNormalized; // 0x1C
		::System::Boolean RandomizeNextDigit; // 0x20
		::System::Byte _padding1[0x3];
		::System::Single Speed; // 0x24
	};
}
