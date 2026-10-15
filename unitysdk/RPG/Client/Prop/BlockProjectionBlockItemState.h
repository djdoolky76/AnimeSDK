#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	enum class BlockProjectionBlockItemState : ::System::Int32
	{
		Empty = 0,
		Normal = 1,
		Selected = 2,
		Availiable = 3,
	};
}
