#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FF1237522147A967;
namespace System { class String; }

#define A2721B94D16ACDDD_COOKIEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x29D09A0)

inline static constexpr unsigned int A2721B94D16ACDDD_CookieInfo_TypeDefinitionIndex = 15737;

class A2721B94D16ACDDD_CookieInfo : public ::System::Object
{
public:
	::System::String* key; // 0x10
	::System::String* value; // 0x18
	::System::String* domain; // 0x20
	::System::String* expires; // 0x28
	::System::Boolean http_only; // 0x30
	::System::Boolean secure; // 0x31

	::System::Void _ctor(::FF1237522147A967* BA0704C763DC6938)
	{
		return ((::System::Void(*)(::PVOID, ::FF1237522147A967*))((::PBYTE)hIl2Cpp + A2721B94D16ACDDD_COOKIEINFO__CTOR_OFFSET))(this, BA0704C763DC6938);
	}
};
