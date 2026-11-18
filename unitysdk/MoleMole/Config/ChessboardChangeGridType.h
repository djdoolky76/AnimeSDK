#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChessboardChangeGridType_TypeDefinitionIndex = 58807;

	enum class ChessboardChangeGridType : ::System::Int32
	{
		ChangeGridDirectly = 1,
		Diffusion = 3,
		SinkAllThenRiseAll = 2,
		ResetGrid = 0,
	};
}
