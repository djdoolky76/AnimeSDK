#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define OFKFGILLDIP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x778600)
#define OFKFGILLDIP_EQUALS_OFFSET UNITYSDK_OFFSET(0x7785B0)
#define OFKFGILLDIP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x778610)
#define OFKFGILLDIP_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x778670)
#define OFKFGILLDIP_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x15FDC060)
#define OFKFGILLDIP_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x7786D0)
#define OFKFGILLDIP_JNGFPHECPAK_OFFSET UNITYSDK_OFFSET(0x3CE9E0)
#define OFKFGILLDIP_MBNBBKJHICE_OFFSET UNITYSDK_OFFSET(0x3D5A00)
#define OFKFGILLDIP_NJIAGCOLGBA_OFFSET UNITYSDK_OFFSET(0x778660)
#define OFKFGILLDIP_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x15FDC150)
#define OFKFGILLDIP__CTOR_OFFSET UNITYSDK_OFFSET(0x7785A0)

inline static constexpr unsigned int OFKFGILLDIP_TypeDefinitionIndex = 58217;

struct alignas(4) OFKFGILLDIP
{
	::System::UInt64 HHGILNNMNAK; // 0x10

	::System::Void _ctor(::System::Int32 HPEMFJDOAKL, ::System::UInt32 IEGPOKIFOIO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + OFKFGILLDIP__CTOR_OFFSET))(this, HPEMFJDOAKL, IEGPOKIFOIO);
	}

	/*
	::System::Boolean Equals(::OFKFGILLDIP LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::OFKFGILLDIP))((::PBYTE)hIl2Cpp + OFKFGILLDIP_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OFKFGILLDIP_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKFGILLDIP_GETHASHCODE_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::OFKFGILLDIP KILPCOMOCMD, ::OFKFGILLDIP BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::OFKFGILLDIP, ::OFKFGILLDIP))((::PBYTE)hIl2Cpp + OFKFGILLDIP_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Int32 NJIAGCOLGBA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKFGILLDIP_NJIAGCOLGBA_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKFGILLDIP_HLPHPBAODIF_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::OFKFGILLDIP KILPCOMOCMD, ::OFKFGILLDIP BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::OFKFGILLDIP, ::OFKFGILLDIP))((::PBYTE)hIl2Cpp + OFKFGILLDIP_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OFKFGILLDIP_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean MBNBBKJHICE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKFGILLDIP_MBNBBKJHICE_OFFSET))(this);
	}

	::System::UInt32 JNGFPHECPAK()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKFGILLDIP_JNGFPHECPAK_OFFSET))(this);
	}
};
