#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EHJOMHJBOMB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define DDCNGKDOBKF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x16616AD0)
#define DDCNGKDOBKF_DEIIJNOMHIA_OFFSET UNITYSDK_OFFSET(0x16616570)
#define DDCNGKDOBKF_DOEDAHHFJFD_OFFSET UNITYSDK_OFFSET(0x166169C0)
#define DDCNGKDOBKF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x16616680)
#define DDCNGKDOBKF_HBABHHPAAEO_OFFSET UNITYSDK_OFFSET(0x16616BC0)
#define DDCNGKDOBKF_JEENIBMIGDC_OFFSET UNITYSDK_OFFSET(0x166167A0)
#define DDCNGKDOBKF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x16616CD0)
#define DDCNGKDOBKF_LLHMIGCLLDE_OFFSET UNITYSDK_OFFSET(0x166168B0)
#define DDCNGKDOBKF_MFCDAOCMECG_OFFSET UNITYSDK_OFFSET(0x16616690)
#define DDCNGKDOBKF__CTOR_OFFSET UNITYSDK_OFFSET(0x16616560)

inline static constexpr unsigned int DDCNGKDOBKF_TypeDefinitionIndex = 11360;

class DDCNGKDOBKF : public ::System::Object
{
public:
	::EHJOMHJBOMB HBDPAIKANDB; // 0x10
	::System::String* OCDHCLJEKGM; // 0x20
	::System::String* HNDDLONKFEB; // 0x28
	::System::String* CEPENBNMDOK; // 0x30
	::System::String* FAOPOPNLIHG; // 0x38
	::System::String* LHMEAKIOBJH; // 0x40
	::System::String* CAAHCHDPPOE; // 0x48
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x50
	::System::Byte ACIOBDEBDNK; // 0x58
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x59
	::System::Byte CNIAANMNOCF; // 0x5A

	::System::Void _ctor(::EHJOMHJBOMB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EHJOMHJBOMB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DDCNGKDOBKF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* DEIIJNOMHIA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCNGKDOBKF_DEIIJNOMHIA_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DDCNGKDOBKF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* MFCDAOCMECG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCNGKDOBKF_MFCDAOCMECG_OFFSET))(this);
	}

	::System::String* JEENIBMIGDC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCNGKDOBKF_JEENIBMIGDC_OFFSET))(this);
	}

	::System::String* LLHMIGCLLDE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCNGKDOBKF_LLHMIGCLLDE_OFFSET))(this);
	}

	::System::String* DOEDAHHFJFD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCNGKDOBKF_DOEDAHHFJFD_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCNGKDOBKF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* HBABHHPAAEO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCNGKDOBKF_HBABHHPAAEO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCNGKDOBKF_LJANCIBECFG_OFFSET))(this);
	}
};
