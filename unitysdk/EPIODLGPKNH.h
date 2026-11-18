#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Object; }
namespace UnityEngine { class Material; }

#define EPIODLGPKNH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x6553A0)
#define EPIODLGPKNH_EQUALS_OFFSET UNITYSDK_OFFSET(0x6552F0)
#define EPIODLGPKNH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6553B0)
#define EPIODLGPKNH_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x655510)
#define EPIODLGPKNH_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x10F50840)
#define EPIODLGPKNH_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x655490)
#define EPIODLGPKNH_JOMJPENCKAJ_OFFSET UNITYSDK_OFFSET(0x6551D0)
#define EPIODLGPKNH_MMMIOJGPMCL_OFFSET UNITYSDK_OFFSET(0x655500)
#define EPIODLGPKNH_MPCJEODEACM_OFFSET UNITYSDK_OFFSET(0x6552E0)
#define EPIODLGPKNH_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x10F50A50)
#define EPIODLGPKNH_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x655250)
#define EPIODLGPKNH__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F50770)

inline static constexpr unsigned int EPIODLGPKNH_TypeDefinitionIndex = 68201;

struct alignas(4) EPIODLGPKNH
{
	static ::System::Int32* StaticGet_FLMKEPJKFDB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EPIODLGPKNH_TypeDefinitionIndex)->GetStaticField(0xE240);
	}
	static ::System::Boolean* StaticGet_FMINJMNNBJF()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EPIODLGPKNH_TypeDefinitionIndex)->GetStaticField(0xE244);
	}
	static ::System::Int32* StaticGet_HAONGBLGMOO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EPIODLGPKNH_TypeDefinitionIndex)->GetStaticField(0xE248);
	}
	static ::UnityEngine::Vector4* StaticGet_KCLOLLMEBPE()
	{
		return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(EPIODLGPKNH_TypeDefinitionIndex)->GetStaticField(0xE24C);
	}
	::System::Boolean HJLIGGGMJGH; // 0x10
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector4 KLJNCPOCGCN; // 0x14

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPIODLGPKNH__CCTOR_OFFSET))();
	}

	/*
	::System::Void JOMJPENCKAJ(::EPIODLGPKNH& LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::EPIODLGPKNH&))((::PBYTE)hIl2Cpp + EPIODLGPKNH_JOMJPENCKAJ_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIODLGPKNH_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void MPCJEODEACM(::UnityEngine::Material* MDLNMDJMMJP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + EPIODLGPKNH_MPCJEODEACM_OFFSET))(this, MDLNMDJMMJP);
	}

	/*
	::System::Boolean Equals(::EPIODLGPKNH LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::EPIODLGPKNH))((::PBYTE)hIl2Cpp + EPIODLGPKNH_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIODLGPKNH_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIODLGPKNH_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIODLGPKNH_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::EPIODLGPKNH FFKBEGIHIGG, ::EPIODLGPKNH CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::EPIODLGPKNH, ::EPIODLGPKNH))((::PBYTE)hIl2Cpp + EPIODLGPKNH_INCFIJKMIGG_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/

	/*
	::System::Void MMMIOJGPMCL(::EPIODLGPKNH& LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::EPIODLGPKNH&))((::PBYTE)hIl2Cpp + EPIODLGPKNH_MMMIOJGPMCL_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIODLGPKNH_HLPHPBAODIF_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::EPIODLGPKNH FFKBEGIHIGG, ::EPIODLGPKNH CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::EPIODLGPKNH, ::EPIODLGPKNH))((::PBYTE)hIl2Cpp + EPIODLGPKNH_NOGJIJMACNO_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/
};
