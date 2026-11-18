#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGEDOCMEJFG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define GNKJMOHNOND_AIKEIHBLDMD_OFFSET UNITYSDK_OFFSET(0x1BAD15F0)
#define GNKJMOHNOND_CKLIFMNINPD_OFFSET UNITYSDK_OFFSET(0x1BAD13D0)
#define GNKJMOHNOND_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BAD11D0)
#define GNKJMOHNOND_EGAJECKNKFB_OFFSET UNITYSDK_OFFSET(0x1BAD12C0)
#define GNKJMOHNOND_EHPFAMKGABN_OFFSET UNITYSDK_OFFSET(0x1BAD14E0)
#define GNKJMOHNOND_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BAD11C0)
#define GNKJMOHNOND_HDINLGHEEPA_OFFSET UNITYSDK_OFFSET(0x1BAD10A0)
#define GNKJMOHNOND_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BAD11B0)
#define GNKJMOHNOND_PEAICLADJHD_OFFSET UNITYSDK_OFFSET(0x1BAD1700)
#define GNKJMOHNOND__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAD1090)

inline static constexpr unsigned int GNKJMOHNOND_TypeDefinitionIndex = 10722;

class GNKJMOHNOND : public ::System::Object
{
public:
	::System::String* MOKBKEBNFED; // 0x10
	::System::String* OKGJGGFCAJO; // 0x18
	::IGEDOCMEJFG HBDPAIKANDB; // 0x20
	::System::String* IDHBGLFOFJN; // 0x30
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::System::String* GEEBMJFBFPK; // 0x40
	::System::String* GMMMLKAOCNK; // 0x48
	::System::String* GGIFFBCEJPJ; // 0x50
	::System::Byte ACIOBDEBDNK; // 0x58
	::System::Byte CNIAANMNOCF; // 0x59
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x5A

	::System::Void _ctor(::IGEDOCMEJFG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IGEDOCMEJFG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GNKJMOHNOND__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* HDINLGHEEPA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKJMOHNOND_HDINLGHEEPA_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKJMOHNOND_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GNKJMOHNOND_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKJMOHNOND_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* EGAJECKNKFB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKJMOHNOND_EGAJECKNKFB_OFFSET))(this);
	}

	::System::String* CKLIFMNINPD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKJMOHNOND_CKLIFMNINPD_OFFSET))(this);
	}

	::System::String* EHPFAMKGABN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKJMOHNOND_EHPFAMKGABN_OFFSET))(this);
	}

	::System::String* AIKEIHBLDMD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKJMOHNOND_AIKEIHBLDMD_OFFSET))(this);
	}

	::System::String* PEAICLADJHD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKJMOHNOND_PEAICLADJHD_OFFSET))(this);
	}
};
