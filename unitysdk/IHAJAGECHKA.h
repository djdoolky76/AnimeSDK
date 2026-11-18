#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MPPCBEMAPMI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IHAJAGECHKA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18BBADB0)
#define IHAJAGECHKA_FADJPCNACOA_OFFSET UNITYSDK_OFFSET(0x18BBAEA0)
#define IHAJAGECHKA_FDEALHODMDC_OFFSET UNITYSDK_OFFSET(0x18BBB450)
#define IHAJAGECHKA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18BBB430)
#define IHAJAGECHKA_IDPHMJEFAIL_OFFSET UNITYSDK_OFFSET(0x18BBB100)
#define IHAJAGECHKA_KGNOALBHGEP_OFFSET UNITYSDK_OFFSET(0x18BBB320)
#define IHAJAGECHKA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18BBB440)
#define IHAJAGECHKA_LMNEGNMMOPD_OFFSET UNITYSDK_OFFSET(0x18BBAC70)
#define IHAJAGECHKA_PMLGDGPMNJI_OFFSET UNITYSDK_OFFSET(0x18BBB210)
#define IHAJAGECHKA__CTOR_OFFSET UNITYSDK_OFFSET(0x18BBAC60)

inline static constexpr unsigned int IHAJAGECHKA_TypeDefinitionIndex = 17229;

class IHAJAGECHKA : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* AOKLIIDCEHO; // 0x18
	::System::String* LMKCKFOAEBJ; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* ENKJLDCHEEH; // 0x28
	::System::String* NFMIJLJNKPM; // 0x30
	::MPPCBEMAPMI HBDPAIKANDB; // 0x38
	::System::Int32 OBAHAILDOCP; // 0x48
	::System::Int32 PCLNBDAILMI; // 0x4C
	::System::Byte ACIOBDEBDNK; // 0x50
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x51
	::System::Byte CNIAANMNOCF; // 0x52

	::System::Void _ctor(::MPPCBEMAPMI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MPPCBEMAPMI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IHAJAGECHKA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 LMNEGNMMOPD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHAJAGECHKA_LMNEGNMMOPD_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHAJAGECHKA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* FADJPCNACOA()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHAJAGECHKA_FADJPCNACOA_OFFSET))(this);
	}

	::System::String* IDPHMJEFAIL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHAJAGECHKA_IDPHMJEFAIL_OFFSET))(this);
	}

	::System::String* PMLGDGPMNJI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHAJAGECHKA_PMLGDGPMNJI_OFFSET))(this);
	}

	::System::String* KGNOALBHGEP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHAJAGECHKA_KGNOALBHGEP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IHAJAGECHKA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IHAJAGECHKA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 FDEALHODMDC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHAJAGECHKA_FDEALHODMDC_OFFSET))(this);
	}
};
