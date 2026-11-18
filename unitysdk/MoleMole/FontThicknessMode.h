#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int FontThicknessMode_TypeDefinitionIndex = 42414;

	enum class FontThicknessMode : ::System::Int32
	{
		Thick = 2,
		None = 0,
		Recommend = 1,
		Thin = 3,
	};
}
