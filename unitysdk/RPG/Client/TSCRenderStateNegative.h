#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TSCRenderStateNegative_TypeDefinitionIndex = 70212;

	enum class TSCRenderStateNegative : ::System::Byte
	{
		TSC = 0,
		Show = 1,
		Hide = 2,
	};
}
