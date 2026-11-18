#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_PieceChangeStructType_TypeDefinitionIndex = 46369;

	enum class ConfigHollowChessboard_PieceChangeStructType : ::System::Int32
	{
		BubbleByEvent = 2,
		BubbleByMove = 1,
		Ghost = 4,
		BubbleByLight = 3,
		TimeRewind = 5,
		Default = 0,
	};
}
