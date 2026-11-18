#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ChessboardPathLink_TypeDefinitionIndex = 50383;

	enum class ChessboardPathLink : ::System::Int32
	{
		R = 12,
		Empty = 15,
		BL = 5,
		TL = 3,
		TR = 4,
		LTB = 9,
		TLR = 7,
		T = 13,
		TB = 2,
		RTB = 10,
		BR = 6,
		TBLR = 0,
		B = 14,
		L = 11,
		LR = 1,
		BLR = 8,
	};
}
