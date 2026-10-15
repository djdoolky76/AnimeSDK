#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class WolfBroGunPlayRoadMapConfig; }
namespace System { class String; }

namespace RPG::Client
{
	struct alignas(8) WolfBroGunPlayPuzzleBoard_RoadTimeline
	{
		::RPG::Client::WolfBroGunPlayRoadMapConfig* config; // 0x10
		::System::String* uniqueName; // 0x18
		::System::Boolean enable; // 0x20
		::System::Byte _padding0[0x7];
		::System::String* wait; // 0x28
		::System::Single waitTime; // 0x30
		::System::Boolean autoFinishWhenAllTargetDeactivated; // 0x34
	};
}
