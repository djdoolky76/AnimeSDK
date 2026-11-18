#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/INIBNMLGNFN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define NDPHFFPMILC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1CCE9500)
#define NDPHFFPMILC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1CCE94F0)
#define NDPHFFPMILC_IPFAFPNCHLK_OFFSET UNITYSDK_OFFSET(0x1CCE9270)
#define NDPHFFPMILC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1CCE9260)
#define NDPHFFPMILC_LKKFKGFHPDB_OFFSET UNITYSDK_OFFSET(0x1CCE93B0)
#define NDPHFFPMILC__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCE9250)

inline static constexpr unsigned int NDPHFFPMILC_TypeDefinitionIndex = 11095;

class NDPHFFPMILC : public ::System::Object
{
public:
	::INIBNMLGNFN HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 DDINBLGMJCB; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2D
	::System::Byte CNIAANMNOCF; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 DAGKCMAMHFC; // 0x30

	::System::Void _ctor(::INIBNMLGNFN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::INIBNMLGNFN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NDPHFFPMILC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDPHFFPMILC_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 IPFAFPNCHLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDPHFFPMILC_IPFAFPNCHLK_OFFSET))(this);
	}

	::System::Int32 LKKFKGFHPDB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDPHFFPMILC_LKKFKGFHPDB_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NDPHFFPMILC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDPHFFPMILC_COFGIJJOFLP_OFFSET))(this);
	}
};
