#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int VideoQuality_TypeDefinitionIndex = 84257;

	enum class VideoQuality : ::System::Int32
	{
		LD = 3,
		SD = 0,
		HD = 1,
		CD = 2,
	};
}
