#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJLEBAJIIDE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define MNFJOBLOMFD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17FCBC00)
#define MNFJOBLOMFD_FFDLHLKJPPD_OFFSET UNITYSDK_OFFSET(0x17FCBD00)
#define MNFJOBLOMFD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17FCBCF0)
#define MNFJOBLOMFD_GKAMCMIJFHJ_OFFSET UNITYSDK_OFFSET(0x17FCBAB0)
#define MNFJOBLOMFD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17FCBBF0)
#define MNFJOBLOMFD__CTOR_OFFSET UNITYSDK_OFFSET(0x17FCBAA0)

inline static constexpr unsigned int MNFJOBLOMFD_TypeDefinitionIndex = 13579;

class MNFJOBLOMFD : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::DJLEBAJIIDE HBDPAIKANDB; // 0x18
	::System::Int32 OKBBGPGIODD; // 0x28
	::System::Int32 ADMMOBOGNAO; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32

	::System::Void _ctor(::DJLEBAJIIDE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DJLEBAJIIDE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MNFJOBLOMFD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 GKAMCMIJFHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFJOBLOMFD_GKAMCMIJFHJ_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFJOBLOMFD_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFJOBLOMFD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MNFJOBLOMFD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 FFDLHLKJPPD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFJOBLOMFD_FFDLHLKJPPD_OFFSET))(this);
	}
};
