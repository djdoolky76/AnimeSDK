#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_COMICDESSERT_COMICDESSERTCOMICUNLOCKBUBBLEENTRYVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D028450)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTCOMICUNLOCKBUBBLEENTRYVIEWMODEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1D028470)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTCOMICUNLOCKBUBBLEENTRYVIEWMODEL_GET_TEXTID_OFFSET UNITYSDK_OFFSET(0x1D028460)

namespace RPG::Client::ComicDessert
{
	inline static constexpr unsigned int ComicDessertComicUnlockBubbleEntryViewModel_TypeDefinitionIndex = 77108;

	class ComicDessertComicUnlockBubbleEntryViewModel : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::RPG::Client::TextID _TextID_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::Client::TextID a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTCOMICUNLOCKBUBBLEENTRYVIEWMODEL_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID get_TextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTCOMICUNLOCKBUBBLEENTRYVIEWMODEL_GET_TEXTID_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTCOMICUNLOCKBUBBLEENTRYVIEWMODEL_GET_ICONPATH_OFFSET))(this);
		}

	};
}
