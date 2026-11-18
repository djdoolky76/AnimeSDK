#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace UnityEngine { class Material; }

#define DOLGMDNFFEJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x705F30)
#define DOLGMDNFFEJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x705EC0)
#define DOLGMDNFFEJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x705F40)
#define DOLGMDNFFEJ_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x705FD0)
#define DOLGMDNFFEJ_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x13472D60)
#define DOLGMDNFFEJ_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x706030)
#define DOLGMDNFFEJ_JOMJPENCKAJ_OFFSET UNITYSDK_OFFSET(0x705DB0)
#define DOLGMDNFFEJ_MCEDBGIADMA_OFFSET UNITYSDK_OFFSET(0x705FC0)
#define DOLGMDNFFEJ_MPCJEODEACM_OFFSET UNITYSDK_OFFSET(0x705EB0)
#define DOLGMDNFFEJ_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x13472CD0)
#define DOLGMDNFFEJ_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x705E10)
#define DOLGMDNFFEJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x13472C70)

inline static constexpr unsigned int DOLGMDNFFEJ_TypeDefinitionIndex = 78842;

struct alignas(4) DOLGMDNFFEJ
{
	static ::System::Single* StaticGet_MGCHCCHDFFB()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(DOLGMDNFFEJ_TypeDefinitionIndex)->GetStaticField(0xC860);
	}
	static ::System::Single* StaticGet_PJBKMKGCNPF()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(DOLGMDNFFEJ_TypeDefinitionIndex)->GetStaticField(0xC864);
	}
	static ::System::Int32* StaticGet_LIAOKNDKIFL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DOLGMDNFFEJ_TypeDefinitionIndex)->GetStaticField(0xC868);
	}
	static ::System::Int32* StaticGet_POKANJNBDJL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DOLGMDNFFEJ_TypeDefinitionIndex)->GetStaticField(0xC86C);
	}
	::System::Single BFMMEICFNCD; // 0x10
	::System::Single HAAEBCOBKFF; // 0x14

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOLGMDNFFEJ__CCTOR_OFFSET))();
	}

	/*
	::System::Void JOMJPENCKAJ(::DOLGMDNFFEJ& LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::DOLGMDNFFEJ&))((::PBYTE)hIl2Cpp + DOLGMDNFFEJ_JOMJPENCKAJ_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLGMDNFFEJ_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void MPCJEODEACM(::UnityEngine::Material* MDLNMDJMMJP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DOLGMDNFFEJ_MPCJEODEACM_OFFSET))(this, MDLNMDJMMJP);
	}

	/*
	::System::Boolean Equals(::DOLGMDNFFEJ LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::DOLGMDNFFEJ))((::PBYTE)hIl2Cpp + DOLGMDNFFEJ_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DOLGMDNFFEJ_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLGMDNFFEJ_GETHASHCODE_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::DOLGMDNFFEJ FFKBEGIHIGG, ::DOLGMDNFFEJ CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::DOLGMDNFFEJ, ::DOLGMDNFFEJ))((::PBYTE)hIl2Cpp + DOLGMDNFFEJ_NOGJIJMACNO_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/

	/*
	static ::System::Boolean INCFIJKMIGG(::DOLGMDNFFEJ FFKBEGIHIGG, ::DOLGMDNFFEJ CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::DOLGMDNFFEJ, ::DOLGMDNFFEJ))((::PBYTE)hIl2Cpp + DOLGMDNFFEJ_INCFIJKMIGG_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/

	/*
	::System::Void MCEDBGIADMA(::DOLGMDNFFEJ& LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::DOLGMDNFFEJ&))((::PBYTE)hIl2Cpp + DOLGMDNFFEJ_MCEDBGIADMA_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLGMDNFFEJ_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DOLGMDNFFEJ_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
