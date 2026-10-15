#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace RPG::Client::LittleGame::CakeRace
{
	struct alignas(8) MonoCakeRaceAudioPostEvent_CakeRaceAnimatorAudioEvent
	{
		::System::String* AnimatorStateName; // 0x10
		::System::String* AudioPlayEventName; // 0x18
		::System::Single PlayAudioDelayTime; // 0x20
	};
}
