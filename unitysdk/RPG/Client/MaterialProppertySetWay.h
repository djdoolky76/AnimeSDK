#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class MaterialProppertySetWay : ::System::Int32
	{
		MatInstance = 0,
		PropertyBlock = 1,
		BySrpBatcher = 2,
	};
}
