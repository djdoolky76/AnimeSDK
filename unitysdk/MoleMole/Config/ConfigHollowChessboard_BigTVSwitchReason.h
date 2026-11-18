#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_BigTVSwitchReason_TypeDefinitionIndex = 46370;

	enum class ConfigHollowChessboard_BigTVSwitchReason : ::System::Int32
	{
		SmallToBigAndRise = 3,
		BigToSmall = 1,
		SmallToBig = 2,
		None = 0,
		BigToSmallAndSink = 4,
	};
}
