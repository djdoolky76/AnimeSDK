#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace RPG::Client::RoadRash
{
	struct alignas(8) RoadRashGameSettingsConfigure_FallingLandingQTEConfig
	{
		::System::Single WindowStartBeforeLand; // 0x10
		::System::Single WindowEndBeforeLand; // 0x14
		::System::String* SuccessModifierName; // 0x18
	};
}
