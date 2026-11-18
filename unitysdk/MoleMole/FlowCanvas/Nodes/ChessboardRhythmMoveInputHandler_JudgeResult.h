#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardRhythmMoveInputHandler_JudgeResult_TypeDefinitionIndex = 76445;

	enum class ChessboardRhythmMoveInputHandler_JudgeResult : ::System::Int32
	{
		Perfect = 0,
		Normal = 1,
		Miss = 2,
	};
}
