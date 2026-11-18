#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Object; }
namespace UnityEngine { class Material; }

#define HLIAAMEFFGJ_DHAMBFOIOPJ_OFFSET UNITYSDK_OFFSET(0x611B60)
#define HLIAAMEFFGJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x611A70)
#define HLIAAMEFFGJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x6119C0)
#define HLIAAMEFFGJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x611A80)
#define HLIAAMEFFGJ_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x611B70)
#define HLIAAMEFFGJ_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x1011C780)
#define HLIAAMEFFGJ_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x611BE0)
#define HLIAAMEFFGJ_JOMJPENCKAJ_OFFSET UNITYSDK_OFFSET(0x6118A0)
#define HLIAAMEFFGJ_MPCJEODEACM_OFFSET UNITYSDK_OFFSET(0x6119B0)
#define HLIAAMEFFGJ_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x1011C8A0)
#define HLIAAMEFFGJ_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x611920)
#define HLIAAMEFFGJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x1011C5C0)

inline static constexpr unsigned int HLIAAMEFFGJ_TypeDefinitionIndex = 73964;

struct alignas(4) HLIAAMEFFGJ
{
	static ::System::Int32* StaticGet_FLMKEPJKFDB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HLIAAMEFFGJ_TypeDefinitionIndex)->GetStaticField(0xD970);
	}
	static ::UnityEngine::Vector4* StaticGet_KCLOLLMEBPE()
	{
		return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(HLIAAMEFFGJ_TypeDefinitionIndex)->GetStaticField(0xD974);
	}
	static ::System::Boolean* StaticGet_FMINJMNNBJF()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HLIAAMEFFGJ_TypeDefinitionIndex)->GetStaticField(0xD984);
	}
	static ::System::Int32* StaticGet_HAONGBLGMOO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HLIAAMEFFGJ_TypeDefinitionIndex)->GetStaticField(0xD988);
	}
	::System::Boolean HJLIGGGMJGH; // 0x10
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector4 KLJNCPOCGCN; // 0x14

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLIAAMEFFGJ__CCTOR_OFFSET))();
	}

	/*
	::System::Void JOMJPENCKAJ(::HLIAAMEFFGJ& LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::HLIAAMEFFGJ&))((::PBYTE)hIl2Cpp + HLIAAMEFFGJ_JOMJPENCKAJ_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLIAAMEFFGJ_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void MPCJEODEACM(::UnityEngine::Material* MDLNMDJMMJP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + HLIAAMEFFGJ_MPCJEODEACM_OFFSET))(this, MDLNMDJMMJP);
	}

	/*
	::System::Boolean Equals(::HLIAAMEFFGJ LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::HLIAAMEFFGJ))((::PBYTE)hIl2Cpp + HLIAAMEFFGJ_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HLIAAMEFFGJ_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLIAAMEFFGJ_GETHASHCODE_OFFSET))(this);
	}

	/*
	::System::Void DHAMBFOIOPJ(::HLIAAMEFFGJ& LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::HLIAAMEFFGJ&))((::PBYTE)hIl2Cpp + HLIAAMEFFGJ_DHAMBFOIOPJ_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLIAAMEFFGJ_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HLIAAMEFFGJ_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::HLIAAMEFFGJ FFKBEGIHIGG, ::HLIAAMEFFGJ CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::HLIAAMEFFGJ, ::HLIAAMEFFGJ))((::PBYTE)hIl2Cpp + HLIAAMEFFGJ_INCFIJKMIGG_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/

	/*
	static ::System::Boolean NOGJIJMACNO(::HLIAAMEFFGJ FFKBEGIHIGG, ::HLIAAMEFFGJ CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::HLIAAMEFFGJ, ::HLIAAMEFFGJ))((::PBYTE)hIl2Cpp + HLIAAMEFFGJ_NOGJIJMACNO_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/
};
