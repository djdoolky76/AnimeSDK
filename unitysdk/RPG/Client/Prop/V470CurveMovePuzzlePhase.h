#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int V470CurveMovePuzzlePhase_TypeDefinitionIndex = 81682;

	enum class V470CurveMovePuzzlePhase : ::System::Int32
	{
		None = 0,
		Enter = 1,
		EnterFinished = 2,
		CurveMove = 3,
		CurveMoveFinished = 4,
		End = 5,
	};
}
