#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoardSearchMap_SearchType_TypeDefinitionIndex = 69310;

	enum class ChessBoardSearchMap_SearchType : ::System::Int32
	{
		Position = 1,
		Index = 0,
		Bound = 2,
	};
}
