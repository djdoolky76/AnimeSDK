#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTBUBBLEENTRYVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xDE90020)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTBUBBLEENTRYVIEWMODEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xDE90050)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTBUBBLEENTRYVIEWMODEL_GET_TALKNUMBER_OFFSET UNITYSDK_OFFSET(0xDE90030)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTBUBBLEENTRYVIEWMODEL_GET_TEXTID_OFFSET UNITYSDK_OFFSET(0xDE90040)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertSettlementBubbleEntryViewModel_TypeDefinitionIndex = 80134;

	class ComicDessertSettlementBubbleEntryViewModel : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::RPG::Client::TextID _TextID_k__BackingField; // 0x18
		::System::UInt32 _TalkNumber_k__BackingField; // 0x28
		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::TextID a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TextID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTBUBBLEENTRYVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_TalkNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTBUBBLEENTRYVIEWMODEL_GET_TALKNUMBER_OFFSET))(this);
		}

		::RPG::Client::TextID get_TextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTBUBBLEENTRYVIEWMODEL_GET_TEXTID_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSETTLEMENTBUBBLEENTRYVIEWMODEL_GET_ICONPATH_OFFSET))(this);
		}

	};
}
