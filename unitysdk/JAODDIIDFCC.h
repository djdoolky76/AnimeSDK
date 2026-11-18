#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDAHJIDHMHC.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

class GIBGBCDAOGD;

#define JAODDIIDFCC_BPGMLJPDHBK_OFFSET UNITYSDK_OFFSET(0xF889DE0)
#define JAODDIIDFCC_EJBKJCFFLHN_OFFSET UNITYSDK_OFFSET(0xF889D40)
#define JAODDIIDFCC_HHONOBAEOHM_OFFSET UNITYSDK_OFFSET(0xF889B70)
#define JAODDIIDFCC_PFHMOMGNNEE_OFFSET UNITYSDK_OFFSET(0xF889D90)
#define JAODDIIDFCC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x5ED660)
#define JAODDIIDFCC__CTOR_OFFSET UNITYSDK_OFFSET(0x5ED650)

inline static constexpr unsigned int JAODDIIDFCC_TypeDefinitionIndex = 39311;

struct alignas(8) JAODDIIDFCC
{
	::System::Boolean MJIMNNFEKNB; // 0x10
	::System::Byte _padding0[0x3];
	::System::Int32 FGONDMPDHFG; // 0x14
	::HDAHJIDHMHC ANPLGANGAOI; // 0x18
	::System::ValueTuple_2<::System::Int32, ::System::Int32> EKHOJLKMJGE; // 0x1C

	::System::Void _ctor(::System::Int32 KGEALFILABA, ::HDAHJIDHMHC OCBGOOOMLAO, ::System::ValueTuple_2<::System::Int32, ::System::Int32> MLGFNFGDJKO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::HDAHJIDHMHC, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + JAODDIIDFCC__CTOR_OFFSET))(this, KGEALFILABA, OCBGOOOMLAO, MLGFNFGDJKO);
	}

	::System::Void _ctor_1(::System::Int32 KGEALFILABA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JAODDIIDFCC__CTOR_1_OFFSET))(this, KGEALFILABA);
	}

	/*
	static ::JAODDIIDFCC HHONOBAEOHM(::GIBGBCDAOGD*& GLAOEHCGCFO)
	{
		return ((::JAODDIIDFCC(*)(::GIBGBCDAOGD*&))((::PBYTE)hIl2Cpp + JAODDIIDFCC_HHONOBAEOHM_OFFSET))(GLAOEHCGCFO);
	}
	*/

	static ::System::Boolean PFHMOMGNNEE(::System::Int32& KGEALFILABA)
	{
		return ((::System::Boolean(*)(::System::Int32&))((::PBYTE)hIl2Cpp + JAODDIIDFCC_PFHMOMGNNEE_OFFSET))(KGEALFILABA);
	}

	static ::System::Boolean EJBKJCFFLHN(::System::Int32& KGEALFILABA)
	{
		return ((::System::Boolean(*)(::System::Int32&))((::PBYTE)hIl2Cpp + JAODDIIDFCC_EJBKJCFFLHN_OFFSET))(KGEALFILABA);
	}

	static ::System::Boolean BPGMLJPDHBK(::System::Int32& KGEALFILABA)
	{
		return ((::System::Boolean(*)(::System::Int32&))((::PBYTE)hIl2Cpp + JAODDIIDFCC_BPGMLJPDHBK_OFFSET))(KGEALFILABA);
	}
};
