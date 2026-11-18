#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBMJICILCHE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define LCDFBMKOIDL_BBEGLIMEODC_OFFSET UNITYSDK_OFFSET(0x1B7EC7C0)
#define LCDFBMKOIDL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B7EC480)
#define LCDFBMKOIDL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B7EC900)
#define LCDFBMKOIDL_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x1B7EC910)
#define LCDFBMKOIDL_IEJBHOLKNPO_OFFSET UNITYSDK_OFFSET(0x1B7EC570)
#define LCDFBMKOIDL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B7EC330)
#define LCDFBMKOIDL_OHNJEPJALGC_OFFSET UNITYSDK_OFFSET(0x1B7EC680)
#define LCDFBMKOIDL_OJLCHPLOPBC_OFFSET UNITYSDK_OFFSET(0x1B7EC340)
#define LCDFBMKOIDL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7EC320)

inline static constexpr unsigned int LCDFBMKOIDL_TypeDefinitionIndex = 12577;

class LCDFBMKOIDL : public ::System::Object
{
public:
	::System::String* OCKDFOKJNEM; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::OBMJICILCHE HBDPAIKANDB; // 0x20
	::System::Int32 PECFNGDFBFF; // 0x30
	::System::Int32 POKJNGILNLB; // 0x34
	::System::Int32 KAEOEIKPNFO; // 0x38
	::System::Int32 JPNMMDLLJGM; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x41
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x42

	::System::Void _ctor(::OBMJICILCHE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OBMJICILCHE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LCDFBMKOIDL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDFBMKOIDL_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 OJLCHPLOPBC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDFBMKOIDL_OJLCHPLOPBC_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDFBMKOIDL_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* IEJBHOLKNPO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDFBMKOIDL_IEJBHOLKNPO_OFFSET))(this);
	}

	::System::Int32 OHNJEPJALGC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDFBMKOIDL_OHNJEPJALGC_OFFSET))(this);
	}

	::System::Int32 BBEGLIMEODC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDFBMKOIDL_BBEGLIMEODC_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LCDFBMKOIDL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDFBMKOIDL_HKELPCLHLEC_OFFSET))(this);
	}
};
