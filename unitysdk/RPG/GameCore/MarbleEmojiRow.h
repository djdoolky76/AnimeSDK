#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleEmojiRow; }
namespace System { class String; }

#define RPG_GAMECORE_MARBLEEMOJIROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D83CF80)
#define RPG_GAMECORE_MARBLEEMOJIROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D83CE10)

namespace RPG::GameCore
{
	class MarbleEmojiRow : public ::System::Object
	{
	public:
		::System::String* EmojiPath; // 0x10
		::System::UInt32 ID; // 0x18
		::System::UInt32 GroupID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEEMOJIROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleEmojiRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleEmojiRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEEMOJIROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
