#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace RPG::Client
{
	struct alignas(8) PhonemeMarker
	{
		::System::String* phoneme; // 0x10
		::System::Int32 emotionIndex; // 0x18
		::System::Int32 phonemeNumber; // 0x1C
		::System::Single time; // 0x20
		::System::Single value; // 0x24
	};
}
