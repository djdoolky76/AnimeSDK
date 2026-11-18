#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCHPDECIDHL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define DBCJCCCKDGP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1574B2B0)
#define DBCJCCCKDGP_FBIFLLKILHM_OFFSET UNITYSDK_OFFSET(0x1574B170)
#define DBCJCCCKDGP_FDAGADNDDJH_OFFSET UNITYSDK_OFFSET(0x1574AED0)
#define DBCJCCCKDGP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1574B010)
#define DBCJCCCKDGP_LFGIDEIHCID_OFFSET UNITYSDK_OFFSET(0x1574B020)
#define DBCJCCCKDGP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1574B160)
#define DBCJCCCKDGP__CTOR_OFFSET UNITYSDK_OFFSET(0x1574AEC0)

inline static constexpr unsigned int DBCJCCCKDGP_TypeDefinitionIndex = 15178;

class DBCJCCCKDGP : public ::System::Object
{
public:
	::BCHPDECIDHL HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 PBDAKNMHKDJ; // 0x28
	::System::Int32 CKALBMAMAKP; // 0x2C
	::System::Int32 KCNFBGDIALO; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36

	::System::Void _ctor(::BCHPDECIDHL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BCHPDECIDHL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DBCJCCCKDGP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 FDAGADNDDJH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCJCCCKDGP_FDAGADNDDJH_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DBCJCCCKDGP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 LFGIDEIHCID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCJCCCKDGP_LFGIDEIHCID_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCJCCCKDGP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 FBIFLLKILHM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCJCCCKDGP_FBIFLLKILHM_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCJCCCKDGP_COFGIJJOFLP_OFFSET))(this);
	}
};
