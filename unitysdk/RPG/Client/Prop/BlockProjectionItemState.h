#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	enum class BlockProjectionItemState : ::System::Int32
	{
		Empty = 0,
		Normal = 1,
		Success = 2,
		Wrong = 3,
	};
}
