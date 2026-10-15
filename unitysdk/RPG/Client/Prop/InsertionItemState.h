#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	enum class InsertionItemState : ::System::Int32
	{
		Normal = 0,
		Matched = 1,
		UnMatched = 2,
	};
}
