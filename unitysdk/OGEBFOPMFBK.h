#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEBNGKDJJDO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define OGEBFOPMFBK_CCAMFAKDCHK_OFFSET UNITYSDK_OFFSET(0x17FDEFF0)
#define OGEBFOPMFBK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17FDEEF0)
#define OGEBFOPMFBK_FMLCNLPPFIK_OFFSET UNITYSDK_OFFSET(0x17FDF270)
#define OGEBFOPMFBK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17FDEDA0)
#define OGEBFOPMFBK_HGBBAECNJBA_OFFSET UNITYSDK_OFFSET(0x17FDF3B0)
#define OGEBFOPMFBK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17FDEFE0)
#define OGEBFOPMFBK_MLKFNKGDBPN_OFFSET UNITYSDK_OFFSET(0x17FDF130)
#define OGEBFOPMFBK_MNBDOJDNKKK_OFFSET UNITYSDK_OFFSET(0x17FDEDB0)
#define OGEBFOPMFBK__CTOR_OFFSET UNITYSDK_OFFSET(0x17FDED90)

inline static constexpr unsigned int OGEBFOPMFBK_TypeDefinitionIndex = 14942;

class OGEBFOPMFBK : public ::System::Object
{
public:
	::OEBNGKDJJDO HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 HDDMLDDOMFD; // 0x28
	::System::Int32 KBGPIOKGCGF; // 0x2C
	::System::Int32 KOOEJMGJFAB; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 OPLLFKIAJAP; // 0x38
	::System::Int32 DHMNCEEMGFI; // 0x3C

	::System::Void _ctor(::OEBNGKDJJDO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OEBNGKDJJDO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OGEBFOPMFBK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OGEBFOPMFBK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MNBDOJDNKKK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGEBFOPMFBK_MNBDOJDNKKK_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGEBFOPMFBK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OGEBFOPMFBK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 CCAMFAKDCHK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGEBFOPMFBK_CCAMFAKDCHK_OFFSET))(this);
	}

	::System::Int32 MLKFNKGDBPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGEBFOPMFBK_MLKFNKGDBPN_OFFSET))(this);
	}

	::System::Int32 FMLCNLPPFIK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGEBFOPMFBK_FMLCNLPPFIK_OFFSET))(this);
	}

	::System::Int32 HGBBAECNJBA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGEBFOPMFBK_HGBBAECNJBA_OFFSET))(this);
	}
};
