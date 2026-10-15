#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TSCRenderStatePositive_TypeDefinitionIndex = 70211;

	enum class TSCRenderStatePositive : ::System::Byte
	{
		TSC = 0,
		Hide = 1,
		Show = 2,
	};
}
