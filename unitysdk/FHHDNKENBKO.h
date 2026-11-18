#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FHHDNKENBKO__CCTOR_OFFSET UNITYSDK_OFFSET(0x140F5250)

inline static constexpr unsigned int FHHDNKENBKO_TypeDefinitionIndex = 47487;

struct alignas(4) FHHDNKENBKO
{
	static ::FHHDNKENBKO* StaticGet_KGCFHFKJMIN()
	{
		return (::FHHDNKENBKO*)Il2CppClass::FromTypeDefinitionIndex(FHHDNKENBKO_TypeDefinitionIndex)->GetStaticField(0x11100);
	}
	::System::Boolean IBEPGFEJFIF; // 0x10

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHHDNKENBKO__CCTOR_OFFSET))();
	}
};
