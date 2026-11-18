#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPJMHAAEIKO.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int UIScaryNightInLevelPageController_ScaryNightPropertyTipData_TypeDefinitionIndex = 75436;

	struct alignas(8) UIScaryNightInLevelPageController_ScaryNightPropertyTipData
	{
		::GPJMHAAEIKO AttributeName; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* PropertyNameKey; // 0x18
		::System::String* IconPath; // 0x20
		::System::Int32 Delta; // 0x28
	};
}
