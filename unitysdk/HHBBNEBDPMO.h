#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PLGOGLNNPJJ;

#define HHBBNEBDPMO_COMPARE_OFFSET UNITYSDK_OFFSET(0x15B4A2A0)
#define HHBBNEBDPMO__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B4A5D0)
#define HHBBNEBDPMO__CTOR_OFFSET UNITYSDK_OFFSET(0x15B4A5C0)

inline static constexpr unsigned int HHBBNEBDPMO_TypeDefinitionIndex = 48682;

class HHBBNEBDPMO : public ::System::Object
{
public:
	static ::HHBBNEBDPMO** StaticGet_NJLLMPCDOEB()
	{
		return (::HHBBNEBDPMO**)Il2CppClass::FromTypeDefinitionIndex(HHBBNEBDPMO_TypeDefinitionIndex)->GetStaticField(0x48010);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHBBNEBDPMO__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHBBNEBDPMO__CCTOR_OFFSET))();
	}

	::System::Int32 Compare(::PLGOGLNNPJJ* HAAEBCOBKFF, ::PLGOGLNNPJJ* BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::PLGOGLNNPJJ*, ::PLGOGLNNPJJ*))((::PBYTE)hIl2Cpp + HHBBNEBDPMO_COMPARE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
