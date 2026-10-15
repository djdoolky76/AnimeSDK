#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotBookCharacterRow; }
namespace System { class String; }

#define RPG_GAMECORE_TAROTBOOKCHARACTERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB75790)
#define RPG_GAMECORE_TAROTBOOKCHARACTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB75250)

namespace RPG::GameCore
{
	class TarotBookCharacterRow : public ::System::Object
	{
	public:
		::System::String* RectIconPath; // 0x10
		::System::String* PrefabPath; // 0x18
		::System::String* TabIconPath; // 0x20
		::Il2CppArray<::System::UInt32>* StoryList; // 0x28
		::System::String* RoundIconPath; // 0x30
		::System::UInt32 ID; // 0x38
		::System::UInt32 Tag; // 0x3C
		::RPG::Client::TextID Name; // 0x40
		::System::UInt32 MaxLevel; // 0x50
		::System::UInt32 Position; // 0x54
		::RPG::Client::TextID MainCatalogTitle; // 0x58
		::RPG::Client::TextID StarUnlockToast; // 0x68
		::RPG::Client::TextID SubCatalogTitle; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKCHARACTERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TarotBookCharacterRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TarotBookCharacterRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKCHARACTERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
