#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GOHPFOJMBGM.h"
#include "unitysdk/IFMDDIOEJGI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PLDCHEKEIMN_AILJCNIMCOL_OFFSET UNITYSDK_OFFSET(0x1C1ADBB0)
#define PLDCHEKEIMN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1C1ADEC0)
#define PLDCHEKEIMN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1C1ADEB0)
#define PLDCHEKEIMN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1C1ADFB0)
#define PLDCHEKEIMN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1ADBA0)

inline static constexpr unsigned int PLDCHEKEIMN_TypeDefinitionIndex = 13754;

class PLDCHEKEIMN : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::Collections::Generic::List_1<::IFMDDIOEJGI>* AOLMMJBBKMA; // 0x18
	::GOHPFOJMBGM HBDPAIKANDB; // 0x20
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32

	::System::Void _ctor(::GOHPFOJMBGM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GOHPFOJMBGM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PLDCHEKEIMN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::IFMDDIOEJGI>* AILJCNIMCOL()
	{
		return ((::System::Collections::Generic::List_1<::IFMDDIOEJGI>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLDCHEKEIMN_AILJCNIMCOL_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PLDCHEKEIMN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLDCHEKEIMN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLDCHEKEIMN_LJANCIBECFG_OFFSET))(this);
	}
};
