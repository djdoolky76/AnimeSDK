#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotBookCharacterLevelRow; }
namespace System { class String; }

#define RPG_GAMECORE_TAROTBOOKCHARACTERLEVELROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB47960)
#define RPG_GAMECORE_TAROTBOOKCHARACTERLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB47760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookCharacterLevelRow_TypeDefinitionIndex = 15233;

	class TarotBookCharacterLevelRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::RPG::Client::TextID HintID; // 0x18
		::System::UInt32 Level; // 0x28
		::System::UInt32 CharacterID; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKCHARACTERLEVELROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TarotBookCharacterLevelRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TarotBookCharacterLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKCHARACTERLEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
