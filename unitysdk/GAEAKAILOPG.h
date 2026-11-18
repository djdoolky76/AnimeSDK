#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JLHGDEHENID.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GAEAKAILOPG_BNFBEOLMNBE_OFFSET UNITYSDK_OFFSET(0x19326960)
#define GAEAKAILOPG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19326860)
#define GAEAKAILOPG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19326710)
#define GAEAKAILOPG_KANHKDKJKIM_OFFSET UNITYSDK_OFFSET(0x19326D70)
#define GAEAKAILOPG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19326950)
#define GAEAKAILOPG_OEDKPMFDMOG_OFFSET UNITYSDK_OFFSET(0x19326C30)
#define GAEAKAILOPG_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19326720)
#define GAEAKAILOPG__CTOR_OFFSET UNITYSDK_OFFSET(0x19326700)

inline static constexpr unsigned int GAEAKAILOPG_TypeDefinitionIndex = 10703;

class GAEAKAILOPG : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::JLHGDEHENID HBDPAIKANDB; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* CHGIBNCABBF; // 0x28
	::System::Int32 FEPMEGGMJKJ; // 0x30
	::System::Int32 PCMOJLNOPPM; // 0x34
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 DEFMEODEOJO; // 0x3C
	::System::Int32 HAPPDLPJEDA; // 0x40
	::System::Int32 NNPNCDADEDD; // 0x44
	::System::Int32 BPIALGLFMJI; // 0x48

	::System::Void _ctor(::JLHGDEHENID LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JLHGDEHENID, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GAEAKAILOPG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GAEAKAILOPG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEAKAILOPG_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEAKAILOPG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEAKAILOPG_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* BNFBEOLMNBE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEAKAILOPG_BNFBEOLMNBE_OFFSET))(this);
	}

	::System::Int32 OEDKPMFDMOG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEAKAILOPG_OEDKPMFDMOG_OFFSET))(this);
	}

	::System::Int32 KANHKDKJKIM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEAKAILOPG_KANHKDKJKIM_OFFSET))(this);
	}
};
