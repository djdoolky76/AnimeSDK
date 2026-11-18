#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMCCOLIGOPC.h"
#include "unitysdk/HANBGPCOAML.h"

class DOBPKFIDAAG;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PONLJLADGKO_BFPHEINKFJL_OFFSET UNITYSDK_OFFSET(0x1C1E54F0)
#define PONLJLADGKO_KNDMMHPDPIB_OFFSET UNITYSDK_OFFSET(0x1C1E5580)
#define PONLJLADGKO_MOPIPEBHLJF_OFFSET UNITYSDK_OFFSET(0x1C1E5890)
#define PONLJLADGKO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1E59D0)
#define PONLJLADGKO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1E59C0)

inline static constexpr unsigned int PONLJLADGKO_TypeDefinitionIndex = 91609;

class PONLJLADGKO : public ::HANBGPCOAML
{
public:
	static ::PONLJLADGKO** StaticGet_NJLLMPCDOEB()
	{
		return (::PONLJLADGKO**)Il2CppClass::FromTypeDefinitionIndex(PONLJLADGKO_TypeDefinitionIndex)->GetStaticField(0x49400);
	}
	static ::System::Collections::Generic::List_1<::EMCCOLIGOPC>** StaticGet_OHBIIPPOJAO()
	{
		return (::System::Collections::Generic::List_1<::EMCCOLIGOPC>**)Il2CppClass::FromTypeDefinitionIndex(PONLJLADGKO_TypeDefinitionIndex)->GetStaticField(0x49408);
	}
	static ::EMCCOLIGOPC* StaticGet_LFFJLGBPKLH()
	{
		return (::EMCCOLIGOPC*)Il2CppClass::FromTypeDefinitionIndex(PONLJLADGKO_TypeDefinitionIndex)->GetStaticField(0x11110);
	}
	static ::EMCCOLIGOPC* StaticGet_PGFMIBACMFK()
	{
		return (::EMCCOLIGOPC*)Il2CppClass::FromTypeDefinitionIndex(PONLJLADGKO_TypeDefinitionIndex)->GetStaticField(0x11120);
	}
	static ::EMCCOLIGOPC* StaticGet_OMNNOKBPDHO()
	{
		return (::EMCCOLIGOPC*)Il2CppClass::FromTypeDefinitionIndex(PONLJLADGKO_TypeDefinitionIndex)->GetStaticField(0x11130);
	}
	static ::EMCCOLIGOPC* StaticGet_MIDDPLPMKCM()
	{
		return (::EMCCOLIGOPC*)Il2CppClass::FromTypeDefinitionIndex(PONLJLADGKO_TypeDefinitionIndex)->GetStaticField(0x11140);
	}
	static ::EMCCOLIGOPC* StaticGet_PFJNHBAMABK()
	{
		return (::EMCCOLIGOPC*)Il2CppClass::FromTypeDefinitionIndex(PONLJLADGKO_TypeDefinitionIndex)->GetStaticField(0x11150);
	}
	static ::EMCCOLIGOPC* StaticGet_ODFIAONELIH()
	{
		return (::EMCCOLIGOPC*)Il2CppClass::FromTypeDefinitionIndex(PONLJLADGKO_TypeDefinitionIndex)->GetStaticField(0x11160);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PONLJLADGKO__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PONLJLADGKO__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::IReadOnlyList_1<::EMCCOLIGOPC>* BFPHEINKFJL()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::EMCCOLIGOPC>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PONLJLADGKO_BFPHEINKFJL_OFFSET))(this);
	}

	::System::Void KNDMMHPDPIB(::DOBPKFIDAAG* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::DOBPKFIDAAG*))((::PBYTE)hIl2Cpp + PONLJLADGKO_KNDMMHPDPIB_OFFSET))(this, AAOCANGHBDG);
	}

	static ::System::Single MOPIPEBHLJF(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + PONLJLADGKO_MOPIPEBHLJF_OFFSET))(EGEGIMGMJHN);
	}
};
