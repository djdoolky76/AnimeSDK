#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardCameraMoveNode_ChessboardCameraMoveType_TypeDefinitionIndex = 44675;

	enum class ConfigChessboardCameraMoveNode_ChessboardCameraMoveType : ::System::Int32
	{
		RelativePosition = 8,
		Stretch = 4,
		StretchBackWards = 9,
		WorkFirst = 1,
		MoveToCenter = 6,
		MoveToStart = 0,
		StretchToPresetBound = 10,
		DesignatedSpot = 3,
		PredefinedAnim = 5,
		WorkLast = 2,
		MoveToPlayer = 7,
	};
}
