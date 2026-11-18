#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int HollowPieceBlendMode_TypeDefinitionIndex = 88283;

	enum class HollowPieceBlendMode : ::System::Int32
	{
		Add = 1,
		AlphaBlend = 0,
		Multiply = 2,
		Overlay = 3,
		None = -1,
	};
}
