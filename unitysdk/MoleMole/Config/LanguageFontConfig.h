#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int LanguageFontConfig_TypeDefinitionIndex = 76049;

	struct alignas(4) LanguageFontConfig
	{
		::System::Boolean Disable; // 0x10
		::System::Boolean OverrideParam; // 0x11
		::System::Byte _padding0[0x2];
		::System::Int32 lightFontSize; // 0x14
	};
}
