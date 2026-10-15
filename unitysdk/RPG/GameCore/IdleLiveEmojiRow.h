#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveEmojiRow; }
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEEMOJIROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D74C5C0)
#define RPG_GAMECORE_IDLELIVEEMOJIROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D74C490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveEmojiRow_TypeDefinitionIndex = 11816;

	class IdleLiveEmojiRow : public ::System::Object
	{
	public:
		::System::String* EmojiIcon; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEMOJIROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveEmojiRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveEmojiRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEMOJIROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
