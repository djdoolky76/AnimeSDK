#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GBJOIDIEMBG;

#define DJPEEJFNCHL_BJMEIOCNCEK_DEOFHNFMIHB_OFFSET UNITYSDK_OFFSET(0x183462A0)
#define DJPEEJFNCHL_BJMEIOCNCEK__CTOR_OFFSET UNITYSDK_OFFSET(0x18346290)

inline static constexpr unsigned int DJPEEJFNCHL_BJMEIOCNCEK_TypeDefinitionIndex = 73768;

class DJPEEJFNCHL_BJMEIOCNCEK : public ::System::Object
{
public:
	::System::UInt32 HOLOBBCLNKB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJPEEJFNCHL_BJMEIOCNCEK__CTOR_OFFSET))(this);
	}

	::System::Boolean DEOFHNFMIHB(::GBJOIDIEMBG* PMLAACAFPDO)
	{
		return ((::System::Boolean(*)(::PVOID, ::GBJOIDIEMBG*))((::PBYTE)hIl2Cpp + DJPEEJFNCHL_BJMEIOCNCEK_DEOFHNFMIHB_OFFSET))(this, PMLAACAFPDO);
	}
};
