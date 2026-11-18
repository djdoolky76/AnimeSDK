#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class Object; }
namespace UnityEngine { class Material; }

#define LIBBHFPDBFL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x6C8C60)
#define LIBBHFPDBFL_EQUALS_OFFSET UNITYSDK_OFFSET(0x6C8B00)
#define LIBBHFPDBFL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6C8C70)
#define LIBBHFPDBFL_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x6C8DC0)
#define LIBBHFPDBFL_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x11F14530)
#define LIBBHFPDBFL_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x6C8D50)
#define LIBBHFPDBFL_JOMJPENCKAJ_OFFSET UNITYSDK_OFFSET(0x6C89F0)
#define LIBBHFPDBFL_MPCJEODEACM_OFFSET UNITYSDK_OFFSET(0x6C8AF0)
#define LIBBHFPDBFL_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x11F14400)
#define LIBBHFPDBFL_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x6C8A50)
#define LIBBHFPDBFL_PMOBEMJMIDP_OFFSET UNITYSDK_OFFSET(0x6C8D40)
#define LIBBHFPDBFL__CCTOR_OFFSET UNITYSDK_OFFSET(0x11F142B0)

inline static constexpr unsigned int LIBBHFPDBFL_TypeDefinitionIndex = 77232;

struct alignas(4) LIBBHFPDBFL
{
	static ::System::Int32* StaticGet_NMIAEPEMMOM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LIBBHFPDBFL_TypeDefinitionIndex)->GetStaticField(0xE4C0);
	}
	static ::UnityEngine::Color* StaticGet_DLKDLMEMMJD()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(LIBBHFPDBFL_TypeDefinitionIndex)->GetStaticField(0xE4C4);
	}
	static ::System::Boolean* StaticGet_FNELJEKDDCN()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LIBBHFPDBFL_TypeDefinitionIndex)->GetStaticField(0xE4D4);
	}
	static ::System::Int32* StaticGet_CGHGKBEDJOK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LIBBHFPDBFL_TypeDefinitionIndex)->GetStaticField(0xE4D8);
	}
	::UnityEngine::Color IDAGFACGJEC; // 0x10
	::System::Boolean DENKFPABGIJ; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIBBHFPDBFL__CCTOR_OFFSET))();
	}

	/*
	::System::Void JOMJPENCKAJ(::LIBBHFPDBFL& LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::LIBBHFPDBFL&))((::PBYTE)hIl2Cpp + LIBBHFPDBFL_JOMJPENCKAJ_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIBBHFPDBFL_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void MPCJEODEACM(::UnityEngine::Material* MDLNMDJMMJP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + LIBBHFPDBFL_MPCJEODEACM_OFFSET))(this, MDLNMDJMMJP);
	}

	/*
	::System::Boolean Equals(::LIBBHFPDBFL LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::LIBBHFPDBFL))((::PBYTE)hIl2Cpp + LIBBHFPDBFL_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LIBBHFPDBFL_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIBBHFPDBFL_GETHASHCODE_OFFSET))(this);
	}

	/*
	::System::Void PMOBEMJMIDP(::LIBBHFPDBFL& LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::LIBBHFPDBFL&))((::PBYTE)hIl2Cpp + LIBBHFPDBFL_PMOBEMJMIDP_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LIBBHFPDBFL_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::LIBBHFPDBFL FFKBEGIHIGG, ::LIBBHFPDBFL CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::LIBBHFPDBFL, ::LIBBHFPDBFL))((::PBYTE)hIl2Cpp + LIBBHFPDBFL_NOGJIJMACNO_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/

	/*
	static ::System::Boolean INCFIJKMIGG(::LIBBHFPDBFL FFKBEGIHIGG, ::LIBBHFPDBFL CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::LIBBHFPDBFL, ::LIBBHFPDBFL))((::PBYTE)hIl2Cpp + LIBBHFPDBFL_INCFIJKMIGG_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIBBHFPDBFL_HLPHPBAODIF_OFFSET))(this);
	}
};
