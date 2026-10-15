#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace RPG::Client::ParkourGame
{
	struct alignas(8) MonoParkourRoad_HorizontalConnectionData
	{
		::System::String* ConnectUniqueName; // 0x10
		::System::Boolean NeedHeight; // 0x18
	};
}
