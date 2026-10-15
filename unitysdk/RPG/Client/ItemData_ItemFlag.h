#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class ItemData_ItemFlag : ::System::Int32
	{
		None = 0,
		Usable = 1,
		Sellable = 2,
		Visible = 4,
	};
}
