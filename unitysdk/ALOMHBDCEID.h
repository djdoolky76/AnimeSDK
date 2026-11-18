#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define ALOMHBDCEID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x8CF310)
#define ALOMHBDCEID_EQUALS_OFFSET UNITYSDK_OFFSET(0x8CF200)
#define ALOMHBDCEID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8CF320)
#define ALOMHBDCEID_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x8CF3B0)
#define ALOMHBDCEID_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x8CF420)
#define ALOMHBDCEID__CTOR_OFFSET UNITYSDK_OFFSET(0x8CF1B0)

inline static constexpr unsigned int ALOMHBDCEID_TypeDefinitionIndex = 94189;

struct alignas(4) ALOMHBDCEID
{
	// static const ::System::Int32 FPKKHBNILHM = 0x8; // 0x0
	::System::Int32 KGEFHMGJLMK; // 0x10
	::System::Int32 FPPJFAHEJBL; // 0x14
	::System::Int32 INKHKOFDFKI; // 0x18
	::System::Int32 FJGFFEBBIKB; // 0x1C
	::System::Int32 LOPBLDMHPLH; // 0x20
	::System::Int32 OIBNFPHMNHJ; // 0x24
	::System::Int32 EAFAJJJDMDJ; // 0x28
	::System::Int32 ICBGJKFFCGO; // 0x2C
	::System::Boolean PEDANHBGIGE; // 0x30

	::System::Void _ctor(::System::Int32 OJMJBLDBIMC, ::System::Int32 GIKIDNEAAJJ, ::System::Int32 EKGHFDODHHK, ::System::Int32 DMEKHIGACJC, ::System::Int32 GIODFACMAMD, ::System::Int32 BJPLAMJALLN, ::System::Int32 HIJMIFNPAGG, ::System::Int32 LGKAICKJAIG, ::System::Boolean FBILHHBPEHD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ALOMHBDCEID__CTOR_OFFSET))(this, OJMJBLDBIMC, GIKIDNEAAJJ, EKGHFDODHHK, DMEKHIGACJC, GIODFACMAMD, BJPLAMJALLN, HIJMIFNPAGG, LGKAICKJAIG, FBILHHBPEHD);
	}

	/*
	::System::Boolean Equals(::ALOMHBDCEID LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::ALOMHBDCEID))((::PBYTE)hIl2Cpp + ALOMHBDCEID_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ALOMHBDCEID_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOMHBDCEID_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOMHBDCEID_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ALOMHBDCEID_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
