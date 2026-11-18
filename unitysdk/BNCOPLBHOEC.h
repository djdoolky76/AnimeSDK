#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NGMDIBPKNGM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define BNCOPLBHOEC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x157318C0)
#define BNCOPLBHOEC_DLOPLJFNAHO_OFFSET UNITYSDK_OFFSET(0x157319C0)
#define BNCOPLBHOEC_EGFCGJNIICG_OFFSET UNITYSDK_OFFSET(0x157314F0)
#define BNCOPLBHOEC_EOKEPOPNEGB_OFFSET UNITYSDK_OFFSET(0x157313E0)
#define BNCOPLBHOEC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x15731630)
#define BNCOPLBHOEC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x157319B0)
#define BNCOPLBHOEC_MFLMGECAGIA_OFFSET UNITYSDK_OFFSET(0x15731640)
#define BNCOPLBHOEC_PLJNLFEMMLL_OFFSET UNITYSDK_OFFSET(0x157312A0)
#define BNCOPLBHOEC_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x15731780)
#define BNCOPLBHOEC__CTOR_OFFSET UNITYSDK_OFFSET(0x15731290)

inline static constexpr unsigned int BNCOPLBHOEC_TypeDefinitionIndex = 14179;

class BNCOPLBHOEC : public ::System::Object
{
public:
	::NGMDIBPKNGM HBDPAIKANDB; // 0x10
	::System::String* NDLLPGOEGPH; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 BLNGMJDDMFD; // 0x30
	::System::Int32 FLJKHHBKDKB; // 0x34
	::System::Int32 PCMOJLNOPPM; // 0x38
	::System::Int32 FEIOEHMLAIM; // 0x3C
	::System::Int32 EDOEPHPBJHH; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x44
	::System::Byte CNIAANMNOCF; // 0x45
	::System::Byte ACIOBDEBDNK; // 0x46

	::System::Void _ctor(::NGMDIBPKNGM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NGMDIBPKNGM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BNCOPLBHOEC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PLJNLFEMMLL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCOPLBHOEC_PLJNLFEMMLL_OFFSET))(this);
	}

	::System::String* EOKEPOPNEGB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCOPLBHOEC_EOKEPOPNEGB_OFFSET))(this);
	}

	::System::Int32 EGFCGJNIICG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCOPLBHOEC_EGFCGJNIICG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BNCOPLBHOEC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MFLMGECAGIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCOPLBHOEC_MFLMGECAGIA_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCOPLBHOEC_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCOPLBHOEC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCOPLBHOEC_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 DLOPLJFNAHO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCOPLBHOEC_DLOPLJFNAHO_OFFSET))(this);
	}
};
