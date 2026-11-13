#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMusicCatchUpPolicy_TypeDefinitionIndex = 18977;

	enum class FiveDimMusicCatchUpPolicy : ::System::Int32
	{
		EmitAll = 0,
		SkipIfLate = 1,
	};
}
