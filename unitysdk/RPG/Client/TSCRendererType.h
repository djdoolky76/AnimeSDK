#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TSCRendererType_TypeDefinitionIndex = 70218;

	enum class TSCRendererType : ::System::Byte
	{
		None = 0,
		Normal = 1,
		Expand = 2,
		ExpandSP = 3,
	};
}
