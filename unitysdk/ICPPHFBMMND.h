#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PFDCOILIGIO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define ICPPHFBMMND_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B7CAA20)
#define ICPPHFBMMND_EKBEIICFBEE_OFFSET UNITYSDK_OFFSET(0x1B7CA790)
#define ICPPHFBMMND_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B7CAA10)
#define ICPPHFBMMND_GKAMCMIJFHJ_OFFSET UNITYSDK_OFFSET(0x1B7CA8D0)
#define ICPPHFBMMND_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B7CAB10)
#define ICPPHFBMMND_MBJIJBEEMHD_OFFSET UNITYSDK_OFFSET(0x1B7CA650)
#define ICPPHFBMMND__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7CA640)

inline static constexpr unsigned int ICPPHFBMMND_TypeDefinitionIndex = 9940;

class ICPPHFBMMND : public ::System::Object
{
public:
	::PFDCOILIGIO HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 GMGKMOPBHKG; // 0x28
	::System::Int32 PNHIMPBNMIH; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 OKBBGPGIODD; // 0x34

	::System::Void _ctor(::PFDCOILIGIO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PFDCOILIGIO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ICPPHFBMMND__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 MBJIJBEEMHD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICPPHFBMMND_MBJIJBEEMHD_OFFSET))(this);
	}

	::System::Int32 EKBEIICFBEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICPPHFBMMND_EKBEIICFBEE_OFFSET))(this);
	}

	::System::Int32 GKAMCMIJFHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICPPHFBMMND_GKAMCMIJFHJ_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICPPHFBMMND_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICPPHFBMMND_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICPPHFBMMND_LJANCIBECFG_OFFSET))(this);
	}
};
