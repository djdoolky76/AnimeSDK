#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNODMPIKDNC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define HNABDBHEEMK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x160FE0A0)
#define HNABDBHEEMK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x160FDF50)
#define HNABDBHEEMK_GFFFEIDADHC_OFFSET UNITYSDK_OFFSET(0x160FDF60)
#define HNABDBHEEMK_IPAPENEEAPG_OFFSET UNITYSDK_OFFSET(0x160FE190)
#define HNABDBHEEMK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x160FE2D0)
#define HNABDBHEEMK__CTOR_OFFSET UNITYSDK_OFFSET(0x160FDF40)

inline static constexpr unsigned int HNABDBHEEMK_TypeDefinitionIndex = 13434;

class HNABDBHEEMK : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::CNODMPIKDNC HBDPAIKANDB; // 0x18
	::System::Int32 AHAKEHINFKN; // 0x28
	::System::Int32 HFPNPCAFBAA; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32

	::System::Void _ctor(::CNODMPIKDNC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CNODMPIKDNC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HNABDBHEEMK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HNABDBHEEMK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 GFFFEIDADHC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNABDBHEEMK_GFFFEIDADHC_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNABDBHEEMK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 IPAPENEEAPG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNABDBHEEMK_IPAPENEEAPG_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNABDBHEEMK_LJANCIBECFG_OFFSET))(this);
	}
};
