#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ESettingPlatform_TypeDefinitionIndex = 71968;

	enum class ESettingPlatform : ::System::Int32
	{
		PS5 = 4,
		Demara = 6,
		Android = 3,
		PC = 1,
		Kid = 5,
		None = 0,
		ALL = 999,
		IOS = 2,
	};
}
