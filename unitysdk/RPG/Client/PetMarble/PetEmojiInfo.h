#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace RPG::Client::PetMarble
{
	struct alignas(8) PetEmojiInfo
	{
		::System::UInt32 EmojiID; // 0x10
		::System::UInt32 GroupID; // 0x14
		::System::String* EmojiPath; // 0x18
	};
}
