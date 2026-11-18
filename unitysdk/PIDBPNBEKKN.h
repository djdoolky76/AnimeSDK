#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMFBNFKFBBG.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Object; }
namespace System { class String; }

#define PIDBPNBEKKN_AEKGPFNFHIG_OFFSET UNITYSDK_OFFSET(0x7CBC20)
#define PIDBPNBEKKN_CMNNGBHKPBD_OFFSET UNITYSDK_OFFSET(0x43CDE0)
#define PIDBPNBEKKN_DFFHECLJJAL_OFFSET UNITYSDK_OFFSET(0x408580)
#define PIDBPNBEKKN_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x7CBD40)
#define PIDBPNBEKKN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7CBA70)
#define PIDBPNBEKKN_EQUALS_OFFSET UNITYSDK_OFFSET(0x7CB9C0)
#define PIDBPNBEKKN_FCCINGJHEJK_OFFSET UNITYSDK_OFFSET(0x3CF140)
#define PIDBPNBEKKN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7CBA80)
#define PIDBPNBEKKN_HLPCPFDGCGI_OFFSET UNITYSDK_OFFSET(0x411A70)
#define PIDBPNBEKKN_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x7CBBB0)
#define PIDBPNBEKKN_IBBLCAOMCKF_OFFSET UNITYSDK_OFFSET(0x7CBC90)
#define PIDBPNBEKKN_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x184770F0)
#define PIDBPNBEKKN_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x7CBDC0)
#define PIDBPNBEKKN_JJAKMKAGOLM_OFFSET UNITYSDK_OFFSET(0x359320)
#define PIDBPNBEKKN_LHCDBPKIBJG_OFFSET UNITYSDK_OFFSET(0x409330)
#define PIDBPNBEKKN_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x18476D30)
#define PIDBPNBEKKN_PHHPCJOJCEI_OFFSET UNITYSDK_OFFSET(0x42FDC0)
#define PIDBPNBEKKN_PPGBHNIJOIB_OFFSET UNITYSDK_OFFSET(0x18476F20)
#define PIDBPNBEKKN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7CBBA0)
#define PIDBPNBEKKN__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7CB990)
#define PIDBPNBEKKN__CTOR_2_OFFSET UNITYSDK_OFFSET(0x7CB9B0)
#define PIDBPNBEKKN__CTOR_OFFSET UNITYSDK_OFFSET(0x7CB960)

inline static constexpr unsigned int PIDBPNBEKKN_TypeDefinitionIndex = 59528;

struct alignas(4) PIDBPNBEKKN
{
	::FMFBNFKFBBG LMKNEFMBDIC; // 0x10
	::System::Single OMKJABINBHH; // 0x14
	::System::Single DBICHAJOLFD; // 0x18
	::System::Single CDAOMEFCOLI; // 0x1C
	::System::Single FEHKJBGFNAL; // 0x20

	::System::Void _ctor(::FMFBNFKFBBG AIGNOKFEPJN, ::System::Single HAAEBCOBKFF, ::System::Single BFMMEICFNCD, ::System::Single JBGLCAFPGHK, ::System::Single KKAMDFNMMJH)
	{
		return ((::System::Void(*)(::PVOID, ::FMFBNFKFBBG, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIDBPNBEKKN__CTOR_OFFSET))(this, AIGNOKFEPJN, HAAEBCOBKFF, BFMMEICFNCD, JBGLCAFPGHK, KKAMDFNMMJH);
	}

	::System::Void _ctor_1(::FMFBNFKFBBG AIGNOKFEPJN, ::UnityEngine::Vector2 OHOGDOMNHNK, ::UnityEngine::Vector2 BEPMDFENBMH)
	{
		return ((::System::Void(*)(::PVOID, ::FMFBNFKFBBG, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + PIDBPNBEKKN__CTOR_1_OFFSET))(this, AIGNOKFEPJN, OHOGDOMNHNK, BEPMDFENBMH);
	}

	/*
	::System::Void _ctor_2(::PIDBPNBEKKN KHGFAKJKDGG)
	{
		return ((::System::Void(*)(::PVOID, ::PIDBPNBEKKN))((::PBYTE)hIl2Cpp + PIDBPNBEKKN__CTOR_2_OFFSET))(this, KHGFAKJKDGG);
	}
	*/

	/*
	::System::Boolean Equals(::PIDBPNBEKKN LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::PIDBPNBEKKN))((::PBYTE)hIl2Cpp + PIDBPNBEKKN_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIDBPNBEKKN_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIDBPNBEKKN_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIDBPNBEKKN_TOSTRING_OFFSET))(this);
	}

	::UnityEngine::Vector2 CMNNGBHKPBD()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + PIDBPNBEKKN_CMNNGBHKPBD_OFFSET))(this);
	}

	::System::Single LHCDBPKIBJG()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIDBPNBEKKN_LHCDBPKIBJG_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::PIDBPNBEKKN KILPCOMOCMD, ::PIDBPNBEKKN BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::PIDBPNBEKKN, ::PIDBPNBEKKN))((::PBYTE)hIl2Cpp + PIDBPNBEKKN_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIDBPNBEKKN_HLPHPBAODIF_OFFSET))(this);
	}

	::FMFBNFKFBBG JJAKMKAGOLM()
	{
		return ((::FMFBNFKFBBG(*)(::PVOID))((::PBYTE)hIl2Cpp + PIDBPNBEKKN_JJAKMKAGOLM_OFFSET))(this);
	}

	::UnityEngine::Vector2 AEKGPFNFHIG()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + PIDBPNBEKKN_AEKGPFNFHIG_OFFSET))(this);
	}

	/*
	static ::PIDBPNBEKKN PPGBHNIJOIB()
	{
		return ((::PIDBPNBEKKN(*)())((::PBYTE)hIl2Cpp + PIDBPNBEKKN_PPGBHNIJOIB_OFFSET))();
	}
	*/

	::System::Single PHHPCJOJCEI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIDBPNBEKKN_PHHPCJOJCEI_OFFSET))(this);
	}

	::System::Single DFFHECLJJAL()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIDBPNBEKKN_DFFHECLJJAL_OFFSET))(this);
	}

	::System::Void IBBLCAOMCKF(::System::Single HAAEBCOBKFF, ::System::Single BFMMEICFNCD, ::System::Single JBGLCAFPGHK, ::System::Single KKAMDFNMMJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIDBPNBEKKN_IBBLCAOMCKF_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD, JBGLCAFPGHK, KKAMDFNMMJH);
	}

	::UnityEngine::Vector2 FCCINGJHEJK()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + PIDBPNBEKKN_FCCINGJHEJK_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIDBPNBEKKN_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Single HLPCPFDGCGI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIDBPNBEKKN_HLPCPFDGCGI_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::PIDBPNBEKKN KILPCOMOCMD, ::PIDBPNBEKKN BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::PIDBPNBEKKN, ::PIDBPNBEKKN))((::PBYTE)hIl2Cpp + PIDBPNBEKKN_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIDBPNBEKKN_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
