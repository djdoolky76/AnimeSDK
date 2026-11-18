#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECAEOJKFFAE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define KDOKCMALHAP_CFOONJHKOJN_OFFSET UNITYSDK_OFFSET(0x1B500BA0)
#define KDOKCMALHAP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B500F70)
#define KDOKCMALHAP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B501060)
#define KDOKCMALHAP_GKAMCMIJFHJ_OFFSET UNITYSDK_OFFSET(0x1B500CE0)
#define KDOKCMALHAP_KKLBAEDPNLC_OFFSET UNITYSDK_OFFSET(0x1B500E20)
#define KDOKCMALHAP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B500F60)
#define KDOKCMALHAP_MFLMGECAGIA_OFFSET UNITYSDK_OFFSET(0x1B500A60)
#define KDOKCMALHAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B500A50)

inline static constexpr unsigned int KDOKCMALHAP_TypeDefinitionIndex = 12689;

class KDOKCMALHAP : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::ECAEOJKFFAE HBDPAIKANDB; // 0x18
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x29
	::System::Byte CNIAANMNOCF; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 FAFMPKJHPDH; // 0x2C
	::System::Int32 JFFPLPGOLNL; // 0x30
	::System::Int32 OKBBGPGIODD; // 0x34
	::System::Int32 FEIOEHMLAIM; // 0x38

	::System::Void _ctor(::ECAEOJKFFAE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::ECAEOJKFFAE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KDOKCMALHAP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 MFLMGECAGIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOKCMALHAP_MFLMGECAGIA_OFFSET))(this);
	}

	::System::Int32 CFOONJHKOJN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOKCMALHAP_CFOONJHKOJN_OFFSET))(this);
	}

	::System::Int32 GKAMCMIJFHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOKCMALHAP_GKAMCMIJFHJ_OFFSET))(this);
	}

	::System::Int32 KKLBAEDPNLC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOKCMALHAP_KKLBAEDPNLC_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOKCMALHAP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOKCMALHAP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KDOKCMALHAP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
