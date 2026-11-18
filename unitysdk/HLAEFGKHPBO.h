#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFKFGILLDIP.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define HLAEFGKHPBO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x742E80)
#define HLAEFGKHPBO_EQUALS_OFFSET UNITYSDK_OFFSET(0x742DC0)
#define HLAEFGKHPBO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x742E90)
#define HLAEFGKHPBO_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x742F70)
#define HLAEFGKHPBO_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x149552A0)
#define HLAEFGKHPBO_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x742F10)
#define HLAEFGKHPBO_MBNBBKJHICE_OFFSET UNITYSDK_OFFSET(0x3D5A00)
#define HLAEFGKHPBO_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x14955460)
#define HLAEFGKHPBO_OLMDDOINEIP_OFFSET UNITYSDK_OFFSET(0x282350)
#define HLAEFGKHPBO__CCTOR_OFFSET UNITYSDK_OFFSET(0x14955290)
#define HLAEFGKHPBO__CTOR_OFFSET UNITYSDK_OFFSET(0x651840)

inline static constexpr unsigned int HLAEFGKHPBO_TypeDefinitionIndex = 48863;

struct alignas(4) HLAEFGKHPBO
{
	static ::HLAEFGKHPBO* StaticGet_CGICCOBHACH()
	{
		return (::HLAEFGKHPBO*)Il2CppClass::FromTypeDefinitionIndex(HLAEFGKHPBO_TypeDefinitionIndex)->GetStaticField(0x118E0);
	}
	::OFKFGILLDIP MBFMDFAMCKD; // 0x10

	::System::Void _ctor(::OFKFGILLDIP& OIMNPCCGDDD)
	{
		return ((::System::Void(*)(::PVOID, ::OFKFGILLDIP&))((::PBYTE)hIl2Cpp + HLAEFGKHPBO__CTOR_OFFSET))(this, OIMNPCCGDDD);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLAEFGKHPBO__CCTOR_OFFSET))();
	}

	/*
	::System::Boolean Equals(::HLAEFGKHPBO LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::HLAEFGKHPBO))((::PBYTE)hIl2Cpp + HLAEFGKHPBO_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HLAEFGKHPBO_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLAEFGKHPBO_GETHASHCODE_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::HLAEFGKHPBO KILPCOMOCMD, ::HLAEFGKHPBO BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::HLAEFGKHPBO, ::HLAEFGKHPBO))((::PBYTE)hIl2Cpp + HLAEFGKHPBO_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::OFKFGILLDIP OLMDDOINEIP()
	{
		return ((::OFKFGILLDIP(*)(::PVOID))((::PBYTE)hIl2Cpp + HLAEFGKHPBO_OLMDDOINEIP_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HLAEFGKHPBO_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLAEFGKHPBO_HLPHPBAODIF_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::HLAEFGKHPBO KILPCOMOCMD, ::HLAEFGKHPBO BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::HLAEFGKHPBO, ::HLAEFGKHPBO))((::PBYTE)hIl2Cpp + HLAEFGKHPBO_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Boolean MBNBBKJHICE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLAEFGKHPBO_MBNBBKJHICE_OFFSET))(this);
	}
};
