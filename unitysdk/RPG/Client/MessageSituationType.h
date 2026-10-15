#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class MessageSituationType : ::System::Int32
	{
		None = 0,
		Notice = 1,
		Main = 2,
		Act = 3,
	};
}
