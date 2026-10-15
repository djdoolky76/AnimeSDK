#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	enum class OracleItemState : ::System::Int32
	{
		Normal = 0,
		Selected = 1,
		Pinned = 2,
	};
}
