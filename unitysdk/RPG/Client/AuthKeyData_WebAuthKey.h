#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_AUTHKEYDATA_WEBAUTHKEY_CTOR_OFFSET UNITYSDK_OFFSET(0xC6C5F70)

namespace RPG::Client
{
	class AuthKeyData_WebAuthKey : public ::System::Object
	{
	public:
		::System::String* AuthKeyString; // 0x10
		::System::UInt32 ExpireTimeStamp; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTHKEYDATA_WEBAUTHKEY_CTOR_OFFSET))(this);
		}

	};
}
