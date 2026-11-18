#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/POGFDMOFPBI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define KEEABFABNNJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17494870)
#define KEEABFABNNJ_DENCCGFBKMB_OFFSET UNITYSDK_OFFSET(0x17494710)
#define KEEABFABNNJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17494700)
#define KEEABFABNNJ_JFDHOHJBKMI_OFFSET UNITYSDK_OFFSET(0x17494340)
#define KEEABFABNNJ_LDJFMFMFLEN_OFFSET UNITYSDK_OFFSET(0x174945C0)
#define KEEABFABNNJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17494450)
#define KEEABFABNNJ_LNHLCEJBOIN_OFFSET UNITYSDK_OFFSET(0x17494460)
#define KEEABFABNNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17494330)

inline static constexpr unsigned int KEEABFABNNJ_TypeDefinitionIndex = 14466;

class KEEABFABNNJ : public ::System::Object
{
public:
	::POGFDMOFPBI HBDPAIKANDB; // 0x10
	::System::String* NDKGEOHHGDA; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Single IHDLJELLCDK; // 0x30
	::System::Int32 LLJGEEPEBGD; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Byte GCHCDJCFCEG; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A
	::System::Byte CNIAANMNOCF; // 0x3B
	::System::Single MCBFIBNDJJF; // 0x3C

	::System::Void _ctor(::POGFDMOFPBI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::POGFDMOFPBI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KEEABFABNNJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* JFDHOHJBKMI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEABFABNNJ_JFDHOHJBKMI_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEABFABNNJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Single LNHLCEJBOIN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEABFABNNJ_LNHLCEJBOIN_OFFSET))(this);
	}

	::System::Int32 LDJFMFMFLEN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEABFABNNJ_LDJFMFMFLEN_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KEEABFABNNJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single DENCCGFBKMB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEABFABNNJ_DENCCGFBKMB_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEABFABNNJ_COFGIJJOFLP_OFFSET))(this);
	}
};
