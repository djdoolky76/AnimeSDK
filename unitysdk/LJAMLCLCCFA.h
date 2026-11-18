#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEPAAGPDOFP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define LJAMLCLCCFA_AAAGAOPIFMC_OFFSET UNITYSDK_OFFSET(0x190FDA00)
#define LJAMLCLCCFA_BLFKNELJFFB_OFFSET UNITYSDK_OFFSET(0x190FD8C0)
#define LJAMLCLCCFA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x190FD6C0)
#define LJAMLCLCCFA_DDJHGPIDANB_OFFSET UNITYSDK_OFFSET(0x190FDB40)
#define LJAMLCLCCFA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x190FD6B0)
#define LJAMLCLCCFA_JIBDHLJJECJ_OFFSET UNITYSDK_OFFSET(0x190FD7B0)
#define LJAMLCLCCFA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x190FDC80)
#define LJAMLCLCCFA_LJDLCEKMAAN_OFFSET UNITYSDK_OFFSET(0x190FDC90)
#define LJAMLCLCCFA__CTOR_OFFSET UNITYSDK_OFFSET(0x190FD6A0)

inline static constexpr unsigned int LJAMLCLCCFA_TypeDefinitionIndex = 17679;

class LJAMLCLCCFA : public ::System::Object
{
public:
	::System::String* JIDNHMOKLCM; // 0x10
	::GEPAAGPDOFP HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Byte _padding0[0x3];
	::System::Int32 NOPAHEPILAI; // 0x34
	::System::Int32 IFNBCJMHDKG; // 0x38
	::System::Int32 CBIPJECPMGD; // 0x3C
	::System::Int32 PNEDIGFOADH; // 0x40
	::System::Byte GCHCDJCFCEG; // 0x44
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x45
	::System::Byte ACIOBDEBDNK; // 0x46
	::System::Byte BGNBHAPEFNC; // 0x47

	::System::Void _ctor(::GEPAAGPDOFP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GEPAAGPDOFP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LJAMLCLCCFA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LJAMLCLCCFA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJAMLCLCCFA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* JIBDHLJJECJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJAMLCLCCFA_JIBDHLJJECJ_OFFSET))(this);
	}

	::System::Int32 BLFKNELJFFB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJAMLCLCCFA_BLFKNELJFFB_OFFSET))(this);
	}

	::System::Int32 AAAGAOPIFMC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJAMLCLCCFA_AAAGAOPIFMC_OFFSET))(this);
	}

	::System::Int32 DDJHGPIDANB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJAMLCLCCFA_DDJHGPIDANB_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJAMLCLCCFA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 LJDLCEKMAAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJAMLCLCCFA_LJDLCEKMAAN_OFFSET))(this);
	}
};
