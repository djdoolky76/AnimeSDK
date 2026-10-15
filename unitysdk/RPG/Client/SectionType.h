#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class SectionType : ::System::UInt32
	{
		Fixed = 0,
		String = 1,
		Binary = 2,
	};
}
