#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class ContentParticipation : ::System::Int32
	{
		None = 0,
		AuthorityBase = 1,
		AlwaysRaise = 2,
	};
}
