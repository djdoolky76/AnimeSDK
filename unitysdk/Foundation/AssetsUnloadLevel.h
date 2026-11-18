#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int AssetsUnloadLevel_TypeDefinitionIndex = 8179;

	enum class AssetsUnloadLevel : ::System::Byte
	{
		All = 0,
		ExceptBoot = 1,
		None = 2,
	};
}
