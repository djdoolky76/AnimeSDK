#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefReportMarkType_TypeDefinitionIndex = 59974;

	enum class RogueTournBuildRefReportMarkType : ::System::UInt32
	{
		None = 0,
		Essential = 1,
		Optional = 2,
	};
}
