#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCAFOJDHJIA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define ECFFMGKDAGH_ADKEEIILKJE_OFFSET UNITYSDK_OFFSET(0x19F44CD0)
#define ECFFMGKDAGH_AGJJHNDAHEG_OFFSET UNITYSDK_OFFSET(0x19F44950)
#define ECFFMGKDAGH_APKGCHCPNEL_OFFSET UNITYSDK_OFFSET(0x19F44810)
#define ECFFMGKDAGH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19F44AA0)
#define ECFFMGKDAGH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19F44E10)
#define ECFFMGKDAGH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19F44A90)
#define ECFFMGKDAGH_PGIKMGJJKNP_OFFSET UNITYSDK_OFFSET(0x19F44B90)
#define ECFFMGKDAGH__CTOR_OFFSET UNITYSDK_OFFSET(0x19F44800)

inline static constexpr unsigned int ECFFMGKDAGH_TypeDefinitionIndex = 14270;

class ECFFMGKDAGH : public ::System::Object
{
public:
	::BCAFOJDHJIA HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 INHPLEKJOOP; // 0x28
	::System::Int32 KIDADGFKIMC; // 0x2C
	::System::Int32 NJCNIBDPANK; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 MAFKPBJJIFF; // 0x38

	::System::Void _ctor(::BCAFOJDHJIA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BCAFOJDHJIA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ECFFMGKDAGH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 APKGCHCPNEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFFMGKDAGH_APKGCHCPNEL_OFFSET))(this);
	}

	::System::Int32 AGJJHNDAHEG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFFMGKDAGH_AGJJHNDAHEG_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFFMGKDAGH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFFMGKDAGH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PGIKMGJJKNP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFFMGKDAGH_PGIKMGJJKNP_OFFSET))(this);
	}

	::System::Int32 ADKEEIILKJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFFMGKDAGH_ADKEEIILKJE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ECFFMGKDAGH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
