#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	enum class PuzzleColliderCastMode : ::System::Int32
	{
		Current = 0,
		Children = 1,
		Parent = 2,
	};
}
