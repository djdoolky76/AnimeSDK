#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int InteractTargetType_TypeDefinitionIndex = 63364;

	enum class InteractTargetType : ::System::Int32
	{
		Piece = 1,
		Other = 2,
		All = 3,
	};
}
