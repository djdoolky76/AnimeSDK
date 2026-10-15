#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NATIVECOOKIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6547C0)

namespace ZenFulcrum::EmbeddedBrowser
{
	class BrowserNative_NativeCookie : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::String* value; // 0x18
		::System::String* domain; // 0x20
		::System::String* path; // 0x28
		::System::String* creation; // 0x30
		::System::String* lastAccess; // 0x38
		::System::String* expires; // 0x40
		::System::Byte secure; // 0x48
		::System::Byte httpOnly; // 0x49
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NATIVECOOKIE_CTOR_OFFSET))(this);
		}

	};
}
