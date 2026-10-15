#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int SectionType_TypeDefinitionIndex = 41558;

	enum class SectionType : ::System::UInt32
	{
		Fixed = 0,
		String = 1,
		Binary = 2,
	};
}
