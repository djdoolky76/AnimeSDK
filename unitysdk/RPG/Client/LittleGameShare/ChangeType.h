#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	enum class ChangeType : ::System::Byte
	{
		Replace = 0,
		Remove = 1,
		Change = 2,
	};
}
