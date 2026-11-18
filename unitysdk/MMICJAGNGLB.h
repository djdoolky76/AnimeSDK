#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNGCKNKJPCB.h"
#include "unitysdk/MBNNAHPLBLM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MMICJAGNGLB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BA9D580)
#define MMICJAGNGLB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BA9D670)
#define MMICJAGNGLB_HILMHLCEPBO_OFFSET UNITYSDK_OFFSET(0x1BA9D420)
#define MMICJAGNGLB_HOMIAAGCLJD_OFFSET UNITYSDK_OFFSET(0x1BA9D0B0)
#define MMICJAGNGLB_JLNNDNFFOHM_OFFSET UNITYSDK_OFFSET(0x1BA9D1D0)
#define MMICJAGNGLB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BA9D1C0)
#define MMICJAGNGLB_MECGDPPEPLO_OFFSET UNITYSDK_OFFSET(0x1BA9D2E0)
#define MMICJAGNGLB_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1BA9CF70)
#define MMICJAGNGLB__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA9CF60)

inline static constexpr unsigned int MMICJAGNGLB_TypeDefinitionIndex = 16424;

class MMICJAGNGLB : public ::System::Object
{
public:
	::System::String* DBAENIMPKHI; // 0x10
	::MBNNAHPLBLM HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::String* MGDDBANCPDH; // 0x30
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A
	::System::Boolean KIOCDFJFPDH; // 0x3B
	::System::Int32 PCMOJLNOPPM; // 0x3C
	::CNGCKNKJPCB DODPAEHNPMD; // 0x40

	::System::Void _ctor(::MBNNAHPLBLM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MBNNAHPLBLM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MMICJAGNGLB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMICJAGNGLB_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::String* HOMIAAGCLJD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMICJAGNGLB_HOMIAAGCLJD_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMICJAGNGLB_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* JLNNDNFFOHM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMICJAGNGLB_JLNNDNFFOHM_OFFSET))(this);
	}

	::CNGCKNKJPCB MECGDPPEPLO()
	{
		return ((::CNGCKNKJPCB(*)(::PVOID))((::PBYTE)hIl2Cpp + MMICJAGNGLB_MECGDPPEPLO_OFFSET))(this);
	}

	::System::Boolean HILMHLCEPBO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMICJAGNGLB_HILMHLCEPBO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMICJAGNGLB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MMICJAGNGLB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
