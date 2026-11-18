#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PNIIJECMBIM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define JJBCDPJDFCL_BHHBKCAJMNJ_OFFSET UNITYSDK_OFFSET(0x1BAF8E00)
#define JJBCDPJDFCL_CBFGNLOCMHF_OFFSET UNITYSDK_OFFSET(0x1BAF9510)
#define JJBCDPJDFCL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BAF8F40)
#define JJBCDPJDFCL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BAF98D0)
#define JJBCDPJDFCL_GPJBLOEGLEL_OFFSET UNITYSDK_OFFSET(0x1BAF93D0)
#define JJBCDPJDFCL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BAF9030)
#define JJBCDPJDFCL_MNHNEAHPIBE_OFFSET UNITYSDK_OFFSET(0x1BAF9040)
#define JJBCDPJDFCL_NCABDDPCGBH_OFFSET UNITYSDK_OFFSET(0x1BAF9650)
#define JJBCDPJDFCL_OPFBCMEPIHL_OFFSET UNITYSDK_OFFSET(0x1BAF9290)
#define JJBCDPJDFCL_PDNLCIHIDOG_OFFSET UNITYSDK_OFFSET(0x1BAF9790)
#define JJBCDPJDFCL_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1BAF9150)
#define JJBCDPJDFCL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAF8DF0)

inline static constexpr unsigned int JJBCDPJDFCL_TypeDefinitionIndex = 13010;

class JJBCDPJDFCL : public ::System::Object
{
public:
	::PNIIJECMBIM HBDPAIKANDB; // 0x10
	::System::String* AGIHICFGFMN; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 AHFDIPMNEFO; // 0x30
	::System::Int32 MNLKJICKDLO; // 0x34
	::System::Int32 CDPGPFAALKM; // 0x38
	::System::Int32 LJLIDOJDJIL; // 0x3C
	::System::Int32 PCMOJLNOPPM; // 0x40
	::System::Int32 LKKKGDDOAHB; // 0x44
	::System::Byte ACIOBDEBDNK; // 0x48
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x49
	::System::Byte CNIAANMNOCF; // 0x4A
	::System::Byte _padding0[0x1];
	::System::Int32 MBOGEMGGFPE; // 0x4C

	::System::Void _ctor(::PNIIJECMBIM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PNIIJECMBIM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JJBCDPJDFCL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 BHHBKCAJMNJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJBCDPJDFCL_BHHBKCAJMNJ_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJBCDPJDFCL_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JJBCDPJDFCL_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* MNHNEAHPIBE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJBCDPJDFCL_MNHNEAHPIBE_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJBCDPJDFCL_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 OPFBCMEPIHL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJBCDPJDFCL_OPFBCMEPIHL_OFFSET))(this);
	}

	::System::Int32 GPJBLOEGLEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJBCDPJDFCL_GPJBLOEGLEL_OFFSET))(this);
	}

	::System::Int32 CBFGNLOCMHF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJBCDPJDFCL_CBFGNLOCMHF_OFFSET))(this);
	}

	::System::Int32 NCABDDPCGBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJBCDPJDFCL_NCABDDPCGBH_OFFSET))(this);
	}

	::System::Int32 PDNLCIHIDOG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJBCDPJDFCL_PDNLCIHIDOG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JJBCDPJDFCL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
