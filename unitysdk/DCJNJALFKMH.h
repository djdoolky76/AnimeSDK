#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class JCADHFOKIHK;
class LNFCIBHFJHI;

#define DCJNJALFKMH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x6CDFD0)
#define DCJNJALFKMH__CTOR_OFFSET UNITYSDK_OFFSET(0x6CDFC0)

inline static constexpr unsigned int DCJNJALFKMH_TypeDefinitionIndex = 67041;

struct alignas(4) DCJNJALFKMH
{
	static ::JCADHFOKIHK** StaticGet_KADBFNFHENH()
	{
		return (::JCADHFOKIHK**)Il2CppClass::FromTypeDefinitionIndex(DCJNJALFKMH_TypeDefinitionIndex)->GetStaticField(0x43130);
	}
	static ::LNFCIBHFJHI** StaticGet_FCJDAMKEGFM()
	{
		return (::LNFCIBHFJHI**)Il2CppClass::FromTypeDefinitionIndex(DCJNJALFKMH_TypeDefinitionIndex)->GetStaticField(0x43138);
	}

	::System::Void _ctor(::JCADHFOKIHK* EKKINEPODCG, ::LNFCIBHFJHI* AIFMILONILP)
	{
		return ((::System::Void(*)(::PVOID, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + DCJNJALFKMH__CTOR_OFFSET))(this, EKKINEPODCG, AIFMILONILP);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJNJALFKMH_DISPOSE_OFFSET))(this);
	}
};
