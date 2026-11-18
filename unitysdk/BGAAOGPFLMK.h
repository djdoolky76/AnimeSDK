#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NKOKPBANAIG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define BGAAOGPFLMK_BFBOEBFALIE_OFFSET UNITYSDK_OFFSET(0x1A16C260)
#define BGAAOGPFLMK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A16C770)
#define BGAAOGPFLMK_DLOPLJFNAHO_OFFSET UNITYSDK_OFFSET(0x1A16C010)
#define BGAAOGPFLMK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A16C000)
#define BGAAOGPFLMK_KKLBAEDPNLC_OFFSET UNITYSDK_OFFSET(0x1A16C620)
#define BGAAOGPFLMK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A16C760)
#define BGAAOGPFLMK_MBJIJBEEMHD_OFFSET UNITYSDK_OFFSET(0x1A16C3A0)
#define BGAAOGPFLMK_MLKFNKGDBPN_OFFSET UNITYSDK_OFFSET(0x1A16C4E0)
#define BGAAOGPFLMK_OGAHDLMOLEG_OFFSET UNITYSDK_OFFSET(0x1A16C150)
#define BGAAOGPFLMK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A16BFF0)

inline static constexpr unsigned int BGAAOGPFLMK_TypeDefinitionIndex = 12397;

class BGAAOGPFLMK : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* KBBFHNDNCLN; // 0x18
	::NKOKPBANAIG HBDPAIKANDB; // 0x20
	::System::Int32 BCAMJBPMMBA; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 FLJKHHBKDKB; // 0x38
	::System::Int32 FAFMPKJHPDH; // 0x3C
	::System::Int32 HDDMLDDOMFD; // 0x40
	::System::Int32 PNHIMPBNMIH; // 0x44

	::System::Void _ctor(::NKOKPBANAIG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NKOKPBANAIG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BGAAOGPFLMK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BGAAOGPFLMK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 DLOPLJFNAHO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGAAOGPFLMK_DLOPLJFNAHO_OFFSET))(this);
	}

	::System::String* OGAHDLMOLEG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGAAOGPFLMK_OGAHDLMOLEG_OFFSET))(this);
	}

	::System::Int32 BFBOEBFALIE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGAAOGPFLMK_BFBOEBFALIE_OFFSET))(this);
	}

	::System::Int32 MBJIJBEEMHD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGAAOGPFLMK_MBJIJBEEMHD_OFFSET))(this);
	}

	::System::Int32 MLKFNKGDBPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGAAOGPFLMK_MLKFNKGDBPN_OFFSET))(this);
	}

	::System::Int32 KKLBAEDPNLC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGAAOGPFLMK_KKLBAEDPNLC_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGAAOGPFLMK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGAAOGPFLMK_COFGIJJOFLP_OFFSET))(this);
	}
};
