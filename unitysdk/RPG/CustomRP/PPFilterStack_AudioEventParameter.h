#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace RPG::CustomRP
{
	struct alignas(8) PPFilterStack_AudioEventParameter
	{
		::System::String* OpenAudioEvent; // 0x10
		::System::String* EndAudioEvent; // 0x18
		::System::String* RTPCName; // 0x20
	};
}
