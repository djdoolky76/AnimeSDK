#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_BubbleReasonType_TypeDefinitionIndex = 46346;

	enum class ConfigHollowChessboard_BubbleReasonType : ::System::Int32
	{
		TimeRewindRise = 3,
		RepairEnter = 4,
		Move = 0,
		Event = 1,
		RepairExit = 5,
		None = 6,
		TimeRewind = 2,
	};
}
