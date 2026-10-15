#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class ChatContactPam_ChatState : ::System::Int32
	{
		Chatting = 0,
		WaitingForGreeting = 1,
		WaitingForResponse = 2,
		WaitingForSuggestions = 3,
		WaitingForGreetingSuggestions = 4,
	};
}
