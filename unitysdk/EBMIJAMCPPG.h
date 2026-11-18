#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBMIJAMCPPG_GCNHIPMNMPC.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define EBMIJAMCPPG_AAOHPAPCENL_OFFSET UNITYSDK_OFFSET(0x702850)
#define EBMIJAMCPPG_EKCCLHHFBJA_OFFSET UNITYSDK_OFFSET(0x702990)
#define EBMIJAMCPPG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x702700)
#define EBMIJAMCPPG_EQUALS_OFFSET UNITYSDK_OFFSET(0x702640)
#define EBMIJAMCPPG_FDJHEBHLJLD_OFFSET UNITYSDK_OFFSET(0x132AFBC0)
#define EBMIJAMCPPG_FOOLIBCEEDH_OFFSET UNITYSDK_OFFSET(0x702A10)
#define EBMIJAMCPPG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x702710)
#define EBMIJAMCPPG_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x7028C0)
#define EBMIJAMCPPG_HOFBHNLFMAD_OFFSET UNITYSDK_OFFSET(0x702930)
#define EBMIJAMCPPG_IDHOMHHFPOH_OFFSET UNITYSDK_OFFSET(0x702800)
#define EBMIJAMCPPG_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x132AFAA0)
#define EBMIJAMCPPG_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x702790)
#define EBMIJAMCPPG_MIIAPOMDKBM_OFFSET UNITYSDK_OFFSET(0x702720)
#define EBMIJAMCPPG_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x132AF9F0)

inline static constexpr unsigned int EBMIJAMCPPG_TypeDefinitionIndex = 83080;

struct alignas(8) EBMIJAMCPPG
{
	::EBMIJAMCPPG_GCNHIPMNMPC HGEEHEMLAMF; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* PBEBACKPBID; // 0x18
	::System::Int32 JDJHPLDOLNI; // 0x20
	::System::Int32 NLDALEJDGNI; // 0x24

	/*
	::System::Boolean Equals(::EBMIJAMCPPG LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::EBMIJAMCPPG))((::PBYTE)hIl2Cpp + EBMIJAMCPPG_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EBMIJAMCPPG_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBMIJAMCPPG_GETHASHCODE_OFFSET))(this);
	}

	::System::Void MIIAPOMDKBM(::System::String* FOPKPPMGLGH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EBMIJAMCPPG_MIIAPOMDKBM_OFFSET))(this, FOPKPPMGLGH);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EBMIJAMCPPG_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean IDHOMHHFPOH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBMIJAMCPPG_IDHOMHHFPOH_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::EBMIJAMCPPG KILPCOMOCMD, ::EBMIJAMCPPG BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::EBMIJAMCPPG, ::EBMIJAMCPPG))((::PBYTE)hIl2Cpp + EBMIJAMCPPG_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	/*
	static ::EBMIJAMCPPG FDJHEBHLJLD()
	{
		return ((::EBMIJAMCPPG(*)())((::PBYTE)hIl2Cpp + EBMIJAMCPPG_FDJHEBHLJLD_OFFSET))();
	}
	*/

	::System::Void AAOHPAPCENL(::System::Int32 DFHOBAGJABB, ::System::Int32 DKOFFFNEFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EBMIJAMCPPG_AAOHPAPCENL_OFFSET))(this, DFHOBAGJABB, DKOFFFNEFJC);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBMIJAMCPPG_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Void HOFBHNLFMAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBMIJAMCPPG_HOFBHNLFMAD_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::EBMIJAMCPPG KILPCOMOCMD, ::EBMIJAMCPPG BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::EBMIJAMCPPG, ::EBMIJAMCPPG))((::PBYTE)hIl2Cpp + EBMIJAMCPPG_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Boolean EKCCLHHFBJA(::System::String* FOPKPPMGLGH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EBMIJAMCPPG_EKCCLHHFBJA_OFFSET))(this, FOPKPPMGLGH);
	}

	::System::Void FOOLIBCEEDH(::System::String* BAENNHHMHNC, ::System::Int32 DKOFFFNEFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + EBMIJAMCPPG_FOOLIBCEEDH_OFFSET))(this, BAENNHHMHNC, DKOFFFNEFJC);
	}
};
