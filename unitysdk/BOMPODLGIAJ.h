#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define BOMPODLGIAJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x74BCE0)
#define BOMPODLGIAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x358B00)

inline static constexpr unsigned int BOMPODLGIAJ_TypeDefinitionIndex = 84786;

struct alignas(8) BOMPODLGIAJ
{
	::System::String* AMDPEEPELAP; // 0x10

	::System::Void _ctor(::System::String* PMMOBMKAHPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BOMPODLGIAJ__CTOR_OFFSET))(this, PMMOBMKAHPI);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOMPODLGIAJ_DISPOSE_OFFSET))(this);
	}
};
