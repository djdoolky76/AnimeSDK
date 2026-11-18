#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GOEGBFOFFMJ.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define DODNEJMECHE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x702400)
#define DODNEJMECHE_EQUALS_OFFSET UNITYSDK_OFFSET(0x7023B0)
#define DODNEJMECHE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x702410)
#define DODNEJMECHE_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x702460)
#define DODNEJMECHE_IKBGMGEEFLP_OFFSET UNITYSDK_OFFSET(0x702520)
#define DODNEJMECHE_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x132A4C20)
#define DODNEJMECHE_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x7024C0)
#define DODNEJMECHE_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x132A4D50)
#define DODNEJMECHE__CCTOR_OFFSET UNITYSDK_OFFSET(0x132A4B80)
#define DODNEJMECHE__CTOR_OFFSET UNITYSDK_OFFSET(0x702340)

inline static constexpr unsigned int DODNEJMECHE_TypeDefinitionIndex = 41041;

struct alignas(4) DODNEJMECHE
{
	static ::DODNEJMECHE* StaticGet_NEMJJKIFGJM()
	{
		return (::DODNEJMECHE*)Il2CppClass::FromTypeDefinitionIndex(DODNEJMECHE_TypeDefinitionIndex)->GetStaticField(0x112B0);
	}
	static ::DODNEJMECHE* StaticGet_HICEJEACBGD()
	{
		return (::DODNEJMECHE*)Il2CppClass::FromTypeDefinitionIndex(DODNEJMECHE_TypeDefinitionIndex)->GetStaticField(0x112B1);
	}
	static ::DODNEJMECHE* StaticGet_BPECPPJFIMK()
	{
		return (::DODNEJMECHE*)Il2CppClass::FromTypeDefinitionIndex(DODNEJMECHE_TypeDefinitionIndex)->GetStaticField(0x112B2);
	}
	static ::DODNEJMECHE* StaticGet_DEIPJONPFNG()
	{
		return (::DODNEJMECHE*)Il2CppClass::FromTypeDefinitionIndex(DODNEJMECHE_TypeDefinitionIndex)->GetStaticField(0x112B3);
	}
	static ::DODNEJMECHE* StaticGet_MBJMNLKHCOJ()
	{
		return (::DODNEJMECHE*)Il2CppClass::FromTypeDefinitionIndex(DODNEJMECHE_TypeDefinitionIndex)->GetStaticField(0x112B4);
	}
	::GOEGBFOFFMJ AAEDPMHMDIK; // 0x10

	::System::Void _ctor(::GOEGBFOFFMJ MIDGBLDKHMI)
	{
		return ((::System::Void(*)(::PVOID, ::GOEGBFOFFMJ))((::PBYTE)hIl2Cpp + DODNEJMECHE__CTOR_OFFSET))(this, MIDGBLDKHMI);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DODNEJMECHE__CCTOR_OFFSET))();
	}

	/*
	::System::Boolean Equals(::DODNEJMECHE LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::DODNEJMECHE))((::PBYTE)hIl2Cpp + DODNEJMECHE_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DODNEJMECHE_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DODNEJMECHE_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DODNEJMECHE_HLPHPBAODIF_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::DODNEJMECHE KILPCOMOCMD, ::DODNEJMECHE BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::DODNEJMECHE, ::DODNEJMECHE))((::PBYTE)hIl2Cpp + DODNEJMECHE_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DODNEJMECHE_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean IKBGMGEEFLP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DODNEJMECHE_IKBGMGEEFLP_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::DODNEJMECHE KILPCOMOCMD, ::DODNEJMECHE BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::DODNEJMECHE, ::DODNEJMECHE))((::PBYTE)hIl2Cpp + DODNEJMECHE_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/
};
