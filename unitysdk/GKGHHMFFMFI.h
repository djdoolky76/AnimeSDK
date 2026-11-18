#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JHLGPDFFOJC;

#define GKGHHMFFMFI_JFKBLIKNPGI_OFFSET UNITYSDK_OFFSET(0x1E5E86F0)
#define GKGHHMFFMFI_OIOCDLMKFHN_OFFSET UNITYSDK_OFFSET(0x1E5EEE10)
#define GKGHHMFFMFI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5EEDE0)

inline static constexpr unsigned int GKGHHMFFMFI_TypeDefinitionIndex = 34112;

class GKGHHMFFMFI : public ::System::Object
{
public:
	static ::System::Object** StaticGet_IELMHMBHBNI()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GKGHHMFFMFI_TypeDefinitionIndex)->GetStaticField(0x2A0D0);
	}
	static ::JHLGPDFFOJC** StaticGet_FFLPKNCOFIP()
	{
		return (::JHLGPDFFOJC**)Il2CppClass::FromTypeDefinitionIndex(GKGHHMFFMFI_TypeDefinitionIndex)->GetStaticField(0x2A0D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKGHHMFFMFI__CCTOR_OFFSET))();
	}

	static ::JHLGPDFFOJC* OIOCDLMKFHN()
	{
		return ((::JHLGPDFFOJC*(*)())((::PBYTE)hIl2Cpp + GKGHHMFFMFI_OIOCDLMKFHN_OFFSET))();
	}

	static ::JHLGPDFFOJC* JFKBLIKNPGI()
	{
		return ((::JHLGPDFFOJC*(*)())((::PBYTE)hIl2Cpp + GKGHHMFFMFI_JFKBLIKNPGI_OFFSET))();
	}
};
