#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKELPJHKFHD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PBDOOBCCPEK_AFGPOEHAJGD_OFFSET UNITYSDK_OFFSET(0x19DD6170)
#define PBDOOBCCPEK_BJACIKEIIIO_OFFSET UNITYSDK_OFFSET(0x19DD63A0)
#define PBDOOBCCPEK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19DD62B0)
#define PBDOOBCCPEK_FHGJAEBPMCD_OFFSET UNITYSDK_OFFSET(0x19DD6670)
#define PBDOOBCCPEK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19DD67C0)
#define PBDOOBCCPEK_KDFAOMCGIDO_OFFSET UNITYSDK_OFFSET(0x19DD6030)
#define PBDOOBCCPEK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19DD67B0)
#define PBDOOBCCPEK__CTOR_OFFSET UNITYSDK_OFFSET(0x19DD6020)

inline static constexpr unsigned int PBDOOBCCPEK_TypeDefinitionIndex = 10400;

class PBDOOBCCPEK : public ::System::Object
{
public:
	::AKELPJHKFHD HBDPAIKANDB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* GHGEKKKNLJC; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 EFCCIFMMBHG; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 ECLBHCNKELM; // 0x38
	::System::Int32 PJEJAAPJPOO; // 0x3C

	::System::Void _ctor(::AKELPJHKFHD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AKELPJHKFHD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PBDOOBCCPEK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 KDFAOMCGIDO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDOOBCCPEK_KDFAOMCGIDO_OFFSET))(this);
	}

	::System::Int32 AFGPOEHAJGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDOOBCCPEK_AFGPOEHAJGD_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDOOBCCPEK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* BJACIKEIIIO()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDOOBCCPEK_BJACIKEIIIO_OFFSET))(this);
	}

	::System::Int32 FHGJAEBPMCD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDOOBCCPEK_FHGJAEBPMCD_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDOOBCCPEK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PBDOOBCCPEK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
