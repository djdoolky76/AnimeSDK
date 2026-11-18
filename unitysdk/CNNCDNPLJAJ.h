#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define CNNCDNPLJAJ_JEJDKEOGNIN_OFFSET UNITYSDK_OFFSET(0x15794F40)
#define CNNCDNPLJAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15794F80)

inline static constexpr unsigned int CNNCDNPLJAJ_TypeDefinitionIndex = 11075;

class CNNCDNPLJAJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNCDNPLJAJ__CTOR_OFFSET))(this);
	}

	::System::String* JEJDKEOGNIN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNCDNPLJAJ_JEJDKEOGNIN_OFFSET))(this);
	}
};
