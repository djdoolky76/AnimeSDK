#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KBPKOPILAGK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define APPICJECNCI_AACFOBOHOKO_OFFSET UNITYSDK_OFFSET(0x17751120)
#define APPICJECNCI_BLIDBFLFJFM_OFFSET UNITYSDK_OFFSET(0x17750D40)
#define APPICJECNCI_BPGEJCCMICI_OFFSET UNITYSDK_OFFSET(0x17750E80)
#define APPICJECNCI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17750C50)
#define APPICJECNCI_ELBFFGMMBMA_OFFSET UNITYSDK_OFFSET(0x17750FE0)
#define APPICJECNCI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17750FD0)
#define APPICJECNCI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17750FC0)
#define APPICJECNCI_PBEGNEAFJOG_OFFSET UNITYSDK_OFFSET(0x17750B10)
#define APPICJECNCI__CTOR_OFFSET UNITYSDK_OFFSET(0x17750B00)

inline static constexpr unsigned int APPICJECNCI_TypeDefinitionIndex = 17594;

class APPICJECNCI : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::KBPKOPILAGK HBDPAIKANDB; // 0x18
	::System::Int32 CCBGPBKIDPA; // 0x28
	::System::Byte CNIAANMNOCF; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 HFCKJHEPHAH; // 0x30
	::System::Int32 HELHDCBPBGG; // 0x34
	::System::Int32 JBJPLCAMLKB; // 0x38
	::System::Int32 JJGGMHPGMKJ; // 0x3C

	::System::Void _ctor(::KBPKOPILAGK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KBPKOPILAGK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + APPICJECNCI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PBEGNEAFJOG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APPICJECNCI_PBEGNEAFJOG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APPICJECNCI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 BLIDBFLFJFM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APPICJECNCI_BLIDBFLFJFM_OFFSET))(this);
	}

	::System::Int32 BPGEJCCMICI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APPICJECNCI_BPGEJCCMICI_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APPICJECNCI_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + APPICJECNCI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 ELBFFGMMBMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APPICJECNCI_ELBFFGMMBMA_OFFSET))(this);
	}

	::System::Int32 AACFOBOHOKO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APPICJECNCI_AACFOBOHOKO_OFFSET))(this);
	}
};
