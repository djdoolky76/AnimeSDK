#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class FriendModule_FetchDataState : ::System::Int32
	{
		None = 0,
		FirstFetch = 1,
		FinalFetch = 2,
		UIRefresh = 3,
	};
}
