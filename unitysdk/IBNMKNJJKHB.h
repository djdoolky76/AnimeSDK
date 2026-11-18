#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCMEEGFMMGP.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define IBNMKNJJKHB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17C16430)
#define IBNMKNJJKHB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17C167E0)
#define IBNMKNJJKHB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17C167D0)
#define IBNMKNJJKHB_LPIEDGKONKD_OFFSET UNITYSDK_OFFSET(0x17C16680)
#define IBNMKNJJKHB_PHDNPIENAHJ_OFFSET UNITYSDK_OFFSET(0x17C16520)
#define IBNMKNJJKHB__CTOR_OFFSET UNITYSDK_OFFSET(0x17C16420)

inline static constexpr unsigned int IBNMKNJJKHB_TypeDefinitionIndex = 13142;

class IBNMKNJJKHB : public ::System::Object
{
public:
	::Foundation::AssetPath ELKHMOGFKOL; // 0x10
	::DCMEEGFMMGP HBDPAIKANDB; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::UInt64 MHFKPMAGOEE; // 0x38
	::System::Byte CNIAANMNOCF; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x41
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x42

	::System::Void _ctor(::DCMEEGFMMGP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DCMEEGFMMGP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IBNMKNJJKHB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNMKNJJKHB_COFGIJJOFLP_OFFSET))(this);
	}

	::Foundation::AssetPath PHDNPIENAHJ()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNMKNJJKHB_PHDNPIENAHJ_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNMKNJJKHB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IBNMKNJJKHB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::UInt64 LPIEDGKONKD()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNMKNJJKHB_LPIEDGKONKD_OFFSET))(this);
	}
};
