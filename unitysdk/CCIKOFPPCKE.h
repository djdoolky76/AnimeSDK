#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIDJOMFHAHI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define CCIKOFPPCKE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A177DA0)
#define CCIKOFPPCKE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A178110)
#define CCIKOFPPCKE_KDENJOHDIKG_OFFSET UNITYSDK_OFFSET(0x1A177E90)
#define CCIKOFPPCKE_KMJOKBIIEDB_OFFSET UNITYSDK_OFFSET(0x1A178120)
#define CCIKOFPPCKE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A177C50)
#define CCIKOFPPCKE_MDPBPBNMKJA_OFFSET UNITYSDK_OFFSET(0x1A177C60)
#define CCIKOFPPCKE_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1A177FD0)
#define CCIKOFPPCKE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A177C40)

inline static constexpr unsigned int CCIKOFPPCKE_TypeDefinitionIndex = 11126;

class CCIKOFPPCKE : public ::System::Object
{
public:
	::DIDJOMFHAHI HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 PNFFGGEECPG; // 0x28
	::System::Int32 OCFJMFHDEBP; // 0x2C
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Int32 LNDOJKEIPFI; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A

	::System::Void _ctor(::DIDJOMFHAHI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DIDJOMFHAHI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CCIKOFPPCKE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCIKOFPPCKE_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 MDPBPBNMKJA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCIKOFPPCKE_MDPBPBNMKJA_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCIKOFPPCKE_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 KDENJOHDIKG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCIKOFPPCKE_KDENJOHDIKG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCIKOFPPCKE_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CCIKOFPPCKE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 KMJOKBIIEDB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCIKOFPPCKE_KMJOKBIIEDB_OFFSET))(this);
	}
};
