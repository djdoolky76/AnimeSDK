#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class PersonalizeCardUseType : ::System::Int32
	{
		PlayerCard = 0,
		FriendCard = 1,
		SupportCard = 2,
		ChatCard = 3,
	};
}
