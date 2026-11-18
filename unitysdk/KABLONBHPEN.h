#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNJJALCAFAN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KABLONBHPEN_BELMIKIMNBG_OFFSET UNITYSDK_OFFSET(0x1B4FE5E0)
#define KABLONBHPEN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B4FDE50)
#define KABLONBHPEN_DDBHCFJLIHG_OFFSET UNITYSDK_OFFSET(0x1B4FE6F0)
#define KABLONBHPEN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B4FE5D0)
#define KABLONBHPEN_JKHFBNFAMKH_OFFSET UNITYSDK_OFFSET(0x1B4FE1C0)
#define KABLONBHPEN_KLPAMPAHMAB_OFFSET UNITYSDK_OFFSET(0x1B4FDF40)
#define KABLONBHPEN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B4FE830)
#define KABLONBHPEN_MAKFEEODOPE_OFFSET UNITYSDK_OFFSET(0x1B4FE490)
#define KABLONBHPEN_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B4FE080)
#define KABLONBHPEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4FDE40)

inline static constexpr unsigned int KABLONBHPEN_TypeDefinitionIndex = 9792;

class KABLONBHPEN : public ::System::Object
{
public:
	::HNJJALCAFAN HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* FLOLIGFFBOO; // 0x28
	::System::String* DKKIPCINKKF; // 0x30
	::System::String* NPFIPILNLBF; // 0x38
	::System::Int32 ODHJIPIEMKO; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x44
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x45
	::System::Byte CNIAANMNOCF; // 0x46
	::System::Byte _padding0[0x1];
	::System::Int32 LFGHFLPCJNF; // 0x48
	::System::Int32 PCMOJLNOPPM; // 0x4C
	::System::Int32 HGAKLHIIGAM; // 0x50

	::System::Void _ctor(::HNJJALCAFAN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HNJJALCAFAN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KABLONBHPEN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KABLONBHPEN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 KLPAMPAHMAB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KABLONBHPEN_KLPAMPAHMAB_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KABLONBHPEN_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* JKHFBNFAMKH()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KABLONBHPEN_JKHFBNFAMKH_OFFSET))(this);
	}

	::System::Int32 MAKFEEODOPE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KABLONBHPEN_MAKFEEODOPE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KABLONBHPEN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* BELMIKIMNBG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KABLONBHPEN_BELMIKIMNBG_OFFSET))(this);
	}

	::System::Int32 DDBHCFJLIHG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KABLONBHPEN_DDBHCFJLIHG_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KABLONBHPEN_LJANCIBECFG_OFFSET))(this);
	}
};
