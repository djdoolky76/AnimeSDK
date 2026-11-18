#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KBCNMGEJMDA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MDPNAHJACIG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x195754B0)
#define MDPNAHJACIG_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x19575260)
#define MDPNAHJACIG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x195755A0)
#define MDPNAHJACIG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19575250)
#define MDPNAHJACIG_LKOCEHBNBBL_OFFSET UNITYSDK_OFFSET(0x19575370)
#define MDPNAHJACIG_OIFKOPIILOO_OFFSET UNITYSDK_OFFSET(0x19575000)
#define MDPNAHJACIG_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19575110)
#define MDPNAHJACIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19574FF0)

inline static constexpr unsigned int MDPNAHJACIG_TypeDefinitionIndex = 13598;

class MDPNAHJACIG : public ::System::Object
{
public:
	::System::String* IENCBDEPMFJ; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::KBCNMGEJMDA HBDPAIKANDB; // 0x20
	::System::String* ODGNAOHIOCJ; // 0x30
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x3C
	::System::Int32 MNDPKPCNIHH; // 0x40
	::System::Int32 OGGLHFBJMCP; // 0x44

	::System::Void _ctor(::KBCNMGEJMDA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KBCNMGEJMDA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MDPNAHJACIG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* OIFKOPIILOO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDPNAHJACIG_OIFKOPIILOO_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDPNAHJACIG_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDPNAHJACIG_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDPNAHJACIG_DECMGICKDLH_OFFSET))(this);
	}

	::System::Int32 LKOCEHBNBBL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDPNAHJACIG_LKOCEHBNBBL_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDPNAHJACIG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MDPNAHJACIG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
