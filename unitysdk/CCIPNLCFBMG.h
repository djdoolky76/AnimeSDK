#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PNDLGDDJCDM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CCIPNLCFBMG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17F04690)
#define CCIPNLCFBMG_FNOAHMKNNMC_OFFSET UNITYSDK_OFFSET(0x17F049F0)
#define CCIPNLCFBMG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17F04B30)
#define CCIPNLCFBMG_ICDCMBOBLBK_OFFSET UNITYSDK_OFFSET(0x17F04790)
#define CCIPNLCFBMG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17F04780)
#define CCIPNLCFBMG__CTOR_OFFSET UNITYSDK_OFFSET(0x17F04680)

inline static constexpr unsigned int CCIPNLCFBMG_TypeDefinitionIndex = 15678;

class CCIPNLCFBMG : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::PNDLGDDJCDM HBDPAIKANDB; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* GOIHMLBFILG; // 0x28
	::System::Int32 DHEGAMMBMBM; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36

	::System::Void _ctor(::PNDLGDDJCDM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PNDLGDDJCDM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CCIPNLCFBMG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCIPNLCFBMG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCIPNLCFBMG_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* ICDCMBOBLBK()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCIPNLCFBMG_ICDCMBOBLBK_OFFSET))(this);
	}

	::System::Int32 FNOAHMKNNMC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCIPNLCFBMG_FNOAHMKNNMC_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CCIPNLCFBMG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
