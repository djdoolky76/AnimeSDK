#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace System { class String; }

namespace RPG::Client::ActivityIdleLive
{
	struct alignas(8) CharacterMeetEventSentence
	{
		::System::UInt32 Index; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Name; // 0x18
		::RPG::Client::TextID Sentence; // 0x28
		::System::String* FigurePath; // 0x38
	};
}
