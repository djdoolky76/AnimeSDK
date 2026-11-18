#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Object; }
namespace UnityEngine { class Material; }

#define CLLIPDAJMMB_CIGEOCLHPPL_OFFSET UNITYSDK_OFFSET(0x73C390)
#define CLLIPDAJMMB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x73C2A0)
#define CLLIPDAJMMB_EQUALS_OFFSET UNITYSDK_OFFSET(0x73C1F0)
#define CLLIPDAJMMB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x73C2B0)
#define CLLIPDAJMMB_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x73C410)
#define CLLIPDAJMMB_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x147ACCE0)
#define CLLIPDAJMMB_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x73C3A0)
#define CLLIPDAJMMB_JOMJPENCKAJ_OFFSET UNITYSDK_OFFSET(0x73C0D0)
#define CLLIPDAJMMB_MPCJEODEACM_OFFSET UNITYSDK_OFFSET(0x73C1E0)
#define CLLIPDAJMMB_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x147ACBB0)
#define CLLIPDAJMMB_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x73C150)
#define CLLIPDAJMMB__CCTOR_OFFSET UNITYSDK_OFFSET(0x147ACAC0)

inline static constexpr unsigned int CLLIPDAJMMB_TypeDefinitionIndex = 59666;

struct alignas(4) CLLIPDAJMMB
{
	static ::System::Int32* StaticGet_FLMKEPJKFDB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CLLIPDAJMMB_TypeDefinitionIndex)->GetStaticField(0x108E0);
	}
	static ::UnityEngine::Vector4* StaticGet_KCLOLLMEBPE()
	{
		return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(CLLIPDAJMMB_TypeDefinitionIndex)->GetStaticField(0x108E4);
	}
	static ::System::Int32* StaticGet_HAONGBLGMOO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CLLIPDAJMMB_TypeDefinitionIndex)->GetStaticField(0x108F4);
	}
	static ::System::Boolean* StaticGet_FMINJMNNBJF()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CLLIPDAJMMB_TypeDefinitionIndex)->GetStaticField(0x108F8);
	}
	::System::Boolean HJLIGGGMJGH; // 0x10
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector4 KLJNCPOCGCN; // 0x14

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLLIPDAJMMB__CCTOR_OFFSET))();
	}

	/*
	::System::Void JOMJPENCKAJ(::CLLIPDAJMMB& LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::CLLIPDAJMMB&))((::PBYTE)hIl2Cpp + CLLIPDAJMMB_JOMJPENCKAJ_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLIPDAJMMB_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void MPCJEODEACM(::UnityEngine::Material* MDLNMDJMMJP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLLIPDAJMMB_MPCJEODEACM_OFFSET))(this, MDLNMDJMMJP);
	}

	/*
	::System::Boolean Equals(::CLLIPDAJMMB LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::CLLIPDAJMMB))((::PBYTE)hIl2Cpp + CLLIPDAJMMB_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLLIPDAJMMB_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLIPDAJMMB_GETHASHCODE_OFFSET))(this);
	}

	/*
	::System::Void CIGEOCLHPPL(::CLLIPDAJMMB& LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::CLLIPDAJMMB&))((::PBYTE)hIl2Cpp + CLLIPDAJMMB_CIGEOCLHPPL_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	/*
	static ::System::Boolean NOGJIJMACNO(::CLLIPDAJMMB FFKBEGIHIGG, ::CLLIPDAJMMB CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::CLLIPDAJMMB, ::CLLIPDAJMMB))((::PBYTE)hIl2Cpp + CLLIPDAJMMB_NOGJIJMACNO_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLLIPDAJMMB_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::CLLIPDAJMMB FFKBEGIHIGG, ::CLLIPDAJMMB CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::CLLIPDAJMMB, ::CLLIPDAJMMB))((::PBYTE)hIl2Cpp + CLLIPDAJMMB_INCFIJKMIGG_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLIPDAJMMB_HLPHPBAODIF_OFFSET))(this);
	}
};
