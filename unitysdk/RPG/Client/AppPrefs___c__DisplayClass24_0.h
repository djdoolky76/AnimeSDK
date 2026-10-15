#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_APPPREFS___C__DISPLAYCLASS24_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC68FC30)
#define RPG_CLIENT_APPPREFS___C__DISPLAYCLASS24_0__UPDATERECENTSERVER_B__0_OFFSET UNITYSDK_OFFSET(0xC690210)

namespace RPG::Client
{
	class AppPrefs___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::System::String* server_name; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS___C__DISPLAYCLASS24_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateRecentServer_b__0(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS___C__DISPLAYCLASS24_0__UPDATERECENTSERVER_B__0_OFFSET))(this, a1);
		}

	};
}
