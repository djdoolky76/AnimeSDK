#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define DJKIIJNLDKM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x740BA0)
#define DJKIIJNLDKM_EQUALS_OFFSET UNITYSDK_OFFSET(0x740B20)
#define DJKIIJNLDKM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x740BB0)
#define DJKIIJNLDKM_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x740C10)
#define DJKIIJNLDKM_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x148ACD40)
#define DJKIIJNLDKM_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x740C80)
#define DJKIIJNLDKM_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x148ACC00)
#define DJKIIJNLDKM__CTOR_OFFSET UNITYSDK_OFFSET(0x740B10)

inline static constexpr unsigned int DJKIIJNLDKM_TypeDefinitionIndex = 79410;

struct alignas(4) DJKIIJNLDKM
{
	::System::Int32 ABKIIACOJCD; // 0x10
	::System::UInt16 OKOOKNJJLHD; // 0x14
	::System::Byte _padding0[0x2];
	::System::UInt32 FEAAKLJIAFE; // 0x18

	::System::Void _ctor(::System::Int32 OCJFCOGGMAB, ::System::UInt16 EIKGFAFPNDI, ::System::UInt32 IEGPOKIFOIO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt16, ::System::UInt32))((::PBYTE)hIl2Cpp + DJKIIJNLDKM__CTOR_OFFSET))(this, OCJFCOGGMAB, EIKGFAFPNDI, IEGPOKIFOIO);
	}

	/*
	::System::Boolean Equals(::DJKIIJNLDKM LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::DJKIIJNLDKM))((::PBYTE)hIl2Cpp + DJKIIJNLDKM_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DJKIIJNLDKM_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKIIJNLDKM_GETHASHCODE_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::DJKIIJNLDKM KILPCOMOCMD, ::DJKIIJNLDKM BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::DJKIIJNLDKM, ::DJKIIJNLDKM))((::PBYTE)hIl2Cpp + DJKIIJNLDKM_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKIIJNLDKM_HLPHPBAODIF_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::DJKIIJNLDKM KILPCOMOCMD, ::DJKIIJNLDKM BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::DJKIIJNLDKM, ::DJKIIJNLDKM))((::PBYTE)hIl2Cpp + DJKIIJNLDKM_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DJKIIJNLDKM_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
