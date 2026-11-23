#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_AE7F5EAD3100E7A4__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_AE7F5EAD3100E7A4_TypeDefinitionIndex = 19491;

	class BrowserNative_AE7F5EAD3100E7A4 : public ::System::Object
	{
	public:
		::System::String* F79B4D487F303AB2; // 0x10
		::System::String* E937D4885DAA1AE8; // 0x18
		::System::String* FD0ADA5A8EB95003; // 0x20
		::System::String* EFF983A80A48BB2A; // 0x28
		::System::String* FC96628A5D1BA9E0; // 0x30
		::System::String* FBC56AACABF288CC; // 0x38
		::System::String* ED33884EE685719C; // 0x40
		::System::Byte EB1905A1FEBBCAF6; // 0x48
		::System::Byte B767B6FBA72CDE89; // 0x49

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_AE7F5EAD3100E7A4__CTOR_OFFSET))(this);
		}
	};
}
