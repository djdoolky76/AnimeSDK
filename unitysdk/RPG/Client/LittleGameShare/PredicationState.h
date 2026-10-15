#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	enum class PredicationState : ::System::Int32
	{
		Unknown = 0,
		Predicating = 1,
		Rollback = 2,
	};
}
