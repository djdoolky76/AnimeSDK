#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKFCPCNGNEC.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define KHKLHFALPEB_CTOR_OFFSET UNITYSDK_OFFSET(0x19796410)
#define KHKLHFALPEB_GET_COMICPATH_OFFSET UNITYSDK_OFFSET(0x197963B0)
#define KHKLHFALPEB_GET_FULLTITLE_OFFSET UNITYSDK_OFFSET(0x197963F0)
#define KHKLHFALPEB_GET_ILLUSTRATIONID_OFFSET UNITYSDK_OFFSET(0x19796390)
#define KHKLHFALPEB_GET_SHORTTITLE_OFFSET UNITYSDK_OFFSET(0x197963D0)
#define KHKLHFALPEB_SET_COMICPATH_OFFSET UNITYSDK_OFFSET(0x197963C0)
#define KHKLHFALPEB_SET_FULLTITLE_OFFSET UNITYSDK_OFFSET(0x19796400)
#define KHKLHFALPEB_SET_ILLUSTRATIONID_OFFSET UNITYSDK_OFFSET(0x197963A0)
#define KHKLHFALPEB_SET_SHORTTITLE_OFFSET UNITYSDK_OFFSET(0x197963E0)

inline static constexpr unsigned int KHKLHFALPEB_TypeDefinitionIndex = 77060;

	class KHKLHFALPEB : public ::System::Object
	{
	public:
		::System::String* _ComicPath_k__BackingField; // 0x10
		::RPG::Client::TextID _ShortTitle_k__BackingField; // 0x18
		::CKFCPCNGNEC _IllustrationId_k__BackingField; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _FullTitle_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKLHFALPEB_CTOR_OFFSET))(this);
		}

		::CKFCPCNGNEC get_IllustrationId()
		{
			return ((::CKFCPCNGNEC(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKLHFALPEB_GET_ILLUSTRATIONID_OFFSET))(this);
		}

		::System::Void set_IllustrationId(::CKFCPCNGNEC a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKFCPCNGNEC))((::PBYTE)hIl2Cpp + KHKLHFALPEB_SET_ILLUSTRATIONID_OFFSET))(this, a1);
		}

		::System::String* get_ComicPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKLHFALPEB_GET_COMICPATH_OFFSET))(this);
		}

		::System::Void set_ComicPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KHKLHFALPEB_SET_COMICPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_ShortTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKLHFALPEB_GET_SHORTTITLE_OFFSET))(this);
		}

		::System::Void set_ShortTitle(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + KHKLHFALPEB_SET_SHORTTITLE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_FullTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKLHFALPEB_GET_FULLTITLE_OFFSET))(this);
		}

		::System::Void set_FullTitle(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + KHKLHFALPEB_SET_FULLTITLE_OFFSET))(this, a1);
		}

	};
