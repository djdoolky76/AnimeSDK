#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FHKNEFOKIII.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define FHECPJDDLGK_COBHFNFAMJC_OFFSET UNITYSDK_OFFSET(0x1B105880)
#define FHECPJDDLGK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B1059C0)
#define FHECPJDDLGK_FIGNOOEDDNC_OFFSET UNITYSDK_OFFSET(0x1B105740)
#define FHECPJDDLGK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B105730)
#define FHECPJDDLGK_GKAMCMIJFHJ_OFFSET UNITYSDK_OFFSET(0x1B105AB0)
#define FHECPJDDLGK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B105D30)
#define FHECPJDDLGK_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B105BF0)
#define FHECPJDDLGK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B105720)

inline static constexpr unsigned int FHECPJDDLGK_TypeDefinitionIndex = 12663;

class FHECPJDDLGK : public ::System::Object
{
public:
	::FHKNEFOKIII HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 PCMOJLNOPPM; // 0x28
	::System::Int32 OKBBGPGIODD; // 0x2C
	::System::Int32 PCCPGAMLEMB; // 0x30
	::System::Int32 KIALABKLANK; // 0x34
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A

	::System::Void _ctor(::FHKNEFOKIII LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FHKNEFOKIII, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FHECPJDDLGK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FHECPJDDLGK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 FIGNOOEDDNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHECPJDDLGK_FIGNOOEDDNC_OFFSET))(this);
	}

	::System::Int32 COBHFNFAMJC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHECPJDDLGK_COBHFNFAMJC_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHECPJDDLGK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 GKAMCMIJFHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHECPJDDLGK_GKAMCMIJFHJ_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHECPJDDLGK_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHECPJDDLGK_LJANCIBECFG_OFFSET))(this);
	}
};
