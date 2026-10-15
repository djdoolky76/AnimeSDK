#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore::ConstValueMapping
{
	enum class ConstValueSource : ::System::Int32
	{
		None = 0,
		ClientTable = 1,
		CommonTable = 2,
	};
}
