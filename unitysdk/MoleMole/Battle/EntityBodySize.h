#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int EntityBodySize_TypeDefinitionIndex = 91252;

	enum class EntityBodySize : ::System::Int32
	{
		DontCare = -1,
		Default = 8,
		Large = 16,
		Small = 4,
		Unknown = 1,
		Tiny = 2,
		None = 0,
		Standard = 8,
		Gigantic = 32,
		Point = 64,
	};
}
