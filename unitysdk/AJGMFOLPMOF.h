#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKOFCMCICKC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define AJGMFOLPMOF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17A6F4A0)
#define AJGMFOLPMOF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17A6F810)
#define AJGMFOLPMOF_GKAMCMIJFHJ_OFFSET UNITYSDK_OFFSET(0x17A6F590)
#define AJGMFOLPMOF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17A6F820)
#define AJGMFOLPMOF_OFDHBMPOCPM_OFFSET UNITYSDK_OFFSET(0x17A6F6D0)
#define AJGMFOLPMOF__CTOR_OFFSET UNITYSDK_OFFSET(0x17A6F490)

inline static constexpr unsigned int AJGMFOLPMOF_TypeDefinitionIndex = 9654;

class AJGMFOLPMOF : public ::System::Object
{
public:
	::HKOFCMCICKC HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Byte CNIAANMNOCF; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x29
	::System::Byte ACIOBDEBDNK; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 OKBBGPGIODD; // 0x2C
	::System::Int32 HMNEPJGNLIE; // 0x30

	::System::Void _ctor(::HKOFCMCICKC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HKOFCMCICKC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AJGMFOLPMOF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGMFOLPMOF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 GKAMCMIJFHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGMFOLPMOF_GKAMCMIJFHJ_OFFSET))(this);
	}

	::System::Int32 OFDHBMPOCPM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGMFOLPMOF_OFDHBMPOCPM_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AJGMFOLPMOF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGMFOLPMOF_LJANCIBECFG_OFFSET))(this);
	}
};
