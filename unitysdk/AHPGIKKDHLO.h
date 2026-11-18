#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define AHPGIKKDHLO_LCIBNFDJBDD_OFFSET UNITYSDK_OFFSET(0x11BA0920)
#define AHPGIKKDHLO_MDJCFAKBOJH_OFFSET UNITYSDK_OFFSET(0x11BA07C0)
#define AHPGIKKDHLO_MEBNNLNLICF_OFFSET UNITYSDK_OFFSET(0x11BA07D0)
#define AHPGIKKDHLO_MEHCAABLCOG_OFFSET UNITYSDK_OFFSET(0x11BA0830)
#define AHPGIKKDHLO_NPOLNFDBOOD_1_OFFSET UNITYSDK_OFFSET(0x11BA06A0)
#define AHPGIKKDHLO_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x11BA07E0)
#define AHPGIKKDHLO_OKMEFGGMPFG_OFFSET UNITYSDK_OFFSET(0x11BA05F0)
#define AHPGIKKDHLO_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x11BA0740)
#define AHPGIKKDHLO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x11BA0640)
#define AHPGIKKDHLO__CTOR_2_OFFSET UNITYSDK_OFFSET(0x11BA0670)
#define AHPGIKKDHLO__CTOR_3_OFFSET UNITYSDK_OFFSET(0x11BA05C0)
#define AHPGIKKDHLO__CTOR_OFFSET UNITYSDK_OFFSET(0x11BA0500)

inline static constexpr unsigned int AHPGIKKDHLO_TypeDefinitionIndex = 73413;

class AHPGIKKDHLO : public ::System::Object
{
public:
	::System::Action* GLBEHDHFEOE; // 0x10
	::System::Int32 EKKHLDDHOGF; // 0x18
	::System::Int32 KPIHONDIDLC; // 0x1C
	::System::Int32 JHFKDGBCOBA; // 0x20
	::System::Boolean IFAPGEPAPLJ; // 0x24
	::System::Boolean _NLDIPOADILM_k__BackingField; // 0x25

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPGIKKDHLO__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Int32 KPIHONDIDLC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AHPGIKKDHLO__CTOR_1_OFFSET))(this, KPIHONDIDLC);
	}

	::System::Void _ctor_2(::System::Int32 KPIHONDIDLC, ::System::Int32 KKIAHJODOIA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AHPGIKKDHLO__CTOR_2_OFFSET))(this, KPIHONDIDLC, KKIAHJODOIA);
	}

	::System::Void _ctor_3(::System::Int32 KPIHONDIDLC, ::System::Boolean FIPHFGHNNBE, ::System::Int32 KKIAHJODOIA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + AHPGIKKDHLO__CTOR_3_OFFSET))(this, KPIHONDIDLC, FIPHFGHNNBE, KKIAHJODOIA);
	}

	::System::Void PLPONJAKNEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPGIKKDHLO_PLPONJAKNEB_OFFSET))(this);
	}

	::System::Boolean MDJCFAKBOJH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPGIKKDHLO_MDJCFAKBOJH_OFFSET))(this);
	}

	::System::Void MEBNNLNLICF(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AHPGIKKDHLO_MEBNNLNLICF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPGIKKDHLO_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::String* MEHCAABLCOG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPGIKKDHLO_MEHCAABLCOG_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD_1(::System::Boolean FIPHFGHNNBE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AHPGIKKDHLO_NPOLNFDBOOD_1_OFFSET))(this, FIPHFGHNNBE);
	}

	::System::Single LCIBNFDJBDD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPGIKKDHLO_LCIBNFDJBDD_OFFSET))(this);
	}

	::System::Void OKMEFGGMPFG(::System::Boolean FIPHFGHNNBE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AHPGIKKDHLO_OKMEFGGMPFG_OFFSET))(this, FIPHFGHNNBE);
	}
};
