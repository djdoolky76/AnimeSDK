#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/Container/SparseElementHandle_1.h"
#include "unitysdk/System/ValueType.h"

class ADEFGFOLCNC;
namespace System { class Object; }

#define FJGEHPBJKDM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x4AFED0)
#define FJGEHPBJKDM_EQUALS_OFFSET UNITYSDK_OFFSET(0x4AFE20)
#define FJGEHPBJKDM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x4AFEE0)
#define FJGEHPBJKDM_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x4B0000)
#define FJGEHPBJKDM_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0xBB49AC0)
#define FJGEHPBJKDM_JEMJEGJOAEK_OFFSET UNITYSDK_OFFSET(0xBB49CC0)
#define FJGEHPBJKDM_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x4AFF50)
#define FJGEHPBJKDM_MDLLGIMAGCP_OFFSET UNITYSDK_OFFSET(0x359320)
#define FJGEHPBJKDM_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0xBB49A40)
#define FJGEHPBJKDM_OAJEIDFGCII_OFFSET UNITYSDK_OFFSET(0x4AFFC0)
#define FJGEHPBJKDM_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x4B0060)
#define FJGEHPBJKDM__CTOR_OFFSET UNITYSDK_OFFSET(0x358470)

inline static constexpr unsigned int FJGEHPBJKDM_TypeDefinitionIndex = 68765;

struct alignas(8) FJGEHPBJKDM
{
	::Foundation::ViewObject::Container::SparseElementHandle_1<::ADEFGFOLCNC*> IAFHBCHLBME; // 0x10

	::System::Void _ctor(::Foundation::ViewObject::Container::SparseElementHandle_1<::ADEFGFOLCNC*> PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Container::SparseElementHandle_1<::ADEFGFOLCNC*>))((::PBYTE)hIl2Cpp + FJGEHPBJKDM__CTOR_OFFSET))(this, PHHDHIBOCKA);
	}

	/*
	::System::Boolean Equals(::FJGEHPBJKDM LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::FJGEHPBJKDM))((::PBYTE)hIl2Cpp + FJGEHPBJKDM_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJGEHPBJKDM_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGEHPBJKDM_GETHASHCODE_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::FJGEHPBJKDM KILPCOMOCMD, ::FJGEHPBJKDM BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::FJGEHPBJKDM, ::FJGEHPBJKDM))((::PBYTE)hIl2Cpp + FJGEHPBJKDM_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJGEHPBJKDM_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean OAJEIDFGCII()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGEHPBJKDM_OAJEIDFGCII_OFFSET))(this);
	}

	::System::Int32 MDLLGIMAGCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGEHPBJKDM_MDLLGIMAGCP_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGEHPBJKDM_HLPHPBAODIF_OFFSET))(this);
	}

	/*
	static ::FJGEHPBJKDM JEMJEGJOAEK()
	{
		return ((::FJGEHPBJKDM(*)())((::PBYTE)hIl2Cpp + FJGEHPBJKDM_JEMJEGJOAEK_OFFSET))();
	}
	*/

	/*
	static ::System::Boolean INCFIJKMIGG(::FJGEHPBJKDM KILPCOMOCMD, ::FJGEHPBJKDM BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::FJGEHPBJKDM, ::FJGEHPBJKDM))((::PBYTE)hIl2Cpp + FJGEHPBJKDM_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGEHPBJKDM_PPIFNHNGCGO_OFFSET))(this);
	}
};
