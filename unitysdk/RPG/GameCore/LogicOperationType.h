#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class LogicOperationType : ::System::Int32
	{
		Unknow = 0,
		And = 1,
		Or = 2,
		Not = 3,
	};
}
