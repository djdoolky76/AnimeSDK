#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDCHDHGPHDG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define DHKDBFBCKDI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B9A6040)
#define DHKDBFBCKDI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B9A5DB0)
#define DHKDBFBCKDI_GGAJLLDGFMP_OFFSET UNITYSDK_OFFSET(0x1B9A5DC0)
#define DHKDBFBCKDI_GKAMCMIJFHJ_OFFSET UNITYSDK_OFFSET(0x1B9A6270)
#define DHKDBFBCKDI_HGELKFBDJNK_OFFSET UNITYSDK_OFFSET(0x1B9A5F00)
#define DHKDBFBCKDI_JHFEPMOEBEJ_OFFSET UNITYSDK_OFFSET(0x1B9A6130)
#define DHKDBFBCKDI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B9A64F0)
#define DHKDBFBCKDI_NIHGEMPPPJB_OFFSET UNITYSDK_OFFSET(0x1B9A63B0)
#define DHKDBFBCKDI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9A5DA0)

inline static constexpr unsigned int DHKDBFBCKDI_TypeDefinitionIndex = 14336;

class DHKDBFBCKDI : public ::System::Object
{
public:
	::HDCHDHGPHDG HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 OKBBGPGIODD; // 0x28
	::System::Int32 CHOOODDDHAL; // 0x2C
	::System::Int32 IEIGLGNAECB; // 0x30
	::System::Int32 PDMDFJIJHOD; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 LFAHNJGALFI; // 0x3C

	::System::Void _ctor(::HDCHDHGPHDG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HDCHDHGPHDG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DHKDBFBCKDI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DHKDBFBCKDI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 GGAJLLDGFMP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHKDBFBCKDI_GGAJLLDGFMP_OFFSET))(this);
	}

	::System::Int32 HGELKFBDJNK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHKDBFBCKDI_HGELKFBDJNK_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHKDBFBCKDI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 JHFEPMOEBEJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHKDBFBCKDI_JHFEPMOEBEJ_OFFSET))(this);
	}

	::System::Int32 GKAMCMIJFHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHKDBFBCKDI_GKAMCMIJFHJ_OFFSET))(this);
	}

	::System::Int32 NIHGEMPPPJB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHKDBFBCKDI_NIHGEMPPPJB_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DHKDBFBCKDI_LJANCIBECFG_OFFSET))(this);
	}
};
