#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraEmojiRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERAEMOJIROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57EF80)
#define RPG_GAMECORE_CHIMERAEMOJIROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D57EE50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraEmojiRow_TypeDefinitionIndex = 13046;

	class ChimeraEmojiRow : public ::System::Object
	{
	public:
		::System::String* EmojiPath; // 0x10
		::System::UInt32 EmojiID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAEMOJIROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraEmojiRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraEmojiRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAEMOJIROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
