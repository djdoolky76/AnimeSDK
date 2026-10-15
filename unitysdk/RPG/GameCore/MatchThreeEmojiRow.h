#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeEmojiRow; }
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREEEMOJIROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D855040)
#define RPG_GAMECORE_MATCHTHREEEMOJIROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D854EA0)

namespace RPG::GameCore
{
	class MatchThreeEmojiRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::Boolean CanPlayerUse; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 EmojiID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEEMOJIROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MatchThreeEmojiRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MatchThreeEmojiRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEEMOJIROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
