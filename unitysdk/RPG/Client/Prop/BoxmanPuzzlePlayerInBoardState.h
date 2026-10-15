#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	enum class BoxmanPuzzlePlayerInBoardState : ::System::Int32
	{
		Unknown = 0,
		Inside = 1,
		Outside = 2,
	};
}
