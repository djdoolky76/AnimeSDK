#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Object; }
namespace UnityEngine { class Material; }

#define GEBCHPAJEGB_ALDCOOJIIMA_OFFSET UNITYSDK_OFFSET(0x700AC0)
#define GEBCHPAJEGB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x700960)
#define GEBCHPAJEGB_EQUALS_OFFSET UNITYSDK_OFFSET(0x7008B0)
#define GEBCHPAJEGB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x700970)
#define GEBCHPAJEGB_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x700AD0)
#define GEBCHPAJEGB_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x13250CF0)
#define GEBCHPAJEGB_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x700A50)
#define GEBCHPAJEGB_JOMJPENCKAJ_OFFSET UNITYSDK_OFFSET(0x700790)
#define GEBCHPAJEGB_MPCJEODEACM_OFFSET UNITYSDK_OFFSET(0x7008A0)
#define GEBCHPAJEGB_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x13250BC0)
#define GEBCHPAJEGB_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x700810)
#define GEBCHPAJEGB__CCTOR_OFFSET UNITYSDK_OFFSET(0x13250B60)

inline static constexpr unsigned int GEBCHPAJEGB_TypeDefinitionIndex = 90040;

struct alignas(4) GEBCHPAJEGB
{
	static ::UnityEngine::Vector4* StaticGet_KCLOLLMEBPE()
	{
		return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(GEBCHPAJEGB_TypeDefinitionIndex)->GetStaticField(0xA870);
	}
	static ::System::Int32* StaticGet_FLMKEPJKFDB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GEBCHPAJEGB_TypeDefinitionIndex)->GetStaticField(0xA880);
	}
	static ::System::Boolean* StaticGet_FMINJMNNBJF()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GEBCHPAJEGB_TypeDefinitionIndex)->GetStaticField(0xA884);
	}
	static ::System::Int32* StaticGet_HAONGBLGMOO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GEBCHPAJEGB_TypeDefinitionIndex)->GetStaticField(0xA888);
	}
	::System::Boolean HJLIGGGMJGH; // 0x10
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector4 KLJNCPOCGCN; // 0x14

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEBCHPAJEGB__CCTOR_OFFSET))();
	}

	/*
	::System::Void JOMJPENCKAJ(::GEBCHPAJEGB& LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::GEBCHPAJEGB&))((::PBYTE)hIl2Cpp + GEBCHPAJEGB_JOMJPENCKAJ_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEBCHPAJEGB_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void MPCJEODEACM(::UnityEngine::Material* MDLNMDJMMJP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + GEBCHPAJEGB_MPCJEODEACM_OFFSET))(this, MDLNMDJMMJP);
	}

	/*
	::System::Boolean Equals(::GEBCHPAJEGB LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::GEBCHPAJEGB))((::PBYTE)hIl2Cpp + GEBCHPAJEGB_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GEBCHPAJEGB_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEBCHPAJEGB_GETHASHCODE_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::GEBCHPAJEGB FFKBEGIHIGG, ::GEBCHPAJEGB CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::GEBCHPAJEGB, ::GEBCHPAJEGB))((::PBYTE)hIl2Cpp + GEBCHPAJEGB_NOGJIJMACNO_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/

	/*
	static ::System::Boolean INCFIJKMIGG(::GEBCHPAJEGB FFKBEGIHIGG, ::GEBCHPAJEGB CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::GEBCHPAJEGB, ::GEBCHPAJEGB))((::PBYTE)hIl2Cpp + GEBCHPAJEGB_INCFIJKMIGG_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GEBCHPAJEGB_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	/*
	::System::Void ALDCOOJIIMA(::GEBCHPAJEGB& LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::GEBCHPAJEGB&))((::PBYTE)hIl2Cpp + GEBCHPAJEGB_ALDCOOJIIMA_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEBCHPAJEGB_HLPHPBAODIF_OFFSET))(this);
	}
};
