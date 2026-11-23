#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A2721B94D16ACDDD_CookieInfo;
namespace MiHoYo::SDK { class MiHoYoSDKWebView; }

#define A2721B94D16ACDDD_AC186AFA7AE8A445_A9369FCE1C3FDE12_OFFSET UNITYSDK_OFFSET(0x29E6130)
#define A2721B94D16ACDDD_AC186AFA7AE8A445__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A2721B94D16ACDDD_AC186AFA7AE8A445_TypeDefinitionIndex = 15739;

class A2721B94D16ACDDD_AC186AFA7AE8A445 : public ::System::Object
{
public:
	::MiHoYo::SDK::MiHoYoSDKWebView* B08D041A4C2E0EAA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A2721B94D16ACDDD_AC186AFA7AE8A445__CTOR_OFFSET))(this);
	}

	::System::Void A9369FCE1C3FDE12(::A2721B94D16ACDDD_CookieInfo* F74A819D3F10B9E7)
	{
		return ((::System::Void(*)(::PVOID, ::A2721B94D16ACDDD_CookieInfo*))((::PBYTE)hIl2Cpp + A2721B94D16ACDDD_AC186AFA7AE8A445_A9369FCE1C3FDE12_OFFSET))(this, F74A819D3F10B9E7);
	}
};
