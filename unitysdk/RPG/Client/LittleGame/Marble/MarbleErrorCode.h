#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::Marble
{
	enum class MarbleErrorCode : ::System::Int32
	{
		RoomNotExist = 1,
		MessageInvalid = 2,
	};
}
