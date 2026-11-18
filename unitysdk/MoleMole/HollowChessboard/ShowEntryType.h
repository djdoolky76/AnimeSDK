#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ShowEntryType_TypeDefinitionIndex = 77240;

	enum class ShowEntryType : ::System::Int32
	{
		SecondaryMovie = 3,
		AnimKey = 4,
		MovieKey = 2,
		MovieId = 5,
		AnimID = 0,
		TextureKey = 1,
	};
}
